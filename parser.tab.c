/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.y"

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

#line 88 "parser.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_INT = 3,                        /* INT  */
  YYSYMBOL_REAL_NUM = 4,                   /* REAL_NUM  */
  YYSYMBOL_STRING = 5,                     /* STRING  */
  YYSYMBOL_BOOLEAN = 6,                    /* BOOLEAN  */
  YYSYMBOL_COLON = 7,                      /* COLON  */
  YYSYMBOL_COMMA = 8,                      /* COMMA  */
  YYSYMBOL_OBB = 9,                        /* OBB  */
  YYSYMBOL_OBE = 10,                       /* OBE  */
  YYSYMBOL_AB = 11,                        /* AB  */
  YYSYMBOL_AE = 12,                        /* AE  */
  YYSYMBOL_LAST = 13,                      /* LAST  */
  YYSYMBOL_GAMEID = 14,                    /* GAMEID  */
  YYSYMBOL_DRAWID = 15,                    /* DRAWID  */
  YYSYMBOL_DRAWTIME = 16,                  /* DRAWTIME  */
  YYSYMBOL_STATUS = 17,                    /* STATUS  */
  YYSYMBOL_DRAWBREAK = 18,                 /* DRAWBREAK  */
  YYSYMBOL_VISUALDRAW = 19,                /* VISUALDRAW  */
  YYSYMBOL_PRICEPOINTS = 20,               /* PRICEPOINTS  */
  YYSYMBOL_AMOUNT = 21,                    /* AMOUNT  */
  YYSYMBOL_WINNINGNUMBERS = 22,            /* WINNINGNUMBERS  */
  YYSYMBOL_LIST = 23,                      /* LIST  */
  YYSYMBOL_BONUS = 24,                     /* BONUS  */
  YYSYMBOL_PRIZECATEGORIES = 25,           /* PRIZECATEGORIES  */
  YYSYMBOL_ID = 26,                        /* ID  */
  YYSYMBOL_DIVIDENT = 27,                  /* DIVIDENT  */
  YYSYMBOL_WINNERS = 28,                   /* WINNERS  */
  YYSYMBOL_DISTRIBUTED = 29,               /* DISTRIBUTED  */
  YYSYMBOL_JACKPOT = 30,                   /* JACKPOT  */
  YYSYMBOL_FIXED = 31,                     /* FIXED  */
  YYSYMBOL_CATEGORYTYPE = 32,              /* CATEGORYTYPE  */
  YYSYMBOL_GAMETYPE = 33,                  /* GAMETYPE  */
  YYSYMBOL_MINIMUMDISTRIBUTED = 34,        /* MINIMUMDISTRIBUTED  */
  YYSYMBOL_WAGERSTATISTICS = 35,           /* WAGERSTATISTICS  */
  YYSYMBOL_COLUMNS = 36,                   /* COLUMNS  */
  YYSYMBOL_WAGERS = 37,                    /* WAGERS  */
  YYSYMBOL_ADDON = 38,                     /* ADDON  */
  YYSYMBOL_ACTIVE = 39,                    /* ACTIVE  */
  YYSYMBOL_CONTENT = 40,                   /* CONTENT  */
  YYSYMBOL_TOTALPAGES = 41,                /* TOTALPAGES  */
  YYSYMBOL_TOTALELEMENTS = 42,             /* TOTALELEMENTS  */
  YYSYMBOL_LAST2 = 43,                     /* LAST2  */
  YYSYMBOL_NUMBEROFELEMENTS = 44,          /* NUMBEROFELEMENTS  */
  YYSYMBOL_SORT = 45,                      /* SORT  */
  YYSYMBOL_DIRECTION = 46,                 /* DIRECTION  */
  YYSYMBOL_PROPERTY = 47,                  /* PROPERTY  */
  YYSYMBOL_IGNORECASE = 48,                /* IGNORECASE  */
  YYSYMBOL_NULLHANDLING = 49,              /* NULLHANDLING  */
  YYSYMBOL_DESCENDING = 50,                /* DESCENDING  */
  YYSYMBOL_ASCENDING = 51,                 /* ASCENDING  */
  YYSYMBOL_FIRST = 52,                     /* FIRST  */
  YYSYMBOL_SIZE = 53,                      /* SIZE  */
  YYSYMBOL_NUMBER = 54,                    /* NUMBER  */
  YYSYMBOL_YYACCEPT = 55,                  /* $accept  */
  YYSYMBOL_start = 56,                     /* start  */
  YYSYMBOL_jsonfile1 = 57,                 /* jsonfile1  */
  YYSYMBOL_58_1 = 58,                      /* $@1  */
  YYSYMBOL_rule = 59,                      /* rule  */
  YYSYMBOL_60_2 = 60,                      /* $@2  */
  YYSYMBOL_rule1 = 61,                     /* rule1  */
  YYSYMBOL_62_3 = 62,                      /* $@3  */
  YYSYMBOL_firstapp = 63,                  /* firstapp  */
  YYSYMBOL_second = 64,                    /* second  */
  YYSYMBOL_last = 65,                      /* last  */
  YYSYMBOL_66_4 = 66,                      /* $@4  */
  YYSYMBOL_active = 67,                    /* active  */
  YYSYMBOL_68_5 = 68,                      /* $@5  */
  YYSYMBOL_gameId = 69,                    /* gameId  */
  YYSYMBOL_70_6 = 70,                      /* $@6  */
  YYSYMBOL_71_7 = 71,                      /* $@7  */
  YYSYMBOL_drawId = 72,                    /* drawId  */
  YYSYMBOL_73_8 = 73,                      /* $@8  */
  YYSYMBOL_74_9 = 74,                      /* $@9  */
  YYSYMBOL_drawTime = 75,                  /* drawTime  */
  YYSYMBOL_76_10 = 76,                     /* $@10  */
  YYSYMBOL_77_11 = 77,                     /* $@11  */
  YYSYMBOL_status = 78,                    /* status  */
  YYSYMBOL_79_12 = 79,                     /* $@12  */
  YYSYMBOL_80_13 = 80,                     /* $@13  */
  YYSYMBOL_status1 = 81,                   /* status1  */
  YYSYMBOL_82_14 = 82,                     /* $@14  */
  YYSYMBOL_83_15 = 83,                     /* $@15  */
  YYSYMBOL_drawBreak = 84,                 /* drawBreak  */
  YYSYMBOL_85_16 = 85,                     /* $@16  */
  YYSYMBOL_86_17 = 86,                     /* $@17  */
  YYSYMBOL_visualDraw = 87,                /* visualDraw  */
  YYSYMBOL_88_18 = 88,                     /* $@18  */
  YYSYMBOL_89_19 = 89,                     /* $@19  */
  YYSYMBOL_pricePoints = 90,               /* pricePoints  */
  YYSYMBOL_91_20 = 91,                     /* $@20  */
  YYSYMBOL_92_21 = 92,                     /* $@21  */
  YYSYMBOL_93_22 = 93,                     /* $@22  */
  YYSYMBOL_priceobj = 94,                  /* priceobj  */
  YYSYMBOL_95_23 = 95,                     /* $@23  */
  YYSYMBOL_96_24 = 96,                     /* $@24  */
  YYSYMBOL_winningNumbers = 97,            /* winningNumbers  */
  YYSYMBOL_98_25 = 98,                     /* $@25  */
  YYSYMBOL_list = 99,                      /* list  */
  YYSYMBOL_100_26 = 100,                   /* $@26  */
  YYSYMBOL_101_27 = 101,                   /* $@27  */
  YYSYMBOL_bonus = 102,                    /* bonus  */
  YYSYMBOL_103_28 = 103,                   /* $@28  */
  YYSYMBOL_104_29 = 104,                   /* $@29  */
  YYSYMBOL_105_30 = 105,                   /* $@30  */
  YYSYMBOL_106_31 = 106,                   /* $@31  */
  YYSYMBOL_array_num = 107,                /* array_num  */
  YYSYMBOL_108_32 = 108,                   /* $@32  */
  YYSYMBOL_value = 109,                    /* value  */
  YYSYMBOL_110_33 = 110,                   /* $@33  */
  YYSYMBOL_111_34 = 111,                   /* $@34  */
  YYSYMBOL_112_35 = 112,                   /* $@35  */
  YYSYMBOL_113_36 = 113,                   /* $@36  */
  YYSYMBOL_114_37 = 114,                   /* $@37  */
  YYSYMBOL_115_38 = 115,                   /* $@38  */
  YYSYMBOL_116_39 = 116,                   /* $@39  */
  YYSYMBOL_117_40 = 117,                   /* $@40  */
  YYSYMBOL_118_41 = 118,                   /* $@41  */
  YYSYMBOL_119_42 = 119,                   /* $@42  */
  YYSYMBOL_120_43 = 120,                   /* $@43  */
  YYSYMBOL_121_44 = 121,                   /* $@44  */
  YYSYMBOL_122_45 = 122,                   /* $@45  */
  YYSYMBOL_prizeCategories = 123,          /* prizeCategories  */
  YYSYMBOL_124_46 = 124,                   /* $@46  */
  YYSYMBOL_rule2 = 125,                    /* rule2  */
  YYSYMBOL_126_47 = 126,                   /* $@47  */
  YYSYMBOL_127_48 = 127,                   /* $@48  */
  YYSYMBOL_128_49 = 128,                   /* $@49  */
  YYSYMBOL_129_50 = 129,                   /* $@50  */
  YYSYMBOL_130_51 = 130,                   /* $@51  */
  YYSYMBOL_131_52 = 131,                   /* $@52  */
  YYSYMBOL_132_53 = 132,                   /* $@53  */
  YYSYMBOL_prizeobj = 133,                 /* prizeobj  */
  YYSYMBOL_134_54 = 134,                   /* $@54  */
  YYSYMBOL_135_55 = 135,                   /* $@55  */
  YYSYMBOL_136_56 = 136,                   /* $@56  */
  YYSYMBOL_137_57 = 137,                   /* $@57  */
  YYSYMBOL_138_58 = 138,                   /* $@58  */
  YYSYMBOL_139_59 = 139,                   /* $@59  */
  YYSYMBOL_140_60 = 140,                   /* $@60  */
  YYSYMBOL_141_61 = 141,                   /* $@61  */
  YYSYMBOL_142_62 = 142,                   /* $@62  */
  YYSYMBOL_prizeobj1 = 143,                /* prizeobj1  */
  YYSYMBOL_144_63 = 144,                   /* $@63  */
  YYSYMBOL_145_64 = 145,                   /* $@64  */
  YYSYMBOL_146_65 = 146,                   /* $@65  */
  YYSYMBOL_147_66 = 147,                   /* $@66  */
  YYSYMBOL_148_67 = 148,                   /* $@67  */
  YYSYMBOL_149_68 = 149,                   /* $@68  */
  YYSYMBOL_150_69 = 150,                   /* $@69  */
  YYSYMBOL_151_70 = 151,                   /* $@70  */
  YYSYMBOL_id1 = 152,                      /* id1  */
  YYSYMBOL_153_71 = 153,                   /* $@71  */
  YYSYMBOL_154_72 = 154,                   /* $@72  */
  YYSYMBOL_id = 155,                       /* id  */
  YYSYMBOL_156_73 = 156,                   /* $@73  */
  YYSYMBOL_157_74 = 157,                   /* $@74  */
  YYSYMBOL_divident = 158,                 /* divident  */
  YYSYMBOL_159_75 = 159,                   /* $@75  */
  YYSYMBOL_160_76 = 160,                   /* $@76  */
  YYSYMBOL_winners = 161,                  /* winners  */
  YYSYMBOL_162_77 = 162,                   /* $@77  */
  YYSYMBOL_163_78 = 163,                   /* $@78  */
  YYSYMBOL_distributed = 164,              /* distributed  */
  YYSYMBOL_165_79 = 165,                   /* $@79  */
  YYSYMBOL_166_80 = 166,                   /* $@80  */
  YYSYMBOL_jackpot = 167,                  /* jackpot  */
  YYSYMBOL_168_81 = 168,                   /* $@81  */
  YYSYMBOL_169_82 = 169,                   /* $@82  */
  YYSYMBOL_fixed = 170,                    /* fixed  */
  YYSYMBOL_171_83 = 171,                   /* $@83  */
  YYSYMBOL_172_84 = 172,                   /* $@84  */
  YYSYMBOL_categoryType = 173,             /* categoryType  */
  YYSYMBOL_174_85 = 174,                   /* $@85  */
  YYSYMBOL_175_86 = 175,                   /* $@86  */
  YYSYMBOL_gameType = 176,                 /* gameType  */
  YYSYMBOL_177_87 = 177,                   /* $@87  */
  YYSYMBOL_178_88 = 178,                   /* $@88  */
  YYSYMBOL_minimumDistributed = 179,       /* minimumDistributed  */
  YYSYMBOL_180_89 = 180,                   /* $@89  */
  YYSYMBOL_181_90 = 181,                   /* $@90  */
  YYSYMBOL_wagerStatistics = 182,          /* wagerStatistics  */
  YYSYMBOL_183_91 = 183,                   /* $@91  */
  YYSYMBOL_184_92 = 184,                   /* $@92  */
  YYSYMBOL_185_93 = 185,                   /* $@93  */
  YYSYMBOL_wagerStatistics1 = 186,         /* wagerStatistics1  */
  YYSYMBOL_187_94 = 187,                   /* $@94  */
  YYSYMBOL_188_95 = 188,                   /* $@95  */
  YYSYMBOL_189_96 = 189,                   /* $@96  */
  YYSYMBOL_wagerobj = 190,                 /* wagerobj  */
  YYSYMBOL_191_97 = 191,                   /* $@97  */
  YYSYMBOL_192_98 = 192,                   /* $@98  */
  YYSYMBOL_193_99 = 193,                   /* $@99  */
  YYSYMBOL_194_100 = 194,                  /* $@100  */
  YYSYMBOL_195_101 = 195,                  /* $@101  */
  YYSYMBOL_196_102 = 196,                  /* $@102  */
  YYSYMBOL_197_103 = 197,                  /* $@103  */
  YYSYMBOL_198_104 = 198,                  /* $@104  */
  YYSYMBOL_jsonfile2 = 199,                /* jsonfile2  */
  YYSYMBOL_200_105 = 200,                  /* $@105  */
  YYSYMBOL_content = 201,                  /* content  */
  YYSYMBOL_202_106 = 202,                  /* $@106  */
  YYSYMBOL_203_107 = 203,                  /* $@107  */
  YYSYMBOL_rule5 = 204,                    /* rule5  */
  YYSYMBOL_205_108 = 205,                  /* $@108  */
  YYSYMBOL_rule6 = 206,                    /* rule6  */
  YYSYMBOL_207_109 = 207,                  /* $@109  */
  YYSYMBOL_one = 208,                      /* one  */
  YYSYMBOL_two = 209,                      /* two  */
  YYSYMBOL_winningNumbers1 = 210,          /* winningNumbers1  */
  YYSYMBOL_211_110 = 211,                  /* $@110  */
  YYSYMBOL_list1 = 212,                    /* list1  */
  YYSYMBOL_213_111 = 213,                  /* $@111  */
  YYSYMBOL_214_112 = 214,                  /* $@112  */
  YYSYMBOL_215_113 = 215,                  /* $@113  */
  YYSYMBOL_bonus1 = 216,                   /* bonus1  */
  YYSYMBOL_217_114 = 217,                  /* $@114  */
  YYSYMBOL_218_115 = 218,                  /* $@115  */
  YYSYMBOL_219_116 = 219,                  /* $@116  */
  YYSYMBOL_value1 = 220,                   /* value1  */
  YYSYMBOL_221_117 = 221,                  /* $@117  */
  YYSYMBOL_222_118 = 222,                  /* $@118  */
  YYSYMBOL_223_119 = 223,                  /* $@119  */
  YYSYMBOL_224_120 = 224,                  /* $@120  */
  YYSYMBOL_225_121 = 225,                  /* $@121  */
  YYSYMBOL_226_122 = 226,                  /* $@122  */
  YYSYMBOL_227_123 = 227,                  /* $@123  */
  YYSYMBOL_228_124 = 228,                  /* $@124  */
  YYSYMBOL_totalPages = 229,               /* totalPages  */
  YYSYMBOL_230_125 = 230,                  /* $@125  */
  YYSYMBOL_231_126 = 231,                  /* $@126  */
  YYSYMBOL_totalElements = 232,            /* totalElements  */
  YYSYMBOL_233_127 = 233,                  /* $@127  */
  YYSYMBOL_234_128 = 234,                  /* $@128  */
  YYSYMBOL_last2 = 235,                    /* last2  */
  YYSYMBOL_236_129 = 236,                  /* $@129  */
  YYSYMBOL_237_130 = 237,                  /* $@130  */
  YYSYMBOL_numberOfElements = 238,         /* numberOfElements  */
  YYSYMBOL_239_131 = 239,                  /* $@131  */
  YYSYMBOL_240_132 = 240,                  /* $@132  */
  YYSYMBOL_sort = 241,                     /* sort  */
  YYSYMBOL_242_133 = 242,                  /* $@133  */
  YYSYMBOL_243_134 = 243,                  /* $@134  */
  YYSYMBOL_244_135 = 244,                  /* $@135  */
  YYSYMBOL_sortobj = 245,                  /* sortobj  */
  YYSYMBOL_246_136 = 246,                  /* $@136  */
  YYSYMBOL_247_137 = 247,                  /* $@137  */
  YYSYMBOL_248_138 = 248,                  /* $@138  */
  YYSYMBOL_249_139 = 249,                  /* $@139  */
  YYSYMBOL_250_140 = 250,                  /* $@140  */
  YYSYMBOL_251_141 = 251,                  /* $@141  */
  YYSYMBOL_direction = 252,                /* direction  */
  YYSYMBOL_253_142 = 253,                  /* $@142  */
  YYSYMBOL_254_143 = 254,                  /* $@143  */
  YYSYMBOL_property = 255,                 /* property  */
  YYSYMBOL_256_144 = 256,                  /* $@144  */
  YYSYMBOL_257_145 = 257,                  /* $@145  */
  YYSYMBOL_ignoreCase = 258,               /* ignoreCase  */
  YYSYMBOL_259_146 = 259,                  /* $@146  */
  YYSYMBOL_260_147 = 260,                  /* $@147  */
  YYSYMBOL_nullHandling = 261,             /* nullHandling  */
  YYSYMBOL_262_148 = 262,                  /* $@148  */
  YYSYMBOL_263_149 = 263,                  /* $@149  */
  YYSYMBOL_descending = 264,               /* descending  */
  YYSYMBOL_265_150 = 265,                  /* $@150  */
  YYSYMBOL_266_151 = 266,                  /* $@151  */
  YYSYMBOL_ascending = 267,                /* ascending  */
  YYSYMBOL_268_152 = 268,                  /* $@152  */
  YYSYMBOL_269_153 = 269,                  /* $@153  */
  YYSYMBOL_first = 270,                    /* first  */
  YYSYMBOL_271_154 = 271,                  /* $@154  */
  YYSYMBOL_272_155 = 272,                  /* $@155  */
  YYSYMBOL_size = 273,                     /* size  */
  YYSYMBOL_274_156 = 274,                  /* $@156  */
  YYSYMBOL_275_157 = 275,                  /* $@157  */
  YYSYMBOL_number = 276,                   /* number  */
  YYSYMBOL_277_158 = 277,                  /* $@158  */
  YYSYMBOL_278_159 = 278                   /* $@159  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   398

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  224
/* YYNRULES -- Number of rules.  */
#define YYNRULES  273
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  512

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   309


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    35,    35,    35,    37,    37,    40,    40,    40,    41,
      41,    41,    43,    43,    43,    43,    43,    43,    44,    44,
      44,    44,    45,    48,    48,    48,    48,    48,    48,    49,
      49,    49,    49,    50,    52,    52,    53,    53,    55,    55,
      55,    57,    57,    57,    59,    59,    59,    61,    61,    61,
      63,    63,    63,    64,    64,    64,    66,    66,    66,    68,
      68,    68,    68,    70,    70,    70,    72,    72,    72,    73,
      73,    73,    74,    74,    74,    74,    74,    76,    76,    77,
      77,    77,    78,    78,    78,    79,    79,    79,    80,    80,
      80,    81,    77,    84,    84,    87,    88,    89,    90,    91,
      92,    93,    87,    97,    98,    99,   100,   101,   102,   103,
     104,   105,    97,   109,   110,   111,   112,   113,   114,   115,
     116,   109,   120,   120,   120,   121,   121,   121,   123,   123,
     123,   124,   124,   124,   125,   125,   125,   126,   126,   126,
     127,   127,   127,   128,   128,   128,   129,   129,   129,   130,
     130,   130,   132,   132,   132,   132,   133,   133,   133,   133,
     135,   135,   135,   136,   136,   136,   137,   137,   135,   140,
     140,   143,   143,   143,   144,   144,   144,   145,   145,   145,
     146,   146,   146,   146,   146,   146,   146,   147,   147,   147,
     147,   148,   150,   150,   150,   150,   150,   150,   150,   151,
     151,   151,   151,   152,   155,   155,   155,   156,   156,   156,
     156,   157,   157,   157,   157,   159,   159,   160,   160,   161,
     161,   162,   162,   159,   165,   165,   165,   166,   166,   166,
     167,   167,   167,   168,   168,   168,   169,   169,   169,   169,
     171,   172,   173,   174,   175,   176,   171,   180,   180,   180,
     181,   181,   181,   182,   182,   182,   183,   183,   183,   184,
     184,   184,   185,   185,   185,   187,   187,   187,   188,   188,
     188,   189,   189,   189
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "INT", "REAL_NUM",
  "STRING", "BOOLEAN", "COLON", "COMMA", "OBB", "OBE", "AB", "AE", "LAST",
  "GAMEID", "DRAWID", "DRAWTIME", "STATUS", "DRAWBREAK", "VISUALDRAW",
  "PRICEPOINTS", "AMOUNT", "WINNINGNUMBERS", "LIST", "BONUS",
  "PRIZECATEGORIES", "ID", "DIVIDENT", "WINNERS", "DISTRIBUTED", "JACKPOT",
  "FIXED", "CATEGORYTYPE", "GAMETYPE", "MINIMUMDISTRIBUTED",
  "WAGERSTATISTICS", "COLUMNS", "WAGERS", "ADDON", "ACTIVE", "CONTENT",
  "TOTALPAGES", "TOTALELEMENTS", "LAST2", "NUMBEROFELEMENTS", "SORT",
  "DIRECTION", "PROPERTY", "IGNORECASE", "NULLHANDLING", "DESCENDING",
  "ASCENDING", "FIRST", "SIZE", "NUMBER", "$accept", "start", "jsonfile1",
  "$@1", "rule", "$@2", "rule1", "$@3", "firstapp", "second", "last",
  "$@4", "active", "$@5", "gameId", "$@6", "$@7", "drawId", "$@8", "$@9",
  "drawTime", "$@10", "$@11", "status", "$@12", "$@13", "status1", "$@14",
  "$@15", "drawBreak", "$@16", "$@17", "visualDraw", "$@18", "$@19",
  "pricePoints", "$@20", "$@21", "$@22", "priceobj", "$@23", "$@24",
  "winningNumbers", "$@25", "list", "$@26", "$@27", "bonus", "$@28",
  "$@29", "$@30", "$@31", "array_num", "$@32", "value", "$@33", "$@34",
  "$@35", "$@36", "$@37", "$@38", "$@39", "$@40", "$@41", "$@42", "$@43",
  "$@44", "$@45", "prizeCategories", "$@46", "rule2", "$@47", "$@48",
  "$@49", "$@50", "$@51", "$@52", "$@53", "prizeobj", "$@54", "$@55",
  "$@56", "$@57", "$@58", "$@59", "$@60", "$@61", "$@62", "prizeobj1",
  "$@63", "$@64", "$@65", "$@66", "$@67", "$@68", "$@69", "$@70", "id1",
  "$@71", "$@72", "id", "$@73", "$@74", "divident", "$@75", "$@76",
  "winners", "$@77", "$@78", "distributed", "$@79", "$@80", "jackpot",
  "$@81", "$@82", "fixed", "$@83", "$@84", "categoryType", "$@85", "$@86",
  "gameType", "$@87", "$@88", "minimumDistributed", "$@89", "$@90",
  "wagerStatistics", "$@91", "$@92", "$@93", "wagerStatistics1", "$@94",
  "$@95", "$@96", "wagerobj", "$@97", "$@98", "$@99", "$@100", "$@101",
  "$@102", "$@103", "$@104", "jsonfile2", "$@105", "content", "$@106",
  "$@107", "rule5", "$@108", "rule6", "$@109", "one", "two",
  "winningNumbers1", "$@110", "list1", "$@111", "$@112", "$@113", "bonus1",
  "$@114", "$@115", "$@116", "value1", "$@117", "$@118", "$@119", "$@120",
  "$@121", "$@122", "$@123", "$@124", "totalPages", "$@125", "$@126",
  "totalElements", "$@127", "$@128", "last2", "$@129", "$@130",
  "numberOfElements", "$@131", "$@132", "sort", "$@133", "$@134", "$@135",
  "sortobj", "$@136", "$@137", "$@138", "$@139", "$@140", "$@141",
  "direction", "$@142", "$@143", "property", "$@144", "$@145",
  "ignoreCase", "$@146", "$@147", "nullHandling", "$@148", "$@149",
  "descending", "$@150", "$@151", "ascending", "$@152", "$@153", "first",
  "$@154", "$@155", "size", "$@156", "$@157", "number", "$@158", "$@159", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-247)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-170)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      12,   -25,    22,  -247,  -247,    17,    -1,  -247,    29,   100,
      31,     0,  -247,  -247,  -247,  -247,  -247,  -247,  -247,  -247,
    -247,    33,  -247,    36,  -247,     6,  -247,  -247,  -247,  -247,
    -247,  -247,  -247,  -247,  -247,    43,  -247,  -247,  -247,  -247,
      14,    45,    50,    51,    52,    53,    54,    55,    56,    63,
      67,    68,    71,  -247,    73,   195,  -247,    70,    75,  -247,
      72,  -247,  -247,  -247,  -247,  -247,  -247,  -247,  -247,  -247,
    -247,  -247,  -247,   100,  -247,  -247,  -247,  -247,    27,  -247,
    -247,  -247,  -247,  -247,  -247,  -247,  -247,  -247,  -247,  -247,
    -247,  -247,    76,  -247,    40,    86,    98,   101,   102,   103,
     105,    96,    88,   110,   114,   124,  -247,   125,   132,   133,
    -247,  -247,   151,   109,  -247,   142,  -247,   106,  -247,  -247,
    -247,  -247,  -247,  -247,  -247,  -247,  -247,  -247,  -247,   143,
     146,  -247,  -247,  -247,  -247,   195,  -247,  -247,   149,  -247,
    -247,  -247,  -247,  -247,  -247,  -247,  -247,  -247,  -247,     9,
    -247,  -247,   147,   150,   156,  -247,   155,  -247,   112,   153,
     170,  -247,   152,  -247,  -247,   144,   140,   172,  -247,   175,
     178,  -247,     9,  -247,  -247,   186,   190,  -247,   192,  -247,
     148,  -247,   194,  -247,   197,  -247,   198,   193,  -247,   206,
    -247,  -247,  -247,  -247,   151,     9,  -247,   199,   215,  -247,
     214,  -247,   168,   216,  -247,   213,   217,   218,  -247,  -247,
     219,   221,   222,   144,   203,   220,  -247,     9,  -247,   225,
     223,  -247,   228,  -247,   226,  -247,  -247,  -247,  -247,  -247,
     210,   212,  -247,  -247,   231,   230,  -247,  -247,  -247,     9,
    -247,  -247,   235,  -247,   236,  -247,   238,  -247,   241,  -247,
     237,  -247,   239,   193,   243,  -247,   248,   242,   245,    78,
     250,   252,   258,  -247,  -247,   251,   259,  -247,   257,  -247,
     260,  -247,   261,   262,  -247,  -247,   253,  -247,  -247,  -247,
    -247,  -247,  -247,  -247,  -247,  -247,  -247,  -247,   128,  -247,
    -247,  -247,   254,  -247,   263,   265,  -247,  -247,  -247,   244,
    -247,   210,  -247,  -247,   264,  -247,  -247,     8,   227,   266,
    -247,  -247,   268,   273,  -247,   270,   284,   280,   193,   255,
    -247,   173,   281,  -247,   282,  -247,  -247,  -247,   286,  -247,
    -247,  -247,   283,  -247,   291,  -247,  -247,   288,  -247,  -247,
    -247,   267,   244,  -247,   290,  -247,   287,  -247,   256,   295,
     297,  -247,   293,   294,   193,  -247,   296,  -247,   300,  -247,
     298,  -247,  -247,   301,  -247,  -247,   299,   306,  -247,  -247,
     303,  -247,   312,  -247,   292,   267,  -247,   313,   308,  -247,
     275,  -247,   320,  -247,   317,   318,   193,  -247,  -247,   322,
    -247,   321,  -247,  -247,   323,  -247,  -247,   324,   302,   325,
    -247,   327,  -247,   328,  -247,   304,   292,  -247,  -247,  -247,
    -247,   279,  -247,   332,  -247,   329,   330,   193,   334,   336,
     337,  -247,   338,   339,  -247,   335,  -247,  -247,   340,  -247,
    -247,  -247,   342,  -247,  -247,  -247,   319,   304,  -247,   333,
     344,  -247,   305,  -247,   341,  -247,   345,   346,   193,   347,
    -247,   351,  -247,   349,   355,  -247,   343,  -247,  -247,  -247,
    -247,   357,  -247,   354,  -247,  -247,  -247,   331,   319,  -247,
    -247,   311,   358,   360,  -247,   359,   361,   362,   365,  -247,
     363,  -247,  -247,   367,  -247,  -247,  -247,  -247,   368,  -247,
    -247,  -247,   348,   331,   369,  -247,   373,   372,  -247,   370,
     371,  -247,   377,  -247,  -247,   378,  -247,  -247,  -247,  -247,
     364,  -247
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,     4,     0,     2,     3,     0,     0,     1,     0,     0,
       0,     0,    34,    22,    38,    41,    44,    47,    53,    56,
      59,     0,    72,     0,   152,     0,     6,    12,    13,    14,
      15,    16,    17,    18,    19,     0,    20,    21,   171,   224,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     7,     0,     0,    68,     0,     0,   227,
       0,    35,    39,    42,    45,    48,    54,    57,    60,    66,
      73,    93,   153,     0,    36,    33,    50,   156,     0,     9,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
     172,   225,     0,   230,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     8,     0,     0,     0,
      10,     5,     0,     0,   228,     0,   233,     0,    40,    43,
      46,    49,    55,    58,    61,    69,    67,    74,   103,     0,
       0,   154,    37,    51,   157,     0,   180,   191,     0,   211,
     181,   182,   183,   184,   185,   186,   187,   189,   190,     0,
     174,   188,     0,     0,     0,   231,     0,   236,     0,     0,
       0,    75,     0,    94,    95,     0,     0,     0,    11,     0,
       0,   175,     0,   206,   226,     0,     0,   234,     0,   265,
       0,    63,     0,    70,     0,   122,     0,     0,   160,     0,
      52,   158,   204,   212,     0,     0,   229,     0,     0,   237,
       0,   268,     0,     0,    62,     0,     0,     0,   104,   113,
       0,     0,     0,     0,     0,     0,   176,     0,   232,     0,
       0,   266,     0,   271,     0,    64,    77,    71,    76,   123,
       0,     0,    96,   161,     0,     0,   207,   205,   213,     0,
     235,   238,     0,   269,     0,   170,     0,    79,     0,   128,
       0,   125,     0,     0,     0,   155,     0,     0,     0,     0,
       0,     0,     0,   272,    65,     0,     0,   124,     0,   105,
       0,   114,     0,     0,   159,   208,     0,   192,   203,   193,
     194,   195,   196,   197,   198,   199,   201,   202,     0,   177,
     200,   240,     0,   267,     0,     0,    78,    80,   129,     0,
     126,     0,    97,   162,     0,   214,   178,     0,     0,     0,
     270,   273,     0,     0,   131,     0,     0,     0,     0,     0,
     209,     0,     0,   247,     0,   239,    81,   130,     0,   106,
     127,   115,     0,   163,     0,   179,   173,     0,   241,    82,
     132,     0,     0,    98,     0,   215,     0,   248,     0,     0,
       0,   134,     0,     0,     0,   164,     0,   210,     0,   250,
       0,    83,   133,     0,   107,   116,     0,     0,   216,   249,
       0,   242,     0,   135,     0,     0,    99,     0,     0,   251,
       0,    84,     0,   137,     0,     0,     0,   165,   217,     0,
     253,     0,    85,   136,     0,   108,   117,     0,     0,     0,
     252,     0,   243,     0,   138,     0,     0,   100,   166,   218,
     254,     0,    86,     0,   140,     0,     0,     0,     0,     0,
       0,   256,     0,     0,   139,     0,   109,   118,     0,   167,
     219,   255,     0,   244,    87,   141,     0,     0,   101,     0,
       0,   257,     0,    88,     0,   143,     0,     0,     0,     0,
     220,     0,   259,     0,     0,   142,     0,   110,   119,   102,
     168,     0,   258,     0,   245,    89,   144,     0,     0,   221,
     260,     0,     0,     0,   146,     0,     0,     0,     0,   262,
       0,    90,   145,     0,   111,   120,   222,   261,     0,   246,
      91,   147,     0,     0,     0,   263,     0,     0,   149,     0,
       0,   223,     0,    92,   148,     0,   112,   121,   264,   150,
       0,   151
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -247,  -247,  -247,  -247,  -247,  -247,  -247,  -247,   314,   249,
    -247,  -247,  -247,  -247,    -9,  -247,  -247,    -8,  -247,  -247,
      -7,  -247,  -247,    -2,  -247,  -247,  -247,  -247,  -247,    -6,
    -247,  -247,    -5,  -247,  -247,    -4,  -247,  -247,  -247,  -247,
    -247,  -247,   -45,  -247,  -247,  -247,  -247,  -247,  -247,  -247,
    -247,  -247,  -247,  -247,  -247,  -247,  -247,  -247,  -247,  -247,
    -247,  -247,  -247,  -247,  -247,  -247,  -247,  -247,    -3,  -247,
    -247,  -247,  -247,  -247,  -247,  -247,  -247,  -247,  -247,  -247,
    -247,  -247,  -247,  -247,  -247,  -247,  -247,  -247,  -245,  -247,
    -247,  -247,  -247,  -247,  -247,  -247,  -247,  -247,  -247,  -247,
    -247,  -247,  -247,    64,  -247,  -247,    37,  -247,  -247,    11,
    -247,  -247,   -28,  -247,  -247,   -49,  -247,  -247,   -79,  -247,
    -247,  -103,  -247,  -247,  -247,  -247,  -247,     3,  -247,  -247,
    -247,   -44,  -247,  -247,  -247,   179,  -247,  -247,  -247,  -247,
    -247,  -247,  -247,  -247,  -247,  -247,  -247,  -247,  -247,  -140,
    -247,   107,  -247,   200,    77,  -246,  -247,  -247,  -247,  -247,
    -247,  -247,  -247,  -247,  -247,  -247,  -247,  -247,  -247,  -247,
    -247,  -247,  -247,  -247,  -247,  -247,  -247,  -247,  -247,  -247,
    -247,  -247,  -247,  -247,  -247,  -247,  -247,  -247,  -247,  -247,
    -247,  -247,  -247,  -247,  -247,  -247,  -247,  -247,  -247,  -247,
    -247,  -247,  -247,  -247,  -247,  -247,  -247,  -247,  -247,  -247,
    -247,  -247,  -247,  -247,  -247,  -247,  -247,  -247,  -247,  -247,
    -247,  -247,  -247,  -247
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,     3,     5,    25,    73,    78,   135,    26,    79,
       9,    41,    55,   107,   140,    42,    95,   141,    43,    96,
     142,    44,    97,   143,    45,    98,    83,   108,   166,   144,
      46,    99,   145,    47,   100,   146,    48,   101,   159,   182,
     203,   246,    34,   102,   126,   160,   205,    35,    50,   103,
     161,   184,   227,   247,   265,   266,   312,   339,   349,   372,
     392,   403,   423,   443,   454,   472,   490,   496,   147,   104,
     129,   187,   253,   318,   354,   386,   417,   448,   130,   162,
     230,   299,   341,   374,   405,   436,   467,   492,   210,   231,
     301,   342,   375,   406,   437,   468,   493,   186,   207,   248,
     252,   270,   316,   250,   268,   313,   315,   328,   350,   352,
     363,   382,   384,   394,   413,   415,   425,   444,   446,   456,
     473,   475,   483,   497,   499,   505,   510,   148,    52,   105,
     165,   287,   109,   167,   213,   189,   211,   254,   319,   344,
     367,   398,   418,   439,     4,     6,    11,    57,   112,   149,
     194,   288,   321,   150,   289,   151,   214,   237,   257,   304,
     334,   152,   170,   215,   258,   346,   356,   378,   399,   419,
     440,   461,   477,   494,    40,    58,   113,    60,    92,   154,
      94,   115,   176,   117,   156,   198,   158,   178,   220,   260,
     292,   308,   348,   380,   411,   442,   471,   324,   337,   358,
     360,   370,   389,   391,   401,   420,   422,   432,   451,   453,
     463,   478,   480,   488,   502,   180,   200,   242,   202,   222,
     262,   224,   244,   295
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      27,    28,    29,    31,    32,    33,    36,    30,   272,   172,
      87,    89,    37,   290,    53,  -169,   306,   171,   136,   137,
     322,     1,     7,    14,    15,    16,    17,    18,    19,    20,
       8,   138,   195,   139,    23,   110,    12,   111,    38,    10,
      49,    39,   290,    51,    24,    54,    80,    81,    82,    84,
      85,    86,    88,    56,    61,   217,    59,    62,    63,    64,
      65,    66,    67,    68,    27,    28,    29,    31,    32,    33,
      36,    30,    69,   332,    70,   290,    37,   239,    72,    71,
      74,    90,    91,   114,   116,    93,   171,   277,   278,   118,
      87,    89,    14,    15,    16,    17,    18,    19,    20,   259,
     138,   119,   139,    23,   120,   124,   122,   121,   123,   366,
      13,   125,   153,    77,    14,    15,    16,    17,    18,    19,
      20,   127,    21,   128,    22,    23,    80,    81,    82,    84,
      85,    86,    88,   131,   132,    24,   306,   277,   278,   133,
     134,   397,    14,    15,    16,    17,    18,    19,    20,   155,
     138,   157,   139,    23,   164,   163,   169,   173,   174,   175,
     136,   137,   177,    77,   179,    14,    15,    16,    17,    18,
      19,    20,   428,   138,   181,   139,    23,   183,   185,   190,
     188,   191,   277,   278,   192,   193,    24,    14,    15,    16,
      17,    18,    19,    20,   196,   138,   197,   139,    23,   199,
     206,   201,   209,   459,   204,    75,   208,   218,    77,    14,
      15,    16,    76,    18,    19,    20,   212,    21,   219,    22,
      23,   221,   223,   225,   226,   229,   236,   232,   233,   228,
      77,   238,   234,   240,   241,   243,   245,   249,   251,   255,
     256,   261,   264,   263,   267,   269,   273,   271,   276,   275,
     279,   280,   281,   283,   284,   285,   286,   282,   274,   291,
     293,   294,   297,   296,   298,   305,   309,   300,   311,   302,
     303,   310,   314,   323,   325,   320,   326,   327,   329,   279,
     280,   281,   283,   284,   285,   286,   282,   330,   331,   336,
     338,   343,   333,   340,   345,   347,   351,   355,   361,   357,
     362,   364,   365,   359,   368,   369,   371,   376,   373,   377,
     379,   388,   279,   280,   281,   283,   284,   285,   286,   282,
     381,   387,   383,   390,   393,   395,   396,   400,   421,   402,
     404,   412,   407,   409,   410,   414,   424,   426,   427,   430,
     408,   429,   435,   431,   449,   455,   433,   434,   438,   441,
     466,   445,   450,   457,   458,   452,   462,   464,   465,   460,
     469,   470,   479,   482,   474,   317,   481,   484,   511,   485,
     486,   487,   501,   489,   491,   495,   503,   504,   416,   353,
     506,   507,   498,   508,   168,   509,   385,   106,   447,   476,
     500,     0,   235,     0,   216,   307,     0,     0,   335
};

static const yytype_int16 yycheck[] =
{
       9,     9,     9,     9,     9,     9,     9,     9,   253,   149,
      55,    55,     9,   259,     8,    40,     8,     8,     9,    10,
      12,     9,     0,    14,    15,    16,    17,    18,    19,    20,
      13,    22,   172,    24,    25,     8,     7,    10,     7,    40,
       7,    41,   288,     7,    35,    39,    55,    55,    55,    55,
      55,    55,    55,    10,     9,   195,    42,     7,     7,     7,
       7,     7,     7,     7,    73,    73,    73,    73,    73,    73,
      73,    73,     9,   318,     7,   321,    73,   217,     7,    11,
       7,    11,     7,     7,    44,    13,     8,     9,    10,     3,
     135,   135,    14,    15,    16,    17,    18,    19,    20,   239,
      22,     3,    24,    25,     3,     9,     3,     5,     3,   354,
      10,    23,     3,    35,    14,    15,    16,    17,    18,    19,
      20,    11,    22,     9,    24,    25,   135,   135,   135,   135,
     135,   135,   135,     9,     9,    35,     8,     9,    10,     7,
       7,   386,    14,    15,    16,    17,    18,    19,    20,     7,
      22,    45,    24,    25,     8,    12,     7,    10,     8,     3,
       9,    10,     7,    35,    52,    14,    15,    16,    17,    18,
      19,    20,   417,    22,    21,    24,    25,     7,    26,    39,
      36,     9,     9,    10,     9,     7,    35,    14,    15,    16,
      17,    18,    19,    20,     8,    22,     6,    24,    25,     7,
       3,    53,     9,   448,    10,    10,     8,     8,    35,    14,
      15,    16,    17,    18,    19,    20,    10,    22,     3,    24,
      25,     7,    54,     7,    11,     7,    23,     8,     7,    12,
      35,    11,    10,     8,    11,     7,    10,    27,    26,     8,
      10,     6,     4,     7,     3,     8,     3,     8,     3,     7,
     259,   259,   259,   259,   259,   259,   259,   259,    10,     9,
       8,     3,     3,    12,     7,    12,    12,     7,     3,     8,
       8,     8,    28,    46,     8,    11,     8,     4,     8,   288,
     288,   288,   288,   288,   288,   288,   288,     3,     8,     8,
       8,     8,    37,     7,     3,     7,    29,     7,     3,    12,
       3,     8,     8,    47,     8,     5,     8,     8,     7,     3,
       7,     3,   321,   321,   321,   321,   321,   321,   321,   321,
       8,     8,    30,    48,     4,     8,     8,     5,    49,     8,
       7,     3,     8,     8,     7,    31,     4,     8,     8,     3,
      38,     7,     7,     6,    11,     4,     8,     8,     8,     7,
       7,    32,     8,     8,     8,    50,     5,     8,     3,    12,
       3,     7,    51,     3,    33,   301,     8,     8,     4,     8,
       8,     6,     3,    10,     7,     7,     3,     5,   406,   342,
      10,    10,    34,     6,   135,     7,   375,    73,   437,   468,
     493,    -1,   213,    -1,   194,   288,    -1,    -1,   321
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,     9,    56,    57,   199,    58,   200,     0,    13,    65,
      40,   201,     7,    10,    14,    15,    16,    17,    18,    19,
      20,    22,    24,    25,    35,    59,    63,    69,    72,    75,
      78,    84,    87,    90,    97,   102,   123,   182,     7,    41,
     229,    66,    70,    73,    76,    79,    85,    88,    91,     7,
     103,     7,   183,     8,    39,    67,    10,   202,   230,    42,
     232,     9,     7,     7,     7,     7,     7,     7,     7,     9,
       7,    11,     7,    60,     7,    10,    17,    35,    61,    64,
      69,    72,    75,    81,    84,    87,    90,    97,   123,   186,
      11,     7,   233,    13,   235,    71,    74,    77,    80,    86,
      89,    92,    98,   104,   124,   184,    63,    68,    82,   187,
       8,    10,   203,   231,     7,   236,    44,   238,     3,     3,
       3,     5,     3,     3,     9,    23,    99,    11,     9,   125,
     133,     9,     9,     7,     7,    62,     9,    10,    22,    24,
      69,    72,    75,    78,    84,    87,    90,   123,   182,   204,
     208,   210,   216,     3,   234,     7,   239,    45,   241,    93,
     100,   105,   134,    12,     8,   185,    83,   188,    64,     7,
     217,     8,   204,    10,     8,     3,   237,     7,   242,    52,
     270,    21,    94,     7,   106,    26,   152,   126,    36,   190,
      39,     9,     9,     7,   205,   204,     8,     6,   240,     7,
     271,    53,   273,    95,    10,   101,     3,   153,     8,     9,
     143,   191,    10,   189,   211,   218,   208,   204,     8,     3,
     243,     7,   274,    54,   276,     7,    11,   107,    12,     7,
     135,   144,     8,     7,    10,   190,    23,   212,    11,   204,
       8,    11,   272,     7,   277,    10,    96,   108,   154,    27,
     158,    26,   155,   127,   192,     8,    10,   213,   219,   204,
     244,     6,   275,     7,     4,   109,   110,     3,   159,     8,
     156,     8,   143,     3,    10,     7,     3,     9,    10,    69,
      72,    75,    78,    84,    87,    90,   123,   186,   206,   209,
     210,     9,   245,     8,     3,   278,    12,     3,     7,   136,
       7,   145,     8,     8,   214,    12,     8,   206,   246,    12,
       8,     3,   111,   160,    28,   161,   157,   158,   128,   193,
      11,   207,    12,    46,   252,     8,     8,     4,   162,     8,
       3,     8,   143,    37,   215,   209,     8,   253,     8,   112,
       7,   137,   146,     8,   194,     3,   220,     7,   247,   113,
     163,    29,   164,   161,   129,     7,   221,    12,   254,    47,
     255,     3,     3,   165,     8,     8,   143,   195,     8,     5,
     256,     8,   114,     7,   138,   147,     8,     3,   222,     7,
     248,     8,   166,    30,   167,   164,   130,     8,     3,   257,
      48,   258,   115,     4,   168,     8,     8,   143,   196,   223,
       5,   259,     8,   116,     7,   139,   148,     8,    38,     8,
       7,   249,     3,   169,    31,   170,   167,   131,   197,   224,
     260,    49,   261,   117,     4,   171,     8,     8,   143,     7,
       3,     6,   262,     8,     8,     7,   140,   149,     8,   198,
     225,     7,   250,   118,   172,    32,   173,   170,   132,    11,
       8,   263,    50,   264,   119,     4,   174,     8,     8,   143,
      12,   226,     5,   265,     8,     3,     7,   141,   150,     3,
       7,   251,   120,   175,    33,   176,   173,   227,   266,    51,
     267,     8,     3,   177,     8,     8,     8,     6,   268,    10,
     121,     7,   142,   151,   228,     7,   122,   178,    34,   179,
     176,     3,   269,     3,     5,   180,    10,    10,     6,     7,
     181,     4
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,    55,    56,    56,    58,    57,    59,    60,    59,    61,
      62,    61,    63,    63,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    66,    65,    68,    67,    70,    71,
      69,    73,    74,    72,    76,    77,    75,    79,    80,    78,
      82,    83,    81,    85,    86,    84,    88,    89,    87,    91,
      92,    93,    90,    95,    96,    94,    98,    97,    97,   100,
     101,    99,   103,   104,   105,   106,   102,   108,   107,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   109,   124,   123,   126,   127,   128,   129,   130,
     131,   132,   125,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   133,   144,   145,   146,   147,   148,   149,   150,
     151,   143,   153,   154,   152,   156,   157,   155,   159,   160,
     158,   162,   163,   161,   165,   166,   164,   168,   169,   167,
     171,   172,   170,   174,   175,   173,   177,   178,   176,   180,
     181,   179,   183,   184,   185,   182,   187,   188,   189,   186,
     191,   192,   193,   194,   195,   196,   197,   198,   190,   200,
     199,   202,   203,   201,   204,   205,   204,   206,   207,   206,
     208,   208,   208,   208,   208,   208,   208,   208,   208,   208,
     208,   208,   209,   209,   209,   209,   209,   209,   209,   209,
     209,   209,   209,   209,   211,   210,   210,   213,   214,   215,
     212,   217,   218,   219,   216,   221,   222,   223,   224,   225,
     226,   227,   228,   220,   230,   231,   229,   233,   234,   232,
     236,   237,   235,   239,   240,   238,   242,   243,   244,   241,
     246,   247,   248,   249,   250,   251,   245,   253,   254,   252,
     256,   257,   255,   259,   260,   258,   262,   263,   261,   265,
     266,   264,   268,   269,   267,   271,   272,   270,   274,   275,
     273,   277,   278,   276
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     0,     7,     1,     0,     4,     1,
       0,     4,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     4,     0,     4,     0,     0,
       5,     0,     0,     5,     0,     0,     5,     0,     0,     5,
       0,     0,     5,     0,     0,     5,     0,     0,     5,     0,
       0,     0,     8,     0,     0,     5,     0,     5,     2,     0,
       0,     5,     0,     0,     0,     0,     9,     0,     4,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    22,     0,     6,     0,     0,     0,     0,     0,
       0,     0,    22,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    28,     0,     0,     0,     0,     0,     0,     0,
       0,    25,     0,     0,     5,     0,     0,     5,     0,     0,
       5,     0,     0,     5,     0,     0,     5,     0,     0,     5,
       0,     0,     5,     0,     0,     5,     0,     0,     5,     0,
       0,     5,     0,     0,     0,    10,     0,     0,     0,     9,
       0,     0,     0,     0,     0,     0,     0,     0,    20,     0,
      12,     0,     0,    15,     1,     0,     4,     1,     0,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     5,     2,     0,     0,     0,
       8,     0,     0,     0,     8,     0,     0,     0,     0,     0,
       0,     0,     0,    17,     0,     0,     6,     0,     0,     6,
       0,     0,     6,     0,     0,     6,     0,     0,     0,     9,
       0,     0,     0,     0,     0,     0,    19,     0,     0,     5,
       0,     0,     5,     0,     0,     5,     0,     0,     5,     0,
       0,     5,     0,     0,     5,     0,     0,     6,     0,     0,
       6,     0,     0,     5
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 4: /* $@1: %empty  */
#line 37 "parser.y"
               {printf("{\n");}
#line 1738 "parser.tab.c"
    break;

  case 5: /* jsonfile1: OBB $@1 last rule active rule1 OBE  */
#line 37 "parser.y"
                                                           {printf("}\n");}
#line 1744 "parser.tab.c"
    break;

  case 7: /* $@2: %empty  */
#line 40 "parser.y"
                           {printf(",\n");}
#line 1750 "parser.tab.c"
    break;

  case 10: /* $@3: %empty  */
#line 41 "parser.y"
                           {printf(",\n");}
#line 1756 "parser.tab.c"
    break;

  case 22: /* firstapp: OBE  */
#line 45 "parser.y"
           {printf("}\n");}
#line 1762 "parser.tab.c"
    break;

  case 33: /* second: OBE  */
#line 50 "parser.y"
           {printf("}\n");}
#line 1768 "parser.tab.c"
    break;

  case 34: /* $@4: %empty  */
#line 52 "parser.y"
                 {printf("\t\"last\": ");}
#line 1774 "parser.tab.c"
    break;

  case 35: /* last: LAST COLON $@4 OBB  */
#line 52 "parser.y"
                                               {printf("{\n");}
#line 1780 "parser.tab.c"
    break;

  case 36: /* $@5: %empty  */
#line 53 "parser.y"
                    {printf("\t\"active\": ");}
#line 1786 "parser.tab.c"
    break;

  case 37: /* active: ACTIVE COLON $@5 OBB  */
#line 53 "parser.y"
                                                    {printf("{\n");}
#line 1792 "parser.tab.c"
    break;

  case 38: /* $@6: %empty  */
#line 55 "parser.y"
               {printf("\t\t\"gameId\"");}
#line 1798 "parser.tab.c"
    break;

  case 39: /* $@7: %empty  */
#line 55 "parser.y"
                                                 {printf(":");}
#line 1804 "parser.tab.c"
    break;

  case 40: /* gameId: GAMEID $@6 COLON $@7 INT  */
#line 55 "parser.y"
                                                                     {checkGameId(yytext);}
#line 1810 "parser.tab.c"
    break;

  case 41: /* $@8: %empty  */
#line 57 "parser.y"
               {printf("\t\t\"drawId\"");}
#line 1816 "parser.tab.c"
    break;

  case 42: /* $@9: %empty  */
#line 57 "parser.y"
                                                 {printf(":");}
#line 1822 "parser.tab.c"
    break;

  case 44: /* $@10: %empty  */
#line 59 "parser.y"
                  {printf("\t\t\"drawTime\"");}
#line 1828 "parser.tab.c"
    break;

  case 45: /* $@11: %empty  */
#line 59 "parser.y"
                                                      {printf(":");}
#line 1834 "parser.tab.c"
    break;

  case 47: /* $@12: %empty  */
#line 61 "parser.y"
               {printf("\t\t\"status\"");}
#line 1840 "parser.tab.c"
    break;

  case 48: /* $@13: %empty  */
#line 61 "parser.y"
                                                 {printf(":");}
#line 1846 "parser.tab.c"
    break;

  case 50: /* $@14: %empty  */
#line 63 "parser.y"
               {printf("\t\t\"status\"");}
#line 1852 "parser.tab.c"
    break;

  case 51: /* $@15: %empty  */
#line 63 "parser.y"
                                                 {printf(":");}
#line 1858 "parser.tab.c"
    break;

  case 52: /* status1: STATUS $@14 COLON $@15 ACTIVE  */
#line 63 "parser.y"
                                                                       {printf("\"active\"");}
#line 1864 "parser.tab.c"
    break;

  case 53: /* $@16: %empty  */
#line 64 "parser.y"
                    {printf("\t\t\"drawBreak\"");}
#line 1870 "parser.tab.c"
    break;

  case 54: /* $@17: %empty  */
#line 64 "parser.y"
                                                         {printf(":");}
#line 1876 "parser.tab.c"
    break;

  case 56: /* $@18: %empty  */
#line 66 "parser.y"
                      {printf("\t\t\"visualDraw\"");}
#line 1882 "parser.tab.c"
    break;

  case 57: /* $@19: %empty  */
#line 66 "parser.y"
                                                            {printf(":");}
#line 1888 "parser.tab.c"
    break;

  case 59: /* $@20: %empty  */
#line 68 "parser.y"
                        {printf("\t\t\"pricePoints\"");}
#line 1894 "parser.tab.c"
    break;

  case 60: /* $@21: %empty  */
#line 68 "parser.y"
                                                               {printf(":");}
#line 1900 "parser.tab.c"
    break;

  case 61: /* $@22: %empty  */
#line 68 "parser.y"
                                                                                  {printf("{\n");}
#line 1906 "parser.tab.c"
    break;

  case 62: /* pricePoints: PRICEPOINTS $@20 COLON $@21 OBB $@22 priceobj OBE  */
#line 68 "parser.y"
                                                                                                                {printf("\n\t\t }");}
#line 1912 "parser.tab.c"
    break;

  case 63: /* $@23: %empty  */
#line 70 "parser.y"
                 {printf("\t\t\"amount\"");}
#line 1918 "parser.tab.c"
    break;

  case 64: /* $@24: %empty  */
#line 70 "parser.y"
                                                   {printf(":");}
#line 1924 "parser.tab.c"
    break;

  case 66: /* $@25: %empty  */
#line 72 "parser.y"
                                         {printf("\t\t\"winningNumbers\": {\n");}
#line 1930 "parser.tab.c"
    break;

  case 68: /* winningNumbers: bonus OBE  */
#line 72 "parser.y"
                                                                                                  {printf("\n\t\t}");}
#line 1936 "parser.tab.c"
    break;

  case 69: /* $@26: %empty  */
#line 73 "parser.y"
           {printf("\t\t\"list\"");}
#line 1942 "parser.tab.c"
    break;

  case 70: /* $@27: %empty  */
#line 73 "parser.y"
                                           {printf(":");}
#line 1948 "parser.tab.c"
    break;

  case 72: /* $@28: %empty  */
#line 74 "parser.y"
             {printf("\t\t\"bonus\"");}
#line 1954 "parser.tab.c"
    break;

  case 73: /* $@29: %empty  */
#line 74 "parser.y"
                                              {printf(":");}
#line 1960 "parser.tab.c"
    break;

  case 74: /* $@30: %empty  */
#line 74 "parser.y"
                                                                {printf("[\n");}
#line 1966 "parser.tab.c"
    break;

  case 75: /* $@31: %empty  */
#line 74 "parser.y"
                                                                                 {printf("\t\t\t");}
#line 1972 "parser.tab.c"
    break;

  case 76: /* bonus: BONUS $@28 COLON $@29 AB $@30 $@31 INT AE  */
#line 74 "parser.y"
                                                                                                           {printf("\n\t\t]");}
#line 1978 "parser.tab.c"
    break;

  case 77: /* $@32: %empty  */
#line 76 "parser.y"
              {printf("[\n");}
#line 1984 "parser.tab.c"
    break;

  case 78: /* array_num: AB $@32 value AE  */
#line 76 "parser.y"
                                        {printf("\n\t\t]");}
#line 1990 "parser.tab.c"
    break;

  case 79: /* $@33: %empty  */
#line 77 "parser.y"
         {printf("\t\t\t");}
#line 1996 "parser.tab.c"
    break;

  case 80: /* $@34: %empty  */
#line 77 "parser.y"
                                {checkList(yytext);}
#line 2002 "parser.tab.c"
    break;

  case 81: /* $@35: %empty  */
#line 77 "parser.y"
                                                           {printf(",\n");}
#line 2008 "parser.tab.c"
    break;

  case 82: /* $@36: %empty  */
#line 78 "parser.y"
         {printf("\t\t\t");}
#line 2014 "parser.tab.c"
    break;

  case 83: /* $@37: %empty  */
#line 78 "parser.y"
                                {checkList(yytext);}
#line 2020 "parser.tab.c"
    break;

  case 84: /* $@38: %empty  */
#line 78 "parser.y"
                                                           {printf(",\n");}
#line 2026 "parser.tab.c"
    break;

  case 85: /* $@39: %empty  */
#line 79 "parser.y"
         {printf("\t\t\t");}
#line 2032 "parser.tab.c"
    break;

  case 86: /* $@40: %empty  */
#line 79 "parser.y"
                                {checkList(yytext);}
#line 2038 "parser.tab.c"
    break;

  case 87: /* $@41: %empty  */
#line 79 "parser.y"
                                                           {printf(",\n");}
#line 2044 "parser.tab.c"
    break;

  case 88: /* $@42: %empty  */
#line 80 "parser.y"
         {printf("\t\t\t");}
#line 2050 "parser.tab.c"
    break;

  case 89: /* $@43: %empty  */
#line 80 "parser.y"
                                {checkList(yytext);}
#line 2056 "parser.tab.c"
    break;

  case 90: /* $@44: %empty  */
#line 80 "parser.y"
                                                           {printf(",\n");}
#line 2062 "parser.tab.c"
    break;

  case 91: /* $@45: %empty  */
#line 81 "parser.y"
         {printf("\t\t\t");}
#line 2068 "parser.tab.c"
    break;

  case 92: /* value: $@33 INT $@34 COMMA $@35 $@36 INT $@37 COMMA $@38 $@39 INT $@40 COMMA $@41 $@42 INT $@43 COMMA $@44 $@45 INT  */
#line 81 "parser.y"
                                {checkList(yytext);}
#line 2074 "parser.tab.c"
    break;

  case 93: /* $@46: %empty  */
#line 84 "parser.y"
                                          {printf("\t\t\"prizeCategories\": [\n");}
#line 2080 "parser.tab.c"
    break;

  case 94: /* prizeCategories: PRIZECATEGORIES COLON AB $@46 rule2 AE  */
#line 84 "parser.y"
                                                                                             {printf("\n\t\t]");}
#line 2086 "parser.tab.c"
    break;

  case 95: /* $@47: %empty  */
#line 87 "parser.y"
                     {printf(",\n");}
#line 2092 "parser.tab.c"
    break;

  case 96: /* $@48: %empty  */
#line 88 "parser.y"
                      {printf(",\n");}
#line 2098 "parser.tab.c"
    break;

  case 97: /* $@49: %empty  */
#line 89 "parser.y"
                      {printf(",\n");}
#line 2104 "parser.tab.c"
    break;

  case 98: /* $@50: %empty  */
#line 90 "parser.y"
                      {printf(",\n");}
#line 2110 "parser.tab.c"
    break;

  case 99: /* $@51: %empty  */
#line 91 "parser.y"
                      {printf(",\n");}
#line 2116 "parser.tab.c"
    break;

  case 100: /* $@52: %empty  */
#line 92 "parser.y"
                      {printf(",\n");}
#line 2122 "parser.tab.c"
    break;

  case 101: /* $@53: %empty  */
#line 93 "parser.y"
                      {printf(",\n");}
#line 2128 "parser.tab.c"
    break;

  case 103: /* $@54: %empty  */
#line 97 "parser.y"
              {printf("\t\t{\n");}
#line 2134 "parser.tab.c"
    break;

  case 104: /* $@55: %empty  */
#line 98 "parser.y"
                   {printf(",\n");}
#line 2140 "parser.tab.c"
    break;

  case 105: /* $@56: %empty  */
#line 99 "parser.y"
                        {printf(",\n");}
#line 2146 "parser.tab.c"
    break;

  case 106: /* $@57: %empty  */
#line 100 "parser.y"
                       {printf(",\n");}
#line 2152 "parser.tab.c"
    break;

  case 107: /* $@58: %empty  */
#line 101 "parser.y"
                           {printf(",\n");}
#line 2158 "parser.tab.c"
    break;

  case 108: /* $@59: %empty  */
#line 102 "parser.y"
                       {printf(",\n");}
#line 2164 "parser.tab.c"
    break;

  case 109: /* $@60: %empty  */
#line 103 "parser.y"
                     {printf(",\n");}
#line 2170 "parser.tab.c"
    break;

  case 110: /* $@61: %empty  */
#line 104 "parser.y"
                            {printf(",\n");}
#line 2176 "parser.tab.c"
    break;

  case 111: /* $@62: %empty  */
#line 105 "parser.y"
                        {printf(",\n");}
#line 2182 "parser.tab.c"
    break;

  case 112: /* prizeobj: OBB $@54 id1 COMMA $@55 divident COMMA $@56 winners COMMA $@57 distributed COMMA $@58 jackpot COMMA $@59 fixed COMMA $@60 categoryType COMMA $@61 gameType COMMA $@62 minimumDistributed OBE  */
#line 107 "parser.y"
              {printf("\n\t\t}");}
#line 2188 "parser.tab.c"
    break;

  case 113: /* $@63: %empty  */
#line 109 "parser.y"
               {printf("\t\t{\n");}
#line 2194 "parser.tab.c"
    break;

  case 114: /* $@64: %empty  */
#line 110 "parser.y"
                  {printf(",\n");}
#line 2200 "parser.tab.c"
    break;

  case 115: /* $@65: %empty  */
#line 111 "parser.y"
                        {printf(",\n");}
#line 2206 "parser.tab.c"
    break;

  case 116: /* $@66: %empty  */
#line 112 "parser.y"
                       {printf(",\n");}
#line 2212 "parser.tab.c"
    break;

  case 117: /* $@67: %empty  */
#line 113 "parser.y"
                           {printf(",\n");}
#line 2218 "parser.tab.c"
    break;

  case 118: /* $@68: %empty  */
#line 114 "parser.y"
                       {printf(",\n");}
#line 2224 "parser.tab.c"
    break;

  case 119: /* $@69: %empty  */
#line 115 "parser.y"
                     {printf(",\n");}
#line 2230 "parser.tab.c"
    break;

  case 120: /* $@70: %empty  */
#line 116 "parser.y"
                            {printf(",\n");}
#line 2236 "parser.tab.c"
    break;

  case 121: /* prizeobj1: OBB $@63 id COMMA $@64 divident COMMA $@65 winners COMMA $@66 distributed COMMA $@67 jackpot COMMA $@68 fixed COMMA $@69 categoryType COMMA $@70 gameType OBE  */
#line 118 "parser.y"
              {printf("\n\t\t}");}
#line 2242 "parser.tab.c"
    break;

  case 122: /* $@71: %empty  */
#line 120 "parser.y"
        {printf("\t\t\t\"id\"");}
#line 2248 "parser.tab.c"
    break;

  case 123: /* $@72: %empty  */
#line 120 "parser.y"
                                        {printf(":");}
#line 2254 "parser.tab.c"
    break;

  case 124: /* id1: ID $@71 COLON $@72 INT  */
#line 120 "parser.y"
                                                           {checkId1(yytext);}
#line 2260 "parser.tab.c"
    break;

  case 125: /* $@73: %empty  */
#line 121 "parser.y"
       {printf("\t\t\t\"id\"");}
#line 2266 "parser.tab.c"
    break;

  case 126: /* $@74: %empty  */
#line 121 "parser.y"
                                       {printf(":");}
#line 2272 "parser.tab.c"
    break;

  case 127: /* id: ID $@73 COLON $@74 INT  */
#line 121 "parser.y"
                                                          {checkId(yytext);}
#line 2278 "parser.tab.c"
    break;

  case 128: /* $@75: %empty  */
#line 123 "parser.y"
                   {printf("\t\t\t\"divident\"");}
#line 2284 "parser.tab.c"
    break;

  case 129: /* $@76: %empty  */
#line 123 "parser.y"
                                                         {printf(":");}
#line 2290 "parser.tab.c"
    break;

  case 131: /* $@77: %empty  */
#line 124 "parser.y"
                {printf("\t\t\t\"winners\"");}
#line 2296 "parser.tab.c"
    break;

  case 132: /* $@78: %empty  */
#line 124 "parser.y"
                                                     {printf(":");}
#line 2302 "parser.tab.c"
    break;

  case 134: /* $@79: %empty  */
#line 125 "parser.y"
                        {printf("\t\t\t\"distributed\"");}
#line 2308 "parser.tab.c"
    break;

  case 135: /* $@80: %empty  */
#line 125 "parser.y"
                                                                 {printf(":");}
#line 2314 "parser.tab.c"
    break;

  case 137: /* $@81: %empty  */
#line 126 "parser.y"
                {printf("\t\t\t\"jackpot\"");}
#line 2320 "parser.tab.c"
    break;

  case 138: /* $@82: %empty  */
#line 126 "parser.y"
                                                     {printf(":");}
#line 2326 "parser.tab.c"
    break;

  case 140: /* $@83: %empty  */
#line 127 "parser.y"
            {printf("\t\t\t\"fixed\"");}
#line 2332 "parser.tab.c"
    break;

  case 141: /* $@84: %empty  */
#line 127 "parser.y"
                                               {printf(":");}
#line 2338 "parser.tab.c"
    break;

  case 143: /* $@85: %empty  */
#line 128 "parser.y"
                          {printf("\t\t\t\"categoryType\"");}
#line 2344 "parser.tab.c"
    break;

  case 144: /* $@86: %empty  */
#line 128 "parser.y"
                                                                    {printf(":");}
#line 2350 "parser.tab.c"
    break;

  case 145: /* categoryType: CATEGORYTYPE $@85 COLON $@86 INT  */
#line 128 "parser.y"
                                                                                      {categoryCheck(yytext);}
#line 2356 "parser.tab.c"
    break;

  case 146: /* $@87: %empty  */
#line 129 "parser.y"
                  {printf("\t\t\t\"gameType\"");}
#line 2362 "parser.tab.c"
    break;

  case 147: /* $@88: %empty  */
#line 129 "parser.y"
                                                        {printf(":");}
#line 2368 "parser.tab.c"
    break;

  case 149: /* $@89: %empty  */
#line 130 "parser.y"
                                      {printf("\t\t\t\"minimumDistributed\"");}
#line 2374 "parser.tab.c"
    break;

  case 150: /* $@90: %empty  */
#line 130 "parser.y"
                                                                                      {printf(":");}
#line 2380 "parser.tab.c"
    break;

  case 152: /* $@91: %empty  */
#line 132 "parser.y"
                                {printf("\t\t\"wagerStatistics\"");}
#line 2386 "parser.tab.c"
    break;

  case 153: /* $@92: %empty  */
#line 132 "parser.y"
                                                                           {printf(":");}
#line 2392 "parser.tab.c"
    break;

  case 154: /* $@93: %empty  */
#line 132 "parser.y"
                                                                                              {printf("{\n");}
#line 2398 "parser.tab.c"
    break;

  case 155: /* wagerStatistics: WAGERSTATISTICS $@91 COLON $@92 OBB $@93 wagerobj OBE OBE COMMA  */
#line 132 "parser.y"
                                                                                                                                      {printf("\n\t\t }\n\t},\n");}
#line 2404 "parser.tab.c"
    break;

  case 156: /* $@94: %empty  */
#line 133 "parser.y"
                                 {printf("\t\t\"wagerStatistics\"");}
#line 2410 "parser.tab.c"
    break;

  case 157: /* $@95: %empty  */
#line 133 "parser.y"
                                                                            {printf(":");}
#line 2416 "parser.tab.c"
    break;

  case 158: /* $@96: %empty  */
#line 133 "parser.y"
                                                                                               {printf("{\n");}
#line 2422 "parser.tab.c"
    break;

  case 159: /* wagerStatistics1: WAGERSTATISTICS $@94 COLON $@95 OBB $@96 wagerobj OBE OBE  */
#line 133 "parser.y"
                                                                                                                                 {printf("\n\t\t }\n\t}\n");}
#line 2428 "parser.tab.c"
    break;

  case 160: /* $@97: %empty  */
#line 135 "parser.y"
                  {printf("\t\t\t\"columns\"");}
#line 2434 "parser.tab.c"
    break;

  case 161: /* $@98: %empty  */
#line 135 "parser.y"
                                                       {printf(":");}
#line 2440 "parser.tab.c"
    break;

  case 162: /* $@99: %empty  */
#line 135 "parser.y"
                                                                               {printf(",\n");}
#line 2446 "parser.tab.c"
    break;

  case 163: /* $@100: %empty  */
#line 136 "parser.y"
                {printf("\t\t\t\"wagers\"");}
#line 2452 "parser.tab.c"
    break;

  case 164: /* $@101: %empty  */
#line 136 "parser.y"
                                                    {printf(":");}
#line 2458 "parser.tab.c"
    break;

  case 165: /* $@102: %empty  */
#line 136 "parser.y"
                                                                            {printf(",\n");}
#line 2464 "parser.tab.c"
    break;

  case 166: /* $@103: %empty  */
#line 137 "parser.y"
               {printf("\t\t\t\"addOn\"");}
#line 2470 "parser.tab.c"
    break;

  case 167: /* $@104: %empty  */
#line 137 "parser.y"
                                                  {printf(":");}
#line 2476 "parser.tab.c"
    break;

  case 168: /* wagerobj: COLUMNS $@97 COLON $@98 INT COMMA $@99 WAGERS $@100 COLON $@101 INT COMMA $@102 ADDON $@103 COLON $@104 AB AE  */
#line 137 "parser.y"
                                                                       {printf("[]");}
#line 2482 "parser.tab.c"
    break;

  case 169: /* $@105: %empty  */
#line 140 "parser.y"
               {printf("{\n");}
#line 2488 "parser.tab.c"
    break;

  case 170: /* jsonfile2: OBB $@105 content totalPages totalElements last2 numberOfElements sort first size number OBE  */
#line 141 "parser.y"
    {printf("\n}\n");}
#line 2494 "parser.tab.c"
    break;

  case 171: /* $@106: %empty  */
#line 143 "parser.y"
                      {printf("\"content\": ");}
#line 2500 "parser.tab.c"
    break;

  case 172: /* $@107: %empty  */
#line 143 "parser.y"
                                                    {printf("[\n");}
#line 2506 "parser.tab.c"
    break;

  case 173: /* content: CONTENT COLON $@106 AB $@107 rule5 rule5 rule5 rule5 rule5 rule5 rule6 rule6 AE COMMA  */
#line 143 "parser.y"
                                                                                                                              {printf("\n\t],\n");}
#line 2512 "parser.tab.c"
    break;

  case 175: /* $@108: %empty  */
#line 144 "parser.y"
                      {printf(",\n");}
#line 2518 "parser.tab.c"
    break;

  case 178: /* $@109: %empty  */
#line 145 "parser.y"
                      {printf(",\n");}
#line 2524 "parser.tab.c"
    break;

  case 180: /* one: OBB  */
#line 146 "parser.y"
          {printf("\t{\n");}
#line 2530 "parser.tab.c"
    break;

  case 191: /* one: OBE  */
#line 148 "parser.y"
           {printf("}\n");}
#line 2536 "parser.tab.c"
    break;

  case 192: /* two: OBB  */
#line 150 "parser.y"
         {printf("\t{\n");}
#line 2542 "parser.tab.c"
    break;

  case 203: /* two: OBE  */
#line 152 "parser.y"
           {printf("}\n");}
#line 2548 "parser.tab.c"
    break;

  case 204: /* $@110: %empty  */
#line 155 "parser.y"
                                          {printf("\t\t\"winningNumbers\": {\n");}
#line 2554 "parser.tab.c"
    break;

  case 206: /* winningNumbers1: bonus1 OBE  */
#line 155 "parser.y"
                                                                                                     {printf("\n\t\t }");}
#line 2560 "parser.tab.c"
    break;

  case 207: /* $@111: %empty  */
#line 156 "parser.y"
            {printf("\t\t\t\"list\"");}
#line 2566 "parser.tab.c"
    break;

  case 208: /* $@112: %empty  */
#line 156 "parser.y"
                                              {printf(":");}
#line 2572 "parser.tab.c"
    break;

  case 209: /* $@113: %empty  */
#line 156 "parser.y"
                                                                {printf("[");}
#line 2578 "parser.tab.c"
    break;

  case 210: /* list1: LIST $@111 COLON $@112 AB $@113 value1 AE  */
#line 156 "parser.y"
                                                                                         {printf("]");}
#line 2584 "parser.tab.c"
    break;

  case 211: /* $@114: %empty  */
#line 157 "parser.y"
              {printf("\t\t\t\"bonus\"");}
#line 2590 "parser.tab.c"
    break;

  case 212: /* $@115: %empty  */
#line 157 "parser.y"
                                                 {printf(":");}
#line 2596 "parser.tab.c"
    break;

  case 213: /* $@116: %empty  */
#line 157 "parser.y"
                                                                   {printf("[");}
#line 2602 "parser.tab.c"
    break;

  case 214: /* bonus1: BONUS $@114 COLON $@115 AB $@116 INT AE  */
#line 157 "parser.y"
                                                                                         {printf("]");}
#line 2608 "parser.tab.c"
    break;

  case 215: /* $@117: %empty  */
#line 159 "parser.y"
             {checkList(yytext);}
#line 2614 "parser.tab.c"
    break;

  case 216: /* $@118: %empty  */
#line 159 "parser.y"
                                        {printf(",");}
#line 2620 "parser.tab.c"
    break;

  case 217: /* $@119: %empty  */
#line 160 "parser.y"
             {checkList(yytext);}
#line 2626 "parser.tab.c"
    break;

  case 218: /* $@120: %empty  */
#line 160 "parser.y"
                                        {printf(",");}
#line 2632 "parser.tab.c"
    break;

  case 219: /* $@121: %empty  */
#line 161 "parser.y"
             {checkList(yytext);}
#line 2638 "parser.tab.c"
    break;

  case 220: /* $@122: %empty  */
#line 161 "parser.y"
                                        {printf(",");}
#line 2644 "parser.tab.c"
    break;

  case 221: /* $@123: %empty  */
#line 162 "parser.y"
             {checkList(yytext);}
#line 2650 "parser.tab.c"
    break;

  case 222: /* $@124: %empty  */
#line 162 "parser.y"
                                        {printf(",");}
#line 2656 "parser.tab.c"
    break;

  case 223: /* value1: INT $@117 COMMA $@118 INT $@119 COMMA $@120 INT $@121 COMMA $@122 INT $@123 COMMA $@124 INT  */
#line 163 "parser.y"
             {checkList(yytext);}
#line 2662 "parser.tab.c"
    break;

  case 224: /* $@125: %empty  */
#line 165 "parser.y"
                       {printf("\t\"totalPages\"");}
#line 2668 "parser.tab.c"
    break;

  case 225: /* $@126: %empty  */
#line 165 "parser.y"
                                                           {printf(":");}
#line 2674 "parser.tab.c"
    break;

  case 226: /* totalPages: TOTALPAGES $@125 COLON $@126 INT COMMA  */
#line 165 "parser.y"
                                                                                   {printf(",\n");}
#line 2680 "parser.tab.c"
    break;

  case 227: /* $@127: %empty  */
#line 166 "parser.y"
                             {printf("\t\"totalElements\"");}
#line 2686 "parser.tab.c"
    break;

  case 228: /* $@128: %empty  */
#line 166 "parser.y"
                                                                    {printf(":");}
#line 2692 "parser.tab.c"
    break;

  case 229: /* totalElements: TOTALELEMENTS $@127 COLON $@128 INT COMMA  */
#line 166 "parser.y"
                                                                                            {printf(",\n");}
#line 2698 "parser.tab.c"
    break;

  case 230: /* $@129: %empty  */
#line 167 "parser.y"
            {printf("\t\"last\"");}
#line 2704 "parser.tab.c"
    break;

  case 231: /* $@130: %empty  */
#line 167 "parser.y"
                                          {printf(":");}
#line 2710 "parser.tab.c"
    break;

  case 232: /* last2: LAST $@129 COLON $@130 BOOLEAN COMMA  */
#line 167 "parser.y"
                                                                      {printf(",\n");}
#line 2716 "parser.tab.c"
    break;

  case 233: /* $@131: %empty  */
#line 168 "parser.y"
                                   {printf("\t\"numberOfElements\"");}
#line 2722 "parser.tab.c"
    break;

  case 234: /* $@132: %empty  */
#line 168 "parser.y"
                                                                             {printf(":");}
#line 2728 "parser.tab.c"
    break;

  case 235: /* numberOfElements: NUMBEROFELEMENTS $@131 COLON $@132 INT COMMA  */
#line 168 "parser.y"
                                                                                                     {printf(",\n");}
#line 2734 "parser.tab.c"
    break;

  case 236: /* $@133: %empty  */
#line 169 "parser.y"
           {printf("\t\"sort\"");}
#line 2740 "parser.tab.c"
    break;

  case 237: /* $@134: %empty  */
#line 169 "parser.y"
                                         {printf(":");}
#line 2746 "parser.tab.c"
    break;

  case 238: /* $@135: %empty  */
#line 169 "parser.y"
                                                          {printf("[\n");}
#line 2752 "parser.tab.c"
    break;

  case 239: /* sort: SORT $@133 COLON $@134 AB $@135 sortobj AE COMMA  */
#line 169 "parser.y"
                                                                                            {printf("\t\t],\n");}
#line 2758 "parser.tab.c"
    break;

  case 240: /* $@136: %empty  */
#line 171 "parser.y"
              {printf("\t\t{\n");}
#line 2764 "parser.tab.c"
    break;

  case 241: /* $@137: %empty  */
#line 172 "parser.y"
                         {printf(",\n");}
#line 2770 "parser.tab.c"
    break;

  case 242: /* $@138: %empty  */
#line 173 "parser.y"
                        {printf(",\n");}
#line 2776 "parser.tab.c"
    break;

  case 243: /* $@139: %empty  */
#line 174 "parser.y"
                          {printf(",\n");}
#line 2782 "parser.tab.c"
    break;

  case 244: /* $@140: %empty  */
#line 175 "parser.y"
                            {printf(",\n");}
#line 2788 "parser.tab.c"
    break;

  case 245: /* $@141: %empty  */
#line 176 "parser.y"
                          {printf(",\n");}
#line 2794 "parser.tab.c"
    break;

  case 246: /* sortobj: OBB $@136 direction COMMA $@137 property COMMA $@138 ignoreCase COMMA $@139 nullHandling COMMA $@140 descending COMMA $@141 ascending OBE  */
#line 178 "parser.y"
              {printf("\n\t\t}\n");}
#line 2800 "parser.tab.c"
    break;

  case 247: /* $@142: %empty  */
#line 180 "parser.y"
                     {printf("\t\t\"direction\"");}
#line 2806 "parser.tab.c"
    break;

  case 248: /* $@143: %empty  */
#line 180 "parser.y"
                                                          {printf(":");}
#line 2812 "parser.tab.c"
    break;

  case 250: /* $@144: %empty  */
#line 181 "parser.y"
                   {printf("\t\t\"property\"");}
#line 2818 "parser.tab.c"
    break;

  case 251: /* $@145: %empty  */
#line 181 "parser.y"
                                                       {printf(":");}
#line 2824 "parser.tab.c"
    break;

  case 253: /* $@146: %empty  */
#line 182 "parser.y"
                       {printf("\t\t\"ignoreCase\"");}
#line 2830 "parser.tab.c"
    break;

  case 254: /* $@147: %empty  */
#line 182 "parser.y"
                                                             {printf(":");}
#line 2836 "parser.tab.c"
    break;

  case 256: /* $@148: %empty  */
#line 183 "parser.y"
                           {printf("\t\t\"nullHandling\"");}
#line 2842 "parser.tab.c"
    break;

  case 257: /* $@149: %empty  */
#line 183 "parser.y"
                                                                   {printf(":");}
#line 2848 "parser.tab.c"
    break;

  case 259: /* $@150: %empty  */
#line 184 "parser.y"
                       {printf("\t\t\"descending\"");}
#line 2854 "parser.tab.c"
    break;

  case 260: /* $@151: %empty  */
#line 184 "parser.y"
                                                             {printf(":");}
#line 2860 "parser.tab.c"
    break;

  case 262: /* $@152: %empty  */
#line 185 "parser.y"
                     {printf("\t\t\"ascending\"");}
#line 2866 "parser.tab.c"
    break;

  case 263: /* $@153: %empty  */
#line 185 "parser.y"
                                                          {printf(":");}
#line 2872 "parser.tab.c"
    break;

  case 265: /* $@154: %empty  */
#line 187 "parser.y"
             {printf("\t\"first\"");}
#line 2878 "parser.tab.c"
    break;

  case 266: /* $@155: %empty  */
#line 187 "parser.y"
                                            {printf(":");}
#line 2884 "parser.tab.c"
    break;

  case 267: /* first: FIRST $@154 COLON $@155 BOOLEAN COMMA  */
#line 187 "parser.y"
                                                                        {printf(",\n");}
#line 2890 "parser.tab.c"
    break;

  case 268: /* $@156: %empty  */
#line 188 "parser.y"
           {printf("\t\"size\"");}
#line 2896 "parser.tab.c"
    break;

  case 269: /* $@157: %empty  */
#line 188 "parser.y"
                                         {printf(":");}
#line 2902 "parser.tab.c"
    break;

  case 270: /* size: SIZE $@156 COLON $@157 INT COMMA  */
#line 188 "parser.y"
                                                                 {printf(",\n");}
#line 2908 "parser.tab.c"
    break;

  case 271: /* $@158: %empty  */
#line 189 "parser.y"
               {printf("\t\"number\"");}
#line 2914 "parser.tab.c"
    break;

  case 272: /* $@159: %empty  */
#line 189 "parser.y"
                                               {printf(":");}
#line 2920 "parser.tab.c"
    break;


#line 2924 "parser.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 192 "parser.y"

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
