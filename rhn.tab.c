
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 3 "rhn.y"

	#include<stdio.h>
	
	extern char sym2d[100][100];
	#include <math.h>
	int indx=0,t=1,z=0;
	extern int cnt;
	int sym[26],store[26];
	int flag=1,val,i,j,count=0;
	
		


/* Line 189 of yacc.c  */
#line 87 "rhn.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     MAIN = 258,
     INT = 259,
     STR = 260,
     FLOAT = 261,
     CHAR = 262,
     NUM = 263,
     VAR = 264,
     VAR1 = 265,
     COMMA = 266,
     BRK_LINE = 267,
     FOR = 268,
     WHILE = 269,
     COLON = 270,
     DEFAULT = 271,
     CASE = 272,
     THEN = 273,
     IF = 274,
     ELSE = 275,
     SWITCH = 276,
     LP = 277,
     RP = 278,
     START = 279,
     END = 280,
     PRINT = 281,
     PLUS = 282,
     MINUS = 283,
     MULT = 284,
     DIV = 285,
     ASSIGN = 286,
     GT = 287,
     LT = 288,
     GE = 289,
     LE = 290,
     EQUAL = 291,
     INC = 292,
     FACTORIAL = 293,
     POW = 294,
     FUNC_DEC = 295,
     FUNC_DEF = 296,
     NAME = 297,
     IFX = 298
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 172 "rhn.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   241

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  16
/* YYNRULES -- Number of rules.  */
#define YYNRULES  45
/* YYNRULES -- Number of states.  */
#define YYNSTATES  153

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   298

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
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
      35,    36,    37,    38,    39,    40,    41,    42,    43
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,    11,    12,    20,    21,    24,    27,    30,
      33,    38,    42,    44,    46,    48,    51,    55,    57,    59,
      61,    65,    69,    78,   104,   130,   133,   150,   164,   170,
     173,   175,   178,   183,   185,   189,   193,   197,   201,   205,
     209,   213,   215,   217,   219,   223
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      45,     0,    -1,     3,    22,    23,    24,    47,    46,    25,
      -1,    -1,    41,    42,    22,    23,    24,    51,    25,    -1,
      -1,    47,    55,    -1,    47,    49,    -1,    47,    54,    -1,
      47,    48,    -1,    40,    42,    22,    23,    -1,    50,    52,
      12,    -1,     4,    -1,     6,    -1,     7,    -1,     8,    12,
      -1,    53,    11,    52,    -1,    53,    -1,     9,    -1,    10,
      -1,    10,    31,     8,    -1,     9,    31,     8,    -1,    19,
      22,    56,    23,    15,    24,    56,    25,    -1,    19,    22,
      56,    23,    15,    24,    19,    22,    56,    23,    15,    24,
      56,    25,    20,    15,    24,    56,    25,    25,    20,    15,
      24,    56,    25,    -1,    19,    22,    56,    23,    15,    24,
      56,    25,    20,    15,    24,    19,    22,    56,    23,    15,
      24,    56,    25,    20,    15,    24,    56,    25,    25,    -1,
       8,    38,    -1,    13,    22,     9,    31,     8,    11,     9,
      35,     8,    11,     9,    37,    23,    24,    54,    25,    -1,
      14,    22,     9,    33,     8,    23,    15,    24,    54,     9,
      37,    12,    25,    -1,    26,    22,     9,    23,    12,    -1,
      56,    12,    -1,    12,    -1,    56,    12,    -1,     9,    31,
      56,    12,    -1,     9,    -1,    56,    33,    56,    -1,    56,
      32,    56,    -1,    56,    29,    56,    -1,    56,    30,    56,
      -1,    56,    27,    56,    -1,    56,    28,    56,    -1,    56,
      39,    56,    -1,    57,    -1,    58,    -1,    59,    -1,    22,
      56,    23,    -1,     8,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    34,    34,    38,    39,    42,    43,    44,    45,    46,
      51,    56,    59,    59,    59,    63,    77,    77,    79,    84,
     113,   168,   177,   190,   207,   225,   235,   246,   253,   256,
     260,   261,   262,   272,   273,   275,   276,   277,   288,   289,
     292,   297,   300,   303,   304,   307
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "MAIN", "INT", "STR", "FLOAT", "CHAR",
  "NUM", "VAR", "VAR1", "COMMA", "BRK_LINE", "FOR", "WHILE", "COLON",
  "DEFAULT", "CASE", "THEN", "IF", "ELSE", "SWITCH", "LP", "RP", "START",
  "END", "PRINT", "PLUS", "MINUS", "MULT", "DIV", "ASSIGN", "GT", "LT",
  "GE", "LE", "EQUAL", "INC", "FACTORIAL", "POW", "FUNC_DEC", "FUNC_DEF",
  "NAME", "IFX", "$accept", "program", "FUNC_CALL", "contents", "function",
  "declaration", "TYPE", "FUNC_BODY", "Variable", "VariableRepeat",
  "if_else_for_while", "statement", "Expresssion", "term", "factor",
  "digit", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    44,    45,    46,    46,    47,    47,    47,    47,    47,
      48,    49,    50,    50,    50,    51,    52,    52,    53,    53,
      53,    53,    54,    54,    54,    54,    54,    54,    54,    54,
      55,    55,    55,    56,    56,    56,    56,    56,    56,    56,
      56,    56,    57,    58,    58,    59
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     7,     0,     7,     0,     2,     2,     2,     2,
       4,     3,     1,     1,     1,     2,     3,     1,     1,     1,
       3,     3,     8,    25,    25,     2,    16,    13,     5,     2,
       1,     2,     4,     1,     3,     3,     3,     3,     3,     3,
       3,     1,     1,     1,     3,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     5,     3,    12,    13,
      14,    45,    33,    30,     0,     0,     0,     0,     0,     0,
       0,     0,     9,     7,     0,     8,     6,     0,    41,    42,
      43,    25,     0,     0,     0,     0,    45,    33,     0,     0,
       0,     0,     2,    18,    19,     0,    17,    29,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    44,
       0,     0,     0,     0,     0,    11,     0,    38,    39,    36,
      37,    35,    34,    40,    32,     0,     0,     0,     0,    10,
       0,    21,    20,    16,     0,     0,     0,    28,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    15,     4,
       0,     0,     0,    22,     0,     0,     0,     0,     0,     0,
       0,    29,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    27,     0,     0,     0,     0,     0,     0,
       0,     0,    26,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    23,    24
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,    21,     7,    22,    23,    24,    93,    45,    46,
      25,    26,   106,    28,    29,    30
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -101
static const yytype_int16 yypact[] =
{
      -1,   -15,     9,   -12,  -101,   -16,  -101,     8,  -101,  -101,
    -101,    -5,     0,  -101,    15,    16,    17,    55,    18,    19,
      25,    32,  -101,  -101,    -4,  -101,  -101,    23,  -101,  -101,
    -101,  -101,    55,    49,    50,    55,  -101,  -101,    69,    51,
      46,    56,  -101,    52,    54,    68,    71,  -101,    55,    55,
      55,    55,    55,    55,    55,    42,    72,    53,    82,  -101,
      64,    81,    83,    99,   108,  -101,    -4,   -26,   -26,    78,
      78,    95,    95,  -101,  -101,   111,   112,   122,   115,  -101,
     114,  -101,  -101,  -101,   132,   121,   125,  -101,   145,   143,
     139,    57,   150,   130,   133,   141,   153,   131,  -101,  -101,
     158,    10,    55,   147,   167,   171,    61,   103,   164,   172,
     151,  -101,   176,   168,   156,   182,   177,   185,   184,   180,
      55,   192,   193,  -101,   144,    55,    10,   186,   118,   194,
     203,   205,  -101,   206,   207,    55,    55,   157,   170,   202,
     212,   213,   219,   221,   214,   215,    55,    55,   183,   196,
     216,  -101,  -101
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -101,  -101,  -101,  -101,  -101,  -101,  -101,  -101,   174,  -101,
    -100,  -101,    -7,  -101,  -101,  -101
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      27,   105,     1,    50,    51,    43,    44,     3,     6,     4,
      38,     5,     8,    54,     9,    10,    11,    12,    11,    37,
      13,    14,    15,    14,    15,    55,   129,    16,    58,    16,
      17,    32,    17,    31,    18,    47,    18,    33,    34,    35,
      39,    67,    68,    69,    70,    71,    72,    73,    19,    20,
      48,    49,    50,    51,    74,    52,    53,    42,    56,    57,
      60,    40,    54,    36,    37,    36,    37,    41,    61,    48,
      49,    50,    51,   111,    52,    53,    96,    17,    62,    17,
      65,    54,    66,    63,    97,    64,    76,    78,    48,    49,
      50,    51,    59,    52,    53,   107,    48,    49,    50,    51,
      54,    52,    53,    75,    79,    77,    80,    81,    54,    48,
      49,    50,    51,   124,    52,    53,    82,    54,   128,    84,
      85,    54,    48,    49,    50,    51,   112,    87,   137,   138,
      48,    49,    50,    51,    54,    52,    53,    86,    88,   148,
     149,   131,    54,    89,    90,    48,    49,    50,    51,    91,
      52,    53,    94,    92,    95,    99,   103,    54,    48,    49,
      50,    51,    98,    52,    53,   101,   104,   108,   100,   127,
      54,    48,    49,    50,    51,   102,    52,    53,   109,   113,
     110,   114,   139,    54,    48,    49,    50,    51,   115,    52,
      53,   116,   117,   118,   119,   140,    54,    48,    49,    50,
      51,   120,    52,    53,   121,   123,   130,   122,   150,    54,
      48,    49,    50,    51,   125,    52,    53,   126,   133,   132,
     134,   151,    54,    48,    49,    50,    51,   141,    52,    53,
     135,   136,   142,   143,   144,    54,   145,     0,   146,   147,
      83,   152
};

static const yytype_int16 yycheck[] =
{
       7,   101,     3,    29,    30,     9,    10,    22,    24,     0,
      17,    23,     4,    39,     6,     7,     8,     9,     8,     9,
      12,    13,    14,    13,    14,    32,   126,    19,    35,    19,
      22,    31,    22,    38,    26,    12,    26,    22,    22,    22,
      22,    48,    49,    50,    51,    52,    53,    54,    40,    41,
      27,    28,    29,    30,    12,    32,    33,    25,     9,     9,
       9,    42,    39,     8,     9,     8,     9,    42,    22,    27,
      28,    29,    30,    12,    32,    33,    19,    22,    22,    22,
      12,    39,    11,    31,    91,    31,    33,    23,    27,    28,
      29,    30,    23,    32,    33,   102,    27,    28,    29,    30,
      39,    32,    33,    31,    23,    23,    23,     8,    39,    27,
      28,    29,    30,   120,    32,    33,     8,    39,   125,     8,
       8,    39,    27,    28,    29,    30,    23,    12,   135,   136,
      27,    28,    29,    30,    39,    32,    33,    15,    24,   146,
     147,    23,    39,    11,    23,    27,    28,    29,    30,    24,
      32,    33,     9,     8,    15,    25,    25,    39,    27,    28,
      29,    30,    12,    32,    33,    24,     8,    20,    35,    25,
      39,    27,    28,    29,    30,    22,    32,    33,    11,    15,
       9,     9,    25,    39,    27,    28,    29,    30,    37,    32,
      33,    15,    24,    37,    12,    25,    39,    27,    28,    29,
      30,    24,    32,    33,    19,    25,    20,    23,    25,    39,
      27,    28,    29,    30,    22,    32,    33,    24,    15,    25,
      15,    25,    39,    27,    28,    29,    30,    25,    32,    33,
      24,    24,    20,    20,    15,    39,    15,    -1,    24,    24,
      66,    25
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    45,    22,     0,    23,    24,    47,     4,     6,
       7,     8,     9,    12,    13,    14,    19,    22,    26,    40,
      41,    46,    48,    49,    50,    54,    55,    56,    57,    58,
      59,    38,    31,    22,    22,    22,     8,     9,    56,    22,
      42,    42,    25,     9,    10,    52,    53,    12,    27,    28,
      29,    30,    32,    33,    39,    56,     9,     9,    56,    23,
       9,    22,    22,    31,    31,    12,    11,    56,    56,    56,
      56,    56,    56,    56,    12,    31,    33,    23,    23,    23,
      23,     8,     8,    52,     8,     8,    15,    12,    24,    11,
      23,    24,     8,    51,     9,    15,    19,    56,    12,    25,
      35,    24,    22,    25,     8,    54,    56,    56,    20,    11,
       9,    12,    23,    15,     9,    37,    15,    24,    37,    12,
      24,    19,    23,    25,    56,    22,    24,    25,    56,    54,
      20,    23,    25,    15,    15,    24,    24,    56,    56,    25,
      25,    25,    20,    20,    15,    15,    24,    24,    56,    56,
      25,    25,    25
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
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



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 34 "rhn.y"
    { printf("\nsuccessfully compiled\n"); ;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 39 "rhn.y"
    { printf("\nFunction successfully executed\n"); ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 51 "rhn.y"
    { printf("\nUser defined function  is called");  printf("\n"); ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 56 "rhn.y"
    { printf("valid declaration\n");  printf("\n"); ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 63 "rhn.y"
    {
					      
					      if((yyvsp[(1) - (2)])%2 == 0)
					       {
					           printf("\nNumber %d is EVEN ",(yyvsp[(1) - (2)]));
					           printf("\n");
					       }
					       else{
					       printf("\nNumber %d is ODD ",(yyvsp[(1) - (2)]));
					       printf("\n");
					       }
					 ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 79 "rhn.y"
    {
										if(store[(yyvsp[(1) - (1)])] == 1) printf("Variable %c Redeclared\n",(yyvsp[(1) - (1)])+'a');
										else store[(yyvsp[(1) - (1)])]=1;
									;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 84 "rhn.y"
    {
										
									
										for(i=0; i<cnt-1; i++)
										{	
											
											for( j=0; sym2d[cnt-1][j]!='\0'; j++)
											{
												
												if(sym2d[i][j] == sym2d[cnt-1][j])
												{
													count++;
												}
									
											}
											
											if(count == j && sym2d[i][j]=='\0' && sym2d[cnt-1][j]=='\0'){
												
												printf("variable %s is Redeclared \n",sym2d[cnt-1]);
												 printf("\n");
											}
											count=0;
																					
										}
									
										
										
									;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 113 "rhn.y"
    {
										if(cnt<2)           
										{
											char c = (char) (yyvsp[(3) - (3)]);
											sym2d[indx][99]=c;
											int i = (int) c;
											
											indx++;
											
										}
										
										
										for(i=0; i<cnt-1; i++) 
										{	
											
											for( j=0; sym2d[cnt-1][j]!='\0'; j++)
											{
												
												if(sym2d[i][j] == sym2d[cnt-1][j])
												{
													count++;
												}
									
											}
											
											
											if(count == j && sym2d[i][j]=='\0' && sym2d[cnt-1][j]=='\0')
											{
												
												printf("variable %s is Redeclared \n",sym2d[cnt-1]);
												 printf("\n");
												t=0;
											}
											
											count=0;
											
										}
									
										
										
										if(t&&cnt>1)
										{
											
											char c = (char) (yyvsp[(3) - (3)]);
											sym2d[indx][99]=c;
											int i = (int) c;
											indx++;
										}
										
										if(t)printf("\nValue of the %s = %d\t\n",sym2d[cnt-1],sym2d[cnt-1][99]);
										 printf("\n");
										
									;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 168 "rhn.y"
    { 	
										if(store[(yyvsp[(1) - (3)])] == 1) printf("variable %c Redeclared\n",(yyvsp[(1) - (3)])+'a');
										else store[(yyvsp[(1) - (3)])]=1;
										sym[(yyvsp[(1) - (3)])] = (yyvsp[(3) - (3)]); 
										printf("\nValue of the %c = %d\t\n",(yyvsp[(1) - (3)])+'a',(yyvsp[(3) - (3)]));
										 printf("\n");
									;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 177 "rhn.y"
    {	
								
								if((yyvsp[(3) - (8)]))
								{
									printf("\nvalue of Expresssion in if: %d\n",(yyvsp[(7) - (8)]));

								}
								
								else
								{
									printf("condition value zero in IF block\n");
								}								;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 191 "rhn.y"
    {
								    if((yyvsp[(3) - (25)]))
									{
									   if((yyvsp[(9) - (25)]))
									   { printf("\nvalue of Expresssion in if if: %d\n",(yyvsp[(13) - (25)])); }
									   else
									   { printf("\nvalue of Expresssion in if else: %d\n",(yyvsp[(18) - (25)])); }
									}
									else
									{
										printf("\nvalue of Expresssion in only else: %d\n",(yyvsp[(24) - (25)]));
									}
									
								
									;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 208 "rhn.y"
    {
								    if((yyvsp[(3) - (25)]))
									{
										 printf("\nvalue of Expresssion in only if: %d\n",(yyvsp[(7) - (25)])); 
									}
									else
									{
									   if((yyvsp[(14) - (25)]))
									   { printf("\nvalue of Expresssion in else if: %d\n",(yyvsp[(18) - (25)])); }
									   else
									   { printf("\nvalue of Expresssion in else else: %d\n",(yyvsp[(23) - (25)])); }
									}
									
								
									;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 225 "rhn.y"
    {
						int mult=1 ,i;
						for(i=(yyvsp[(1) - (2)]);i>0;i--)
						{
							mult=mult*i;
						}
						(yyval)=mult;
						printf("factorial value %d!\n",(yyval)); 
					 ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 235 "rhn.y"
    {
																					printf("\nIn Loop:\n");
																					for( sym[(yyvsp[(3) - (16)])]=(yyvsp[(5) - (16)]); sym[(yyvsp[(3) - (16)])] <= (yyvsp[(9) - (16)]); sym[(yyvsp[(3) - (16)])]++)
																					{
																						printf("%d",(yyvsp[(15) - (16)]));
																						printf("\n");

																						
																					}printf("\n");
																				
																				;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 246 "rhn.y"
    {
																					printf("\nWhile loop : \n");
																					while(sym[(yyvsp[(3) - (13)])]<(yyvsp[(5) - (13)])){
																					printf("%d\n",(yyvsp[(9) - (13)]));
																					sym[(yyvsp[(3) - (13)])]++;
																					 }
																					;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 253 "rhn.y"
    { printf("Print is called and value is : %d\n",sym[(yyvsp[(3) - (5)])]); ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 261 "rhn.y"
    { printf("\nValue of Expresssionession: %d\n", (yyvsp[(1) - (2)])); ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 262 "rhn.y"
    {
										sym[(yyvsp[(1) - (4)])] = (yyvsp[(3) - (4)]); 
									
										if(store[(yyvsp[(1) - (4)])]!=1)printf("'%c' is not declared!!",(yyvsp[(1) - (4)])+'a');
										printf("\n");
										//printf("\nValue of the %c = %d\t\n",$1+'a',$3);
									;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 272 "rhn.y"
    { (yyval) = sym[(yyvsp[(1) - (1)])]; ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 273 "rhn.y"
    { (yyval) = (yyvsp[(1) - (3)]) < (yyvsp[(3) - (3)]); ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 275 "rhn.y"
    { (yyval) = (yyvsp[(1) - (3)]) > (yyvsp[(3) - (3)]); ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 276 "rhn.y"
    { (yyval) = (yyvsp[(1) - (3)]) * (yyvsp[(3) - (3)]); ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 277 "rhn.y"
    { 
										if((yyvsp[(3) - (3)])) 
										{
												(yyval) = (yyvsp[(1) - (3)]) / (yyvsp[(3) - (3)]);
										}
										else
										{
											(yyval) = 0;
											printf("\ndivision by zero\t");
										}
									;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 288 "rhn.y"
    { (yyval) = (yyvsp[(1) - (3)]) + (yyvsp[(3) - (3)]); ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 289 "rhn.y"
    { (yyval) = (yyvsp[(1) - (3)]) - (yyvsp[(3) - (3)]); ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 292 "rhn.y"
    { 
			                                       (yyval)=pow((yyvsp[(1) - (3)]),(yyvsp[(3) - (3)])); printf("To the power value %d\n",(yyval));
			                                        printf("\n"); ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 303 "rhn.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 304 "rhn.y"
    { (yyval) = (yyvsp[(2) - (3)]); ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 307 "rhn.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;



/* Line 1455 of yacc.c  */
#line 1880 "rhn.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 314 "rhn.y"


int yywrap()
{
return 1;
}


yyerror(char *s){
	printf( "%s\n", s);
}


