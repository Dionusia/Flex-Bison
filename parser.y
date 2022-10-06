%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
extern FILE *yyin;
extern int yylex();
extern char* yytext;
extern int yyparse();
extern int lineNum;
void checkId(char* l);
void checkGameId(char* b);
void checkList(char* a);
void categoryCheck(char* c);
void checkId1(char* m);
void yyerror(const char* s);
%}

//Define the tokens that are going to be used:
%token INT REAL_NUM STRING BOOLEAN
%token COLON COMMA OBB OBE AB AE
%token LAST
%token GAMEID DRAWID DRAWTIME STATUS DRAWBREAK VISUALDRAW PRICEPOINTS AMOUNT
%token WINNINGNUMBERS LIST BONUS PRIZECATEGORIES
%token ID DIVIDENT WINNERS DISTRIBUTED JACKPOT FIXED CATEGORYTYPE GAMETYPE
%token MINIMUMDISTRIBUTED
%token WAGERSTATISTICS COLUMNS WAGERS ADDON
%token ACTIVE
%token CONTENT 
%token TOTALPAGES TOTALELEMENTS LAST2 NUMBEROFELEMENTS SORT DIRECTION
%token PROPERTY IGNORECASE NULLHANDLING DESCENDING
%token ASCENDING FIRST SIZE NUMBER
%start start

%%
start: jsonfile1|jsonfile2;

jsonfile1: OBB {printf("{\n");} last rule active rule1 OBE {printf("}\n");}
;

rule: firstapp | rule COMMA{printf(",\n");} firstapp;
rule1: second | rule1 COMMA{printf(",\n");} second;

firstapp:  gameId| drawId | drawTime| status | drawBreak | visualDraw
      | pricePoints| winningNumbers | prizeCategories| wagerStatistics
      |OBE {printf("}\n");}
				;
				
second:    gameId| drawId | drawTime| status1 | drawBreak | visualDraw
      | pricePoints| winningNumbers | prizeCategories| wagerStatistics1
      |OBE {printf("}\n");}
				;
last:  LAST COLON{printf("\t\"last\": ");} OBB {printf("{\n");};
active: ACTIVE COLON{printf("\t\"active\": ");} OBB {printf("{\n");};

gameId: GAMEID {printf("\t\t\"gameId\"");} COLON {printf(":");}   INT{checkGameId(yytext);};

drawId: DRAWID {printf("\t\t\"drawId\"");} COLON {printf(":");} INT;

drawTime:DRAWTIME {printf("\t\t\"drawTime\"");} COLON {printf(":");} INT ;

status:	STATUS {printf("\t\t\"status\"");} COLON {printf(":");} STRING;

status1:STATUS {printf("\t\t\"status\"");} COLON {printf(":");} ACTIVE {printf("\"active\"");};
drawBreak: DRAWBREAK{printf("\t\t\"drawBreak\"");} COLON {printf(":");} INT ;

visualDraw: VISUALDRAW{printf("\t\t\"visualDraw\"");} COLON {printf(":");} INT ;

pricePoints: PRICEPOINTS{printf("\t\t\"pricePoints\"");} COLON {printf(":");} OBB {printf("{\n");} priceobj OBE {printf("\n\t\t }");};

priceobj: AMOUNT {printf("\t\t\"amount\"");} COLON {printf(":");} REAL_NUM;

winningNumbers: WINNINGNUMBERS COLON OBB {printf("\t\t\"winningNumbers\": {\n");}  list|bonus OBE {printf("\n\t\t}");};
list: LIST {printf("\t\t\"list\"");} COLON {printf(":");} array_num;
bonus: BONUS {printf("\t\t\"bonus\"");} COLON {printf(":");} AB {printf("[\n");} {printf("\t\t\t");}INT AE {printf("\n\t\t]");};;

array_num: AB {printf("[\n");} value AE {printf("\n\t\t]");};
value: 	 {printf("\t\t\t");}INT {checkList(yytext);} COMMA {printf(",\n");}
         {printf("\t\t\t");}INT {checkList(yytext);} COMMA {printf(",\n");}
         {printf("\t\t\t");}INT {checkList(yytext);} COMMA {printf(",\n");}
         {printf("\t\t\t");}INT {checkList(yytext);} COMMA {printf(",\n");}
         {printf("\t\t\t");}INT {checkList(yytext);}
;

prizeCategories: PRIZECATEGORIES COLON AB {printf("\t\t\"prizeCategories\": [\n");} rule2 AE {printf("\n\t\t]");};

;
rule2: prizeobj COMMA{printf(",\n");} 
       prizeobj1 COMMA{printf(",\n");} 
       prizeobj1 COMMA{printf(",\n");}
       prizeobj1 COMMA{printf(",\n");}
       prizeobj1 COMMA{printf(",\n");}
       prizeobj1 COMMA{printf(",\n");}
       prizeobj1 COMMA{printf(",\n");}
       prizeobj1
;

prizeobj: OBB {printf("\t\t{\n");}
          id1 COMMA{printf(",\n");}
          divident COMMA{printf(",\n");}
          winners COMMA{printf(",\n");}
          distributed COMMA{printf(",\n");}
          jackpot COMMA{printf(",\n");}
          fixed COMMA{printf(",\n");}
          categoryType COMMA{printf(",\n");}
          gameType COMMA{printf(",\n");}
          minimumDistributed 
          OBE {printf("\n\t\t}");}
;    
prizeobj1: OBB {printf("\t\t{\n");}
          id COMMA{printf(",\n");}
          divident COMMA{printf(",\n");}
          winners COMMA{printf(",\n");}
          distributed COMMA{printf(",\n");}
          jackpot COMMA{printf(",\n");}
          fixed COMMA{printf(",\n");}
          categoryType COMMA{printf(",\n");}
          gameType 
          OBE {printf("\n\t\t}");}
; 
id1: ID {printf("\t\t\t\"id\"");} COLON {printf(":");} INT {checkId1(yytext);};
id: ID {printf("\t\t\t\"id\"");} COLON {printf(":");} INT {checkId(yytext);};
    
divident: DIVIDENT {printf("\t\t\t\"divident\"");} COLON {printf(":");} REAL_NUM;
winners:WINNERS {printf("\t\t\t\"winners\"");} COLON {printf(":");} INT;
distributed:DISTRIBUTED {printf("\t\t\t\"distributed\"");} COLON {printf(":");} REAL_NUM;
jackpot:JACKPOT {printf("\t\t\t\"jackpot\"");} COLON {printf(":");} REAL_NUM;
fixed:FIXED {printf("\t\t\t\"fixed\"");} COLON {printf(":");} REAL_NUM;
categoryType:CATEGORYTYPE {printf("\t\t\t\"categoryType\"");} COLON {printf(":");} INT{categoryCheck(yytext);};
gameType:GAMETYPE {printf("\t\t\t\"gameType\"");} COLON {printf(":");} STRING;
minimumDistributed:MINIMUMDISTRIBUTED {printf("\t\t\t\"minimumDistributed\"");} COLON {printf(":");} REAL_NUM;

wagerStatistics: WAGERSTATISTICS{printf("\t\t\"wagerStatistics\"");} COLON {printf(":");} OBB {printf("{\n");} wagerobj OBE OBE COMMA {printf("\n\t\t }\n\t},\n");};
wagerStatistics1: WAGERSTATISTICS{printf("\t\t\"wagerStatistics\"");} COLON {printf(":");} OBB {printf("{\n");} wagerobj OBE OBE {printf("\n\t\t }\n\t}\n");};

wagerobj: COLUMNS {printf("\t\t\t\"columns\"");} COLON {printf(":");} INT COMMA{printf(",\n");}
         WAGERS {printf("\t\t\t\"wagers\"");} COLON {printf(":");} INT COMMA{printf(",\n");}
         ADDON {printf("\t\t\t\"addOn\"");} COLON {printf(":");} AB AE {printf("[]");}
;

jsonfile2: OBB {printf("{\n");} content totalPages totalElements last2 numberOfElements sort first size number 
OBE {printf("\n}\n");}
;
content: CONTENT COLON{printf("\"content\": ");} AB {printf("[\n");} rule5 rule5 rule5 rule5 rule5 rule5 rule6 rule6 AE COMMA {printf("\n\t],\n");};
rule5: one|rule5 COMMA{printf(",\n");} one;
rule6: two|rule6 COMMA{printf(",\n");} two;
one:  OBB {printf("\t{\n");} |gameId| drawId | drawTime| status | drawBreak | visualDraw
      | pricePoints| winningNumbers1 | prizeCategories| wagerStatistics
      |OBE {printf("}\n");} 
      ;
two: OBB {printf("\t{\n");}|gameId| drawId | drawTime| status | drawBreak | visualDraw
      | pricePoints| winningNumbers1 | prizeCategories| wagerStatistics1
      |OBE {printf("}\n");}
      ;

winningNumbers1: WINNINGNUMBERS COLON OBB {printf("\t\t\"winningNumbers\": {\n");}  list1|bonus1 OBE {printf("\n\t\t }");};
list1: LIST {printf("\t\t\t\"list\"");} COLON {printf(":");} AB {printf("[");} value1 AE {printf("]");};
bonus1: BONUS {printf("\t\t\t\"bonus\"");} COLON {printf(":");} AB {printf("[");} INT AE {printf("]");};

value1:  INT {checkList(yytext);} COMMA {printf(",");}
         INT {checkList(yytext);} COMMA {printf(",");}
         INT {checkList(yytext);} COMMA {printf(",");}
         INT {checkList(yytext);} COMMA {printf(",");}
         INT {checkList(yytext);}    
;
totalPages: TOTALPAGES {printf("\t\"totalPages\"");} COLON {printf(":");} INT COMMA{printf(",\n");};		
totalElements: TOTALELEMENTS {printf("\t\"totalElements\"");} COLON {printf(":");} INT COMMA{printf(",\n");};
last2: LAST {printf("\t\"last\"");} COLON {printf(":");} BOOLEAN COMMA{printf(",\n");};
numberOfElements: NUMBEROFELEMENTS {printf("\t\"numberOfElements\"");} COLON {printf(":");} INT COMMA{printf(",\n");};
sort: SORT {printf("\t\"sort\"");} COLON {printf(":");} AB{printf("[\n");} sortobj AE COMMA {printf("\t\t],\n");}	;

sortobj:  OBB {printf("\t\t{\n");}
          direction COMMA{printf(",\n");}
          property COMMA{printf(",\n");}
          ignoreCase COMMA{printf(",\n");}
          nullHandling COMMA{printf(",\n");}
          descending COMMA{printf(",\n");}
          ascending
          OBE {printf("\n\t\t}\n");}
;
direction: DIRECTION {printf("\t\t\"direction\"");} COLON {printf(":");} STRING;
property: PROPERTY {printf("\t\t\"property\"");} COLON {printf(":");} STRING;	
ignoreCase: IGNORECASE {printf("\t\t\"ignoreCase\"");} COLON {printf(":");} BOOLEAN;
nullHandling: NULLHANDLING {printf("\t\t\"nullHandling\"");} COLON {printf(":");} STRING;	
descending: DESCENDING {printf("\t\t\"descending\"");} COLON {printf(":");} BOOLEAN;
ascending: ASCENDING {printf("\t\t\"ascending\"");} COLON {printf(":");} BOOLEAN;

first: FIRST {printf("\t\"first\"");} COLON {printf(":");} BOOLEAN COMMA{printf(",\n");};
size: SIZE {printf("\t\"size\"");} COLON {printf(":");} INT COMMA{printf(",\n");};			        	
number: NUMBER {printf("\t\"number\"");} COLON {printf(":");} INT;	

			
%%
void checkList(char* a)
{
   if(atoi(a)<1 |atoi(a)>45)
    {
      printf("\nError in line %i, value out of acceptable range\n", lineNum);
      exit(EXIT_FAILURE);
    }
}


void checkGameId(char* b)
{
   if(atoi(b)== 1100 || atoi(b)==1110|| atoi(b)==2100|| atoi(b)==2101||
       atoi(b)==5103|| atoi(b)==5104|| atoi(b)==5106)
    {
      /*do nothing*/
    }
    else{
      printf("\nError in line %i, wrong gameId\n", lineNum);
      exit(EXIT_FAILURE);
      }
}


void checkId(char* l)
{
   if(atoi(l)<1 |atoi(l)>8)
    {
      printf("\nError in line %i, ID out of acceptable range\n", lineNum);
      exit(EXIT_FAILURE);
    }
}



void checkId1(char* m)
{
   if(atoi(m)!=1)
    {
      printf("\nError in line %i, only id=1 is accepted\n", lineNum);
      exit(EXIT_FAILURE);
    }
}

void categoryCheck(char* c)
{
   if(atoi(c)== 0|| atoi(c)==1)
    {
      /*do nothing*/
    }
    else{
      printf("\nError in line %i, wrong categoryType\n", lineNum);
      exit(EXIT_FAILURE);
      }
}
void yyerror(const char *s) {
	printf(" STOP: Error detected at line: %d\n",lineNum); 
	exit(1);

}

int main(int argc, char* argv[]) {
	FILE *f;
	
		f = fopen(argv[1], "r");
		yyin = f;
		yyparse();
		printf("successfully open and read inputFile!\n");
		return 0;

}
