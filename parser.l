%{
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "parser.tab.h"
int lineNum=1;
%}

%option noyywrap
int			[1-9][0-9]*|0
boolean		("true"|"false")
string		(\\.|[^\"])* 
realnum  ([0-9]+\.[0-9]+) 
ws 			[ \t\n\r]
%%

:					{return COLON;}
,					{return COMMA;}
\{					{return OBB;}
\}					{return OBE;}
\[					{return AB;}
\]					{return AE;}
"-"           {printf("\nError in line %i, only positive value is accepted\n", lineNum);
               exit(EXIT_FAILURE);}

\"last\"				{ return LAST; }
\"active\"				{ return ACTIVE; }

\"gameId\"			   { return GAMEID; }	
\"drawId\"			   { return DRAWID; }
\"drawTime\"		   { return DRAWTIME;}
\"status\"			   { return STATUS;}
\"drawBreak\"		   { return DRAWBREAK;}
\"visualDraw\"		   { return VISUALDRAW;}
\"pricePoints\"		   { return PRICEPOINTS;}
\"amount\"			   { return AMOUNT;}

\"winningNumbers\"	   { return WINNINGNUMBERS;}
\"list\"			   { return LIST;}
\"bonus\"			   { return BONUS;}

\"prizeCategories\"	   {return PRIZECATEGORIES;}
\"id\"			       {return ID;}
\"divident\"			   { return DIVIDENT;}
\"winners\"	           { return WINNERS;}
\"distributed\"		   { return DISTRIBUTED;}
\"jackpot\"			   { return JACKPOT;}
\"fixed\"	           { return FIXED;}
\"categoryType\"		   { return CATEGORYTYPE;}
\"gameType\"            { return GAMETYPE;}
\"minimumDistributed\"  { return MINIMUMDISTRIBUTED;}


\"wagerStatistics\"	   { return WAGERSTATISTICS;}
\"columns\"			   { return COLUMNS;}
\"wagers\"			   { return WAGERS;}
\"addOn\"			       { return ADDON;}



\"content\"          {return CONTENT;}
\"totalPages\"       {return TOTALPAGES;}
\"totalElements\"    {return TOTALELEMENTS;}
\"numberOfElements\" {return NUMBEROFELEMENTS;}
\"sort\"             {return SORT;}
\"direction\"        {return DIRECTION;}
\"property\"         {return PROPERTY;}
\"ignoreCase\"       {return IGNORECASE;}
\"nullHandling\"     {return NULLHANDLING;}
\"descending\"       {return DESCENDING;}
\"ascending\"        {return ASCENDING;}
\"first\"            {return FIRST;}
\"size\"             {return SIZE;}
\"number\"           {return NUMBER;}


{boolean} 			{printf("\%s",yytext);return BOOLEAN;}
\"{string}\"		{printf("\%s",yytext);return STRING;}
{int}				{printf("\%s",yytext);return INT;}
{realnum}           {printf("\%s",yytext);return REAL_NUM;}
\n					{++lineNum;} 

{ws}				{;}

%%

