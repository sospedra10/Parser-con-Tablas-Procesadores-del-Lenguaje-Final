/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "parser.y" /* yacc.c:339  */

	#include <stdio.h>
	#include <math.h>
	#include <stdlib.h>
	#include <string.h>
	#include "tablaSimbolos.h"
	#include "tablaCuadruplas.h"
	
	int yylex(void);
	int yyparse(void);
	tablaSimbolos simbolos;
	tablaCuadruplas cuadruplas;
	extern FILE *yyin;
	void yyerror (char const *);

#line 82 "parser.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.tab.h".  */
#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 18 "parser.y" /* yacc.c:355  */

	typedef struct {
		int id;
		tipoVariables tipo;
		tipoSimbolo tipoSim;
		tablaCuadruplas* true;
		tablaCuadruplas* false;
	}op_exp;

	typedef struct
	{
		tablaCuadruplas* current; 
		int next; 
	} instrucciones_struct;

#line 128 "parser.tab.c" /* yacc.c:355  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    accion = 258,
    algoritmo = 259,
    tipoBase = 260,
    identificador = 261,
    literalEntero = 262,
    literalCaracter = 263,
    literalBooleano = 264,
    palabraReservada = 265,
    literalCadena = 266,
    literalReal = 267,
    espacio = 268,
    o = 269,
    y = 270,
    no = 271,
    comentario = 272,
    booleano = 273,
    cadena = 274,
    caracter = 275,
    constt = 276,
    continuar = 277,
    de = 278,
    dev = 279,
    divv = 280,
    ent = 281,
    entero = 282,
    es = 283,
    faccion = 284,
    falgoritmo = 285,
    fconst = 286,
    ffuncion = 287,
    fmientras = 288,
    fpara = 289,
    fsi = 290,
    ftipo = 291,
    ftupla = 292,
    funcion = 293,
    fvar = 294,
    hacer = 295,
    hasta = 296,
    mientras = 297,
    mod = 298,
    para = 299,
    real = 300,
    ref = 301,
    sal = 302,
    si = 303,
    tabla = 304,
    tipo = 305,
    tupla = 306,
    var = 307,
    operadorAsignar = 308,
    operadorPuntoComa = 309,
    operadorComa = 310,
    operadorSubRango = 311,
    operadorDefinicionTipo = 312,
    operadorEntonces = 313,
    operadorInicioArray = 314,
    operadorFinArray = 315,
    operadorIgual = 316,
    operadorSiNoSi = 317,
    operadorInicioParentesis = 318,
    operadorFinParentesis = 319,
    operadorMas = 320,
    operadorPor = 321,
    operadorElevado = 322,
    operadorDivisor = 323,
    operadorModulo = 324,
    operadorMenos = 325,
    operadorMayor = 326,
    operadorMenor = 327,
    operadorMayorIgual = 328,
    operadorMenorIgual = 329,
    operadorComparador = 330,
    operadorDistinto = 331,
    operadorAmpersand = 332,
    operadorOr = 333,
    operadorPunto = 334,
    menosu = 335,
    masu = 336
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 144 "parser.y" /* yacc.c:355  */

	int intValue;
	float floatValue;
	char *stringValue;
	char charValue;
	int boolValue;
  	char cuentaValue;
	tipoVariables tipo;
	op_exp operadorArit;
	symData symData;
	instrucciones_struct instr;

#line 235 "parser.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 252 "parser.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   291

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  82
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  47
/* YYNRULES -- Number of rules.  */
#define YYNRULES  115
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  241

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   336

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   163,   163,   172,   176,   180,   181,   182,   186,   187,
     188,   192,   196,   197,   198,   199,   203,   207,   211,   215,
     216,   220,   221,   225,   226,   230,   231,   232,   233,   234,
     238,   239,   243,   244,   248,   249,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   267,   268,   272,   273,
     274,   278,   282,   286,   287,   288,   292,   331,   372,   410,
     427,   451,   476,   477,   478,   479,   480,   484,   500,   501,
     502,   506,   511,   516,   520,   531,   537,   541,   542,   543,
     544,   545,   546,   550,   553,   557,   558,   559,   560,   561,
     565,   612,   617,   630,   635,   648,   649,   653,   665,   670,
     674,   678,   682,   686,   687,   688,   692,   693,   694,   698,
     702,   706,   707,   708,   712,   714
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "accion", "algoritmo", "tipoBase",
  "identificador", "literalEntero", "literalCaracter", "literalBooleano",
  "palabraReservada", "literalCadena", "literalReal", "espacio", "o", "y",
  "no", "comentario", "booleano", "cadena", "caracter", "constt",
  "continuar", "de", "dev", "divv", "ent", "entero", "es", "faccion",
  "falgoritmo", "fconst", "ffuncion", "fmientras", "fpara", "fsi", "ftipo",
  "ftupla", "funcion", "fvar", "hacer", "hasta", "mientras", "mod", "para",
  "real", "ref", "sal", "si", "tabla", "tipo", "tupla", "var",
  "operadorAsignar", "operadorPuntoComa", "operadorComa",
  "operadorSubRango", "operadorDefinicionTipo", "operadorEntonces",
  "operadorInicioArray", "operadorFinArray", "operadorIgual",
  "operadorSiNoSi", "operadorInicioParentesis", "operadorFinParentesis",
  "operadorMas", "operadorPor", "operadorElevado", "operadorDivisor",
  "operadorModulo", "operadorMenos", "operadorMayor", "operadorMenor",
  "operadorMayorIgual", "operadorMenorIgual", "operadorComparador",
  "operadorDistinto", "operadorAmpersand", "operadorOr", "operadorPunto",
  "menosu", "masu", "$accept", "desc_algoritmo", "cabeceraAlgoritmo",
  "bloqueAlgoritmo", "defGlobales", "defAccionesFunciones", "bloque",
  "declaraciones", "definicionTipo", "definicionConst", "definicionVar",
  "listaDefsTipo", "expresionT", "listaCampos", "literal",
  "literalNumerico", "listaDefsConstantes", "listaDefsVariables",
  "defTipo", "listaId", "defVariablesInteraccion", "defEntrada",
  "defSalida", "expresion", "expArit", "operando", "expBool", "oprel",
  "instrucciones", "instruccion", "asignacion", "alternativa",
  "listaOpciones", "iteracion", "itCotaVariable", "itCotaFija",
  "defAccion", "defFuncion_d", "cabeceraAccion", "cabeceraFuncion",
  "defParForm", "dParForm", "llamadaAccion", "llamadaFuncion",
  "parametrosReales", "M", "N", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336
};
# endif

#define YYPACT_NINF -141

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-141)))

#define YYTABLE_NINF -116

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      18,    22,    36,     6,  -141,    28,    57,    66,   156,    16,
      28,    28,    21,    59,    38,    68,   103,   102,   117,    23,
     156,   156,   156,   131,   150,     1,    16,    16,  -141,  -141,
     256,  -141,   106,  -141,   -20,   119,   113,  -141,  -141,   123,
    -141,  -141,   188,    14,   -15,  -141,   115,  -141,  -141,  -141,
    -141,  -141,  -141,  -141,  -141,  -141,   129,   156,   139,   156,
     103,   103,   159,   158,  -141,  -141,  -141,  -141,  -141,  -141,
    -141,  -141,   162,  -141,  -141,  -141,  -141,  -141,  -141,  -141,
    -141,   106,   145,   211,   164,   165,   103,   106,  -141,   103,
      14,    14,   171,   160,  -141,  -141,  -141,    14,    14,    35,
      35,  -141,   157,    15,   -13,    -2,  -141,  -141,    14,    14,
     219,    23,   175,   197,   103,   203,  -141,  -141,  -141,  -141,
      57,  -141,   133,   190,   212,   133,    66,  -141,  -141,  -141,
     138,   184,    99,    14,    14,   170,   186,    -9,    10,  -141,
      35,  -141,  -141,  -141,  -141,  -141,  -141,  -141,  -141,  -141,
      14,    35,    35,    35,    35,    35,    35,  -141,  -141,   170,
     180,  -141,  -141,   103,   103,   103,   202,   196,  -141,   205,
      14,  -141,   214,   106,  -141,  -141,  -141,    14,  -141,  -141,
     124,   207,  -141,  -141,    -9,    23,   170,  -141,  -141,     7,
    -141,  -141,     7,    14,    14,  -141,  -141,  -141,  -141,   218,
     175,   249,    71,   133,   220,  -141,    23,    14,  -141,   240,
      47,   186,  -141,  -141,   271,  -141,   217,   211,   245,   109,
    -141,   221,   225,   257,  -141,  -141,    23,    14,   246,  -141,
     106,   248,   163,  -141,  -141,  -141,  -141,    23,   222,   221,
    -141
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     7,    33,    20,    15,    10,
       7,     7,     0,     0,     0,     0,    35,     0,     0,     0,
      15,    15,    15,     0,     0,     0,    10,    10,     5,     6,
       0,    17,     0,    16,     0,     0,     0,     2,     4,    67,
      85,   114,     0,     0,     0,    11,    84,    86,    87,    88,
      96,    95,    89,    12,    13,    14,     0,    15,     0,    15,
      35,    35,     0,    48,    50,     8,     9,    28,    27,    25,
      26,    29,     0,    38,    21,    22,    42,    45,    44,    41,
      43,     0,     0,    24,     0,     0,     0,     0,    18,    35,
     113,     0,     0,    67,    30,    74,    31,     0,     0,     0,
       0,    66,     0,    53,    63,    54,    55,    70,     0,     0,
       0,     0,   105,     0,    35,     0,    51,    52,     3,    49,
      33,    40,     0,     0,     0,     0,    20,    46,    47,    34,
     112,     0,     0,     0,   113,     0,    73,    53,    54,    67,
       0,    65,    64,   114,    77,    78,    79,    80,    81,    82,
       0,     0,     0,     0,     0,     0,     0,   114,   114,    90,
       0,    68,    83,     0,     0,     0,     0,   104,    99,     0,
       0,    32,     0,     0,    36,    39,    19,   113,   109,   114,
       0,     0,    62,    76,     0,     0,    75,    60,    61,    56,
      58,    59,    57,     0,     0,    69,   106,   108,   107,     0,
     105,     0,     0,     0,     0,   111,     0,     0,   110,   115,
      72,    71,   101,   103,     0,   100,     0,    24,     0,     0,
      92,     0,     0,     0,    23,    97,     0,     0,     0,   102,
       0,     0,     0,    91,    37,    98,   114,     0,    94,     0,
      93
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -141,  -141,  -141,  -141,   143,   152,    70,   169,   105,   125,
    -141,   161,  -114,    69,  -141,  -141,   168,   -46,   -80,   -77,
    -141,  -141,   226,   -39,     8,   -19,   -92,  -141,  -109,  -141,
    -141,  -141,    46,  -141,  -141,  -141,  -141,  -141,  -141,  -141,
      90,  -141,  -141,  -141,  -124,  -140,    53
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     8,    17,     9,    25,    18,    19,    20,    21,
      22,    15,    84,   124,    72,   101,    13,    35,    85,    36,
      62,    63,    64,   135,   103,   104,   105,   150,    45,    46,
      47,    48,   228,    49,    50,    51,    26,    27,    57,    59,
     166,   167,    52,   106,   131,    91,   221
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      44,   121,   162,   185,   102,   136,   138,   128,   172,   127,
     181,   175,   157,   158,   116,   117,   151,   193,   194,    23,
      93,    94,     1,    95,   157,   158,    96,    60,     3,    39,
      97,   107,   151,   107,   152,    86,     4,    87,   108,   206,
     151,   139,    94,   129,   109,    40,   109,    96,    61,     6,
     152,   130,   132,   205,    24,   182,   153,   154,   152,   155,
       5,   156,   158,    12,   110,    41,   110,    42,   169,   159,
     160,    43,    14,   154,   183,   155,   209,    98,     7,    99,
     153,   154,    30,   155,   100,   156,   196,   197,   198,   216,
      31,   161,    44,   204,   180,   130,   237,   218,   140,    32,
      99,   210,   211,   215,    33,   100,   137,   141,   142,    34,
      10,   186,    73,    74,    75,    10,    10,   231,   -54,   -54,
     -54,   -54,   -54,   -54,    76,    77,    78,   113,   238,   115,
      11,   202,    37,    79,    38,    11,    11,    56,   130,   179,
      74,    75,   144,   145,   146,   147,   148,   149,   184,   226,
     234,    80,    81,    28,    29,    82,    58,    83,    88,   187,
     188,   189,   190,   191,   192,   207,    44,    89,   219,   111,
     144,   145,   146,   147,   148,   149,   118,     6,    65,    66,
     144,   145,   146,   147,   148,   149,    90,    44,   232,    53,
      54,    55,   112,   177,    92,   144,   145,   146,   147,   148,
     149,   163,   114,   164,   122,    61,     7,    44,    16,   144,
     145,   146,   147,   148,   149,   143,   120,   123,    44,   126,
     125,   236,   165,   134,   133,   139,   168,   170,   144,   145,
     146,   147,   148,   149,   144,   145,   146,   147,   148,   149,
     195,   144,   145,   146,   147,   148,   149,   173,   178,   174,
     200,   144,   145,   146,   147,   148,   149,   -54,   -54,   -54,
     -54,   -54,   -54,    67,    68,    69,   199,    70,    71,   201,
     203,   208,   212,   214,   217,   220,   222,   223,   225,   229,
     230,   233,   235,   227,  -115,   240,   224,   176,   171,   119,
     213,   239
};

static const yytype_uint8 yycheck[] =
{
      19,    81,   111,   143,    43,    97,    98,    87,   122,    86,
     134,   125,    14,    15,    60,    61,    25,   157,   158,     3,
       6,     7,     4,     9,    14,    15,    12,    26,     6,     6,
      16,    46,    25,    46,    43,    55,     0,    57,    53,   179,
      25,     6,     7,    89,    59,    22,    59,    12,    47,    21,
      43,    90,    91,   177,    38,    64,    65,    66,    43,    68,
      54,    70,    15,     6,    79,    42,    79,    44,   114,   108,
     109,    48,     6,    66,    64,    68,   185,    63,    50,    65,
      65,    66,    61,    68,    70,    70,   163,   164,   165,   203,
      31,   110,   111,   173,   133,   134,   236,   206,    63,    61,
      65,   193,   194,    32,    36,    70,    98,    99,   100,     6,
       5,   150,     6,     7,     8,    10,    11,   226,    71,    72,
      73,    74,    75,    76,    18,    19,    20,    57,   237,    59,
       5,   170,    30,    27,    17,    10,    11,     6,   177,    40,
       7,     8,    71,    72,    73,    74,    75,    76,   140,    40,
     230,    45,    46,    10,    11,    49,     6,    51,    39,   151,
     152,   153,   154,   155,   156,    41,   185,    54,   207,    54,
      71,    72,    73,    74,    75,    76,    17,    21,    26,    27,
      71,    72,    73,    74,    75,    76,    63,   206,   227,    20,
      21,    22,    63,    55,     6,    71,    72,    73,    74,    75,
      76,    26,    63,    28,    59,    47,    50,   226,    52,    71,
      72,    73,    74,    75,    76,    58,    54,     6,   237,    54,
      56,    58,    47,    63,    53,     6,    29,    24,    71,    72,
      73,    74,    75,    76,    71,    72,    73,    74,    75,    76,
      60,    71,    72,    73,    74,    75,    76,    57,    64,    37,
      54,    71,    72,    73,    74,    75,    76,    71,    72,    73,
      74,    75,    76,     7,     8,     9,    64,    11,    12,    64,
      56,    64,    54,    24,    54,    35,     5,    60,    33,    54,
      23,    35,    34,    62,    62,   239,   217,   126,   120,    63,
     200,   238
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,    83,     6,     0,    54,    21,    50,    84,    86,
      90,    91,     6,    98,     6,    93,    52,    85,    88,    89,
      90,    91,    92,     3,    38,    87,   118,   119,    86,    86,
      61,    31,    61,    36,     6,    99,   101,    30,    17,     6,
      22,    42,    44,    48,   107,   110,   111,   112,   113,   115,
     116,   117,   124,    89,    89,    89,     6,   120,     6,   121,
      26,    47,   102,   103,   104,    87,    87,     7,     8,     9,
      11,    12,    96,     6,     7,     8,    18,    19,    20,    27,
      45,    46,    49,    51,    94,   100,    55,    57,    39,    54,
      63,   127,     6,     6,     7,     9,    12,    16,    63,    65,
      70,    97,   105,   106,   107,   108,   125,    46,    53,    59,
      79,    54,    63,    88,    63,    88,    99,    99,    17,   104,
      54,   100,    59,     6,    95,    56,    54,   101,   100,    99,
     105,   126,   105,    53,    63,   105,   108,   106,   108,     6,
      63,   106,   106,    58,    71,    72,    73,    74,    75,    76,
     109,    25,    43,    65,    66,    68,    70,    14,    15,   105,
     105,   107,   110,    26,    28,    47,   122,   123,    29,    99,
      24,    98,    94,    57,    37,    94,    93,    55,    64,    40,
     105,   126,    64,    64,   106,   127,   105,   106,   106,   106,
     106,   106,   106,   127,   127,    60,   101,   101,   101,    64,
      54,    64,   105,    56,   100,   126,   127,    41,    64,   110,
     108,   108,    54,   122,    24,    32,    94,    54,   110,   105,
      35,   128,     5,    60,    95,    33,    40,    62,   114,    54,
      23,   110,   105,    35,   100,    34,    58,   127,   110,   128,
     114
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    82,    83,    84,    85,    86,    86,    86,    87,    87,
      87,    88,    89,    89,    89,    89,    90,    91,    92,    93,
      93,    94,    94,    95,    95,    96,    96,    96,    96,    96,
      97,    97,    98,    98,    99,    99,   100,   100,   100,   100,
     100,   100,   100,   100,   100,   100,   101,   101,   102,   102,
     102,   103,   104,   105,   105,   105,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   107,   107,   107,
     107,   108,   108,   108,   108,   108,   108,   109,   109,   109,
     109,   109,   109,   110,   110,   111,   111,   111,   111,   111,
     112,   113,   113,   114,   114,   115,   115,   116,   117,   118,
     119,   120,   121,   122,   122,   122,   123,   123,   123,   124,
     125,   126,   126,   126,   127,   128
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     6,     4,     2,     2,     2,     0,     2,     2,
       0,     2,     2,     2,     2,     0,     3,     3,     3,     5,
       0,     1,     1,     5,     0,     1,     1,     1,     1,     1,
       1,     1,     5,     0,     3,     0,     3,     8,     1,     3,
       2,     1,     1,     1,     1,     1,     3,     3,     1,     2,
       1,     2,     2,     1,     1,     1,     3,     3,     3,     3,
       3,     3,     3,     1,     2,     2,     1,     1,     3,     4,
       2,     4,     4,     2,     1,     3,     3,     1,     1,     1,
       1,     1,     1,     3,     1,     1,     1,     1,     1,     1,
       3,     8,     6,     7,     5,     1,     1,     7,     9,     4,
       6,     5,     7,     3,     1,     0,     2,     2,     2,     4,
       4,     3,     1,     0,     0,     0
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
        case 2:
#line 163 "parser.y" /* yacc.c:1646  */
    {
		printf("\033[1;31m Encontrado algoritmo\n");
		printSimbolos(&simbolos);
		printf("\n\n");
		printCuadruplas(&simbolos, &cuadruplas);
	}
#line 1535 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 172 "parser.y" /* yacc.c:1646  */
    {printf("\033[1;31m Algoritmo declarado\n");}
#line 1541 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 176 "parser.y" /* yacc.c:1646  */
    {printf("\033[1;31m Bloque algoritmo\n");}
#line 1547 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 180 "parser.y" /* yacc.c:1646  */
    {printf("\033[1;31m Definición tipo global\n");}
#line 1553 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 181 "parser.y" /* yacc.c:1646  */
    {printf("\033[1;31m Definición const global\n");}
#line 1559 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 186 "parser.y" /* yacc.c:1646  */
    {printf("\033[1;31m Definición acción\n");}
#line 1565 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 187 "parser.y" /* yacc.c:1646  */
    {printf("\033[1;31m Definición función\n");}
#line 1571 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 192 "parser.y" /* yacc.c:1646  */
    {printf("\033[1;31m Declaración instrucciones\n");}
#line 1577 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 196 "parser.y" /* yacc.c:1646  */
    {printf("\033[1;31m Definición tipo declaraciones\n");}
#line 1583 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 197 "parser.y" /* yacc.c:1646  */
    {printf("\033[1;31m Definición const declaraciones\n");}
#line 1589 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 198 "parser.y" /* yacc.c:1646  */
    {printf("\033[1;31m Definición var declaraciones\n");}
#line 1595 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 203 "parser.y" /* yacc.c:1646  */
    {printf("\033[1;31m Definición tipo\n");}
#line 1601 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 207 "parser.y" /* yacc.c:1646  */
    {printf("\033[1;31m Definición const\n");}
#line 1607 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 211 "parser.y" /* yacc.c:1646  */
    {printf("\033[1;31m Definición var\n");}
#line 1613 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 215 "parser.y" /* yacc.c:1646  */
    {printf("\033[1;31m Definición lista tipos\n");}
#line 1619 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 220 "parser.y" /* yacc.c:1646  */
    {printf("\033[1;31m Literal entero\n");}
#line 1625 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 221 "parser.y" /* yacc.c:1646  */
    {printf("\033[1;31m Definición caracter\n");}
#line 1631 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 225 "parser.y" /* yacc.c:1646  */
    {printf("\033[1;31m Lista campos\n");}
#line 1637 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 230 "parser.y" /* yacc.c:1646  */
    {(yyval.symData).tipo = BOOLEANO; (yyval.symData).valor.booleano = (yyvsp[0].boolValue);}
#line 1643 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 231 "parser.y" /* yacc.c:1646  */
    {(yyval.symData).tipo = CADENA; strcpy((yyval.symData).valor.cadena, (yyvsp[0].stringValue));}
#line 1649 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 232 "parser.y" /* yacc.c:1646  */
    {(yyval.symData).tipo = CHAR; (yyval.symData).valor.caracter = (yyvsp[0].charValue);}
#line 1655 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 233 "parser.y" /* yacc.c:1646  */
    {(yyval.symData).tipo = ENTERO; (yyval.symData).valor.entero = (yyvsp[0].intValue);}
#line 1661 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 234 "parser.y" /* yacc.c:1646  */
    {(yyval.symData).tipo = REAL; (yyval.symData).valor.real = (yyvsp[0].floatValue);}
#line 1667 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 238 "parser.y" /* yacc.c:1646  */
    {(yyval.symData).tipo = ENTERO; (yyval.symData).valor.entero = (yyvsp[0].intValue);}
#line 1673 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 239 "parser.y" /* yacc.c:1646  */
    {(yyval.symData).tipo = REAL; (yyval.symData).valor.real = (yyvsp[0].floatValue);}
#line 1679 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 243 "parser.y" /* yacc.c:1646  */
    {printf("\033[1;31m Lista Definción constantes\n"); int id = insertarNombreSimbolos(&simbolos, (yyvsp[-4].stringValue), CONSTANTE, (yyvsp[-2].symData).tipo); asignarValorConst(&simbolos,id,(yyvsp[-2].symData).valor);}
#line 1685 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 248 "parser.y" /* yacc.c:1646  */
    {printf("\033[1;31m Lista Definción ariables\n");}
#line 1691 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 253 "parser.y" /* yacc.c:1646  */
    {printf("\033[1;31m Definición tipo Lista campos\n");}
#line 1697 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 254 "parser.y" /* yacc.c:1646  */
    {printf("\033[1;31m Definición tipo tabla\n");}
#line 1703 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 255 "parser.y" /* yacc.c:1646  */
    {printf("\033[1;31m Definición tipo identificador\n");}
#line 1709 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 256 "parser.y" /* yacc.c:1646  */
    {printf("\033[1;31m Definición tipo\n");}
#line 1715 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 257 "parser.y" /* yacc.c:1646  */
    {printf("\033[1;31m Definición ref tipo\n");}
#line 1721 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 258 "parser.y" /* yacc.c:1646  */
    {printf("\033[1;31m Tipo entero\n"); (yyval.tipo) = ENTERO;}
#line 1727 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 259 "parser.y" /* yacc.c:1646  */
    {printf("\033[1;31m Tipo booleano\n"); (yyval.tipo) = BOOLEANO;}
#line 1733 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 260 "parser.y" /* yacc.c:1646  */
    {printf("\033[1;31m Tipo real\n"); (yyval.tipo) = REAL;}
#line 1739 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 261 "parser.y" /* yacc.c:1646  */
    {printf("\033[1;31m Tipo caracter\n"); (yyval.tipo) = CHAR;}
#line 1745 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 262 "parser.y" /* yacc.c:1646  */
    {printf("\033[1;31m Tipo cadena\n"); (yyval.tipo) = CADENA;}
#line 1751 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 267 "parser.y" /* yacc.c:1646  */
    {insertarNombreSimbolos(&simbolos, (yyvsp[-2].stringValue), VARIABLE, (yyvsp[0].tipo)); (yyval.tipo) = (yyvsp[0].tipo);}
#line 1757 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 268 "parser.y" /* yacc.c:1646  */
    { insertarNombreSimbolos(&simbolos, (yyvsp[-2].stringValue), VARIABLE, (yyvsp[0].tipo)); (yyval.tipo) = (yyvsp[0].tipo);}
#line 1763 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 272 "parser.y" /* yacc.c:1646  */
    {}
#line 1769 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 273 "parser.y" /* yacc.c:1646  */
    {}
#line 1775 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 274 "parser.y" /* yacc.c:1646  */
    {}
#line 1781 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 278 "parser.y" /* yacc.c:1646  */
    {}
#line 1787 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 282 "parser.y" /* yacc.c:1646  */
    {}
#line 1793 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 286 "parser.y" /* yacc.c:1646  */
    {}
#line 1799 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 287 "parser.y" /* yacc.c:1646  */
    {}
#line 1805 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 288 "parser.y" /* yacc.c:1646  */
    {}
#line 1811 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 292 "parser.y" /* yacc.c:1646  */
    {
		int idTemp;
		if((yyvsp[-2].operadorArit).tipo == ENTERO)
		{
			if((yyvsp[0].operadorArit).tipo == ENTERO)
			{
				idTemp = insertarNombreSimbolos(&simbolos, "", VARIABLE, ENTERO);
				genCuadruplas(&cuadruplas, SUMA_ENTEROS, (yyvsp[-2].operadorArit).id, (yyvsp[0].operadorArit).id, idTemp);

				(yyval.operadorArit).tipo = ENTERO;
			}
			else
			{
				int idTemp1 = insertarNombreSimbolos(&simbolos, "", VARIABLE, REAL);
				genCuadruplas(&cuadruplas, ENTERO_A_REAL, (yyvsp[-2].operadorArit).id, OP_NULL, idTemp1);

				idTemp = insertarNombreSimbolos(&simbolos, "", VARIABLE, REAL);
				genCuadruplas(&cuadruplas, SUMA_REALES, (yyvsp[0].operadorArit).id, idTemp1, idTemp);
				(yyval.operadorArit).tipo = REAL;
			}
		} else {
			if((yyvsp[0].operadorArit).tipo == REAL)
			{
				idTemp = insertarNombreSimbolos(&simbolos, "", VARIABLE, REAL);
				genCuadruplas(&cuadruplas, SUMA_REALES, (yyvsp[-2].operadorArit).id, (yyvsp[0].operadorArit).id, idTemp);
				(yyval.operadorArit).tipo = REAL;
			}
			else
			{
				int idTemp1 = insertarNombreSimbolos(&simbolos, "", VARIABLE, REAL);
				genCuadruplas(&cuadruplas, ENTERO_A_REAL, (yyvsp[0].operadorArit).id, OP_NULL, idTemp1);

				idTemp = insertarNombreSimbolos(&simbolos, "", VARIABLE, REAL);
				genCuadruplas(&cuadruplas, SUMA_REALES, idTemp1, (yyvsp[-2].operadorArit).id, idTemp);
				(yyval.operadorArit).tipo = REAL;
			}
		}
		(yyval.operadorArit).id = idTemp;
	}
#line 1855 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 331 "parser.y" /* yacc.c:1646  */
    {
		int idTemp;
		if((yyvsp[-2].operadorArit).tipo == ENTERO)
		{
			if((yyvsp[0].operadorArit).tipo == ENTERO)
			{
				idTemp = insertarNombreSimbolos(&simbolos, "", VARIABLE, ENTERO);
				genCuadruplas(&cuadruplas, RESTA_ENTEROS, (yyvsp[-2].operadorArit).id, (yyvsp[0].operadorArit).id, idTemp);
				(yyval.operadorArit).id = idTemp;
				(yyval.operadorArit).tipo = ENTERO;
			}
			else
			{
				int idTemp1 = insertarNombreSimbolos(&simbolos, "", VARIABLE, REAL);
				genCuadruplas(&cuadruplas, ENTERO_A_REAL, (yyvsp[-2].operadorArit).id, OP_NULL, idTemp1);

				idTemp = insertarNombreSimbolos(&simbolos, "", VARIABLE, REAL);
				genCuadruplas(&cuadruplas, RESTA_REALES, (yyvsp[0].operadorArit).id, idTemp1, idTemp);
				(yyval.operadorArit).id = idTemp;
				(yyval.operadorArit).tipo = REAL;
			}
		} else {
			if((yyvsp[0].operadorArit).tipo == REAL)
			{
				idTemp = insertarNombreSimbolos(&simbolos, "", VARIABLE, REAL);
				genCuadruplas(&cuadruplas, RESTA_REALES, (yyvsp[-2].operadorArit).id, (yyvsp[0].operadorArit).id, idTemp);
				(yyval.operadorArit).id = idTemp;
				(yyval.operadorArit).tipo = REAL;
			}
			else
			{
				int idTemp1 = insertarNombreSimbolos(&simbolos, "", VARIABLE, REAL);
				genCuadruplas(&cuadruplas, ENTERO_A_REAL, (yyvsp[0].operadorArit).id, OP_NULL, idTemp1);

				idTemp = insertarNombreSimbolos(&simbolos, "", VARIABLE, REAL);
				genCuadruplas(&cuadruplas, RESTA_REALES, idTemp1, (yyvsp[-2].operadorArit).id, idTemp);
				(yyval.operadorArit).id = idTemp;
				(yyval.operadorArit).tipo = REAL;
			}
		}
	}
#line 1901 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 372 "parser.y" /* yacc.c:1646  */
    {
		int idTemp;
		if((yyvsp[-2].operadorArit).tipo == ENTERO)
		{
			if((yyvsp[0].operadorArit).tipo == ENTERO)
			{
				idTemp = insertarNombreSimbolos(&simbolos, "", VARIABLE, ENTERO);
				genCuadruplas(&cuadruplas, MULT_ENTEROS, (yyvsp[-2].operadorArit).id, (yyvsp[0].operadorArit).id, idTemp);
				(yyval.operadorArit).tipo = ENTERO;
			}
			else
			{
				int idTemp1 = insertarNombreSimbolos(&simbolos, "", VARIABLE, REAL);
				genCuadruplas(&cuadruplas, ENTERO_A_REAL, (yyvsp[-2].operadorArit).id, OP_NULL, idTemp1);

				idTemp = insertarNombreSimbolos(&simbolos, "", VARIABLE, REAL);
				genCuadruplas(&cuadruplas, MULT_REALES, (yyvsp[0].operadorArit).id, idTemp1, idTemp);
				(yyval.operadorArit).tipo = REAL;
			}
		} else {
			if((yyvsp[0].operadorArit).tipo == REAL)
			{
				idTemp = insertarNombreSimbolos(&simbolos, "", VARIABLE, REAL);
				genCuadruplas(&cuadruplas, MULT_REALES, (yyvsp[-2].operadorArit).id, (yyvsp[0].operadorArit).id, idTemp);
				(yyval.operadorArit).tipo = REAL;
			}
			else
			{
				int idTemp1 = insertarNombreSimbolos(&simbolos, "", VARIABLE, REAL);
				genCuadruplas(&cuadruplas, ENTERO_A_REAL, (yyvsp[0].operadorArit).id, OP_NULL, idTemp1);

				idTemp = insertarNombreSimbolos(&simbolos, "", VARIABLE, REAL);
				genCuadruplas(&cuadruplas, MULT_REALES, idTemp1, (yyvsp[-2].operadorArit).id, idTemp);
				(yyval.operadorArit).tipo = REAL;
			}
		}
		(yyval.operadorArit).id = idTemp;
	}
#line 1944 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 410 "parser.y" /* yacc.c:1646  */
    {
		int idTemp = insertarNombreSimbolos(&simbolos, "", VARIABLE, REAL);
		int idTemp1 = (yyvsp[-2].operadorArit).id;
		int idTemp3 = (yyvsp[0].operadorArit).id;
		if((yyvsp[-2].operadorArit).tipo == ENTERO)
		{
			int idTemp1 = insertarNombreSimbolos(&simbolos, "", VARIABLE, REAL);
			genCuadruplas(&cuadruplas, ENTERO_A_REAL, (yyvsp[-2].operadorArit).id, OP_NULL, idTemp1);
		} 
		if ((yyvsp[0].operadorArit).tipo == ENTERO){
			int idTemp3 = insertarNombreSimbolos(&simbolos, "", VARIABLE, REAL);
			genCuadruplas(&cuadruplas, ENTERO_A_REAL, (yyvsp[0].operadorArit).id, OP_NULL, idTemp3);
		}
		genCuadruplas(&cuadruplas, DIV_REAL, idTemp1, idTemp3, idTemp);
		(yyval.operadorArit).id = idTemp;
		(yyval.operadorArit).tipo = REAL;
	}
#line 1966 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 427 "parser.y" /* yacc.c:1646  */
    {
		int idTemp;
		if(((yyvsp[-2].operadorArit).tipo == ENTERO) && ((yyvsp[0].operadorArit).tipo == ENTERO))
		{
			idTemp = insertarNombreSimbolos(&simbolos, "", VARIABLE, ENTERO);
			genCuadruplas(&cuadruplas, DIV, (yyvsp[-2].operadorArit).id, (yyvsp[0].operadorArit).id, idTemp);
		}
		else
		{
			if((yyvsp[-2].operadorArit).tipo != ENTERO)
			{
				char* error = malloc(sizeof("\033[1;31m %s debe ser un ENTERO") + sizeof(getNombre(&simbolos, (yyvsp[-2].operadorArit).id)));
				sprintf(error, "\033[1;31m %s debe ser un ENTERO", getNombre(&simbolos, (yyvsp[-2].operadorArit).id));
				yyerror(error);
			}
			else{
				char* error = malloc(sizeof("\033[1;31m %s debe ser un ENTERO") + sizeof(getNombre(&simbolos, (yyvsp[0].operadorArit).id)));
				sprintf(error, "\033[1;31m %s debe ser un ENTERO", getNombre(&simbolos, (yyvsp[0].operadorArit).id));
				yyerror(error);
			}
		}
		(yyval.operadorArit).id = idTemp;
		(yyval.operadorArit).tipo = REAL;
	}
#line 1995 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 451 "parser.y" /* yacc.c:1646  */
    {
		int idTemp;
		if(((yyvsp[-2].operadorArit).tipo == ENTERO) && ((yyvsp[0].operadorArit).tipo == ENTERO))
		{
			idTemp = insertarNombreSimbolos(&simbolos, "", VARIABLE, ENTERO);
			genCuadruplas(&cuadruplas, MOD, (yyvsp[-2].operadorArit).id, (yyvsp[0].operadorArit).id, idTemp);
		}
		else
		{
			if((yyvsp[-2].operadorArit).tipo != ENTERO)
			{
				char* error = malloc(sizeof("\033[1;31m %s debe ser un ENTERO") + sizeof(getNombre(&simbolos, (yyvsp[-2].operadorArit).id)));
				sprintf(error, "\033[1;31m %s debe ser un ENTERO", getNombre(&simbolos, (yyvsp[-2].operadorArit).id));
				yyerror(error);
			}
			else
			{
				char* error = malloc(sizeof("\033[1;31m %s debe ser un ENTERO") + sizeof(getNombre(&simbolos, (yyvsp[0].operadorArit).id)));
				sprintf(error, "\033[1;31m %s debe ser un ENTERO", getNombre(&simbolos, (yyvsp[0].operadorArit).id));
				yyerror(error);
			}
		}
		(yyval.operadorArit).id = idTemp;
		(yyval.operadorArit).tipo = REAL;
	}
#line 2025 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 476 "parser.y" /* yacc.c:1646  */
    {(yyval.operadorArit) = (yyvsp[-1].operadorArit);}
#line 2031 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 477 "parser.y" /* yacc.c:1646  */
    {}
#line 2037 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 478 "parser.y" /* yacc.c:1646  */
    {}
#line 2043 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 479 "parser.y" /* yacc.c:1646  */
    {}
#line 2049 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 480 "parser.y" /* yacc.c:1646  */
    { (yyval.operadorArit).tipo = (yyvsp[0].symData).tipo; (yyval.operadorArit).id = insertarNombreSimbolos(&simbolos, "", CONSTANTE, (yyvsp[0].symData).tipo); asignarValorConst(&simbolos, (yyval.operadorArit).id, (yyvsp[0].symData).valor);}
#line 2055 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 484 "parser.y" /* yacc.c:1646  */
    {
		int id; 
		nodo nodoTabla = *getNodoByNombre(&simbolos,(yyvsp[0].stringValue));
		if(nodoTabla.id == 0) 
		{ 
			char* error = malloc(sizeof("\033[1;31m Variable %s no definida") + sizeof((yyvsp[0].stringValue)));
			sprintf(error, "\033[1;31m Variable %s no definida", (yyvsp[0].stringValue));
			yyerror(error);
		} 
		else 
		{  
			(yyval.operadorArit).id = nodoTabla.id;
			(yyval.operadorArit).tipo = nodoTabla.symbol.data.tipo; 
			(yyval.operadorArit).tipoSim = nodoTabla.symbol.tipo;
		} 
	}
#line 2076 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 500 "parser.y" /* yacc.c:1646  */
    {}
#line 2082 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 501 "parser.y" /* yacc.c:1646  */
    {}
#line 2088 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 502 "parser.y" /* yacc.c:1646  */
    {}
#line 2094 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 506 "parser.y" /* yacc.c:1646  */
    {
		backpatch(&cuadruplas, (yyval.operadorArit).true, (yyvsp[-1].instr).next); 
		(yyval.operadorArit).false = merge((yyvsp[-3].operadorArit).false, (yyvsp[0].operadorArit).false); 
		(yyval.operadorArit).true = (yyvsp[0].operadorArit).true;
	}
#line 2104 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 511 "parser.y" /* yacc.c:1646  */
    {
		backpatch(&cuadruplas, (yyval.operadorArit).false, (yyvsp[-1].instr).next); 
		(yyval.operadorArit).true = merge((yyvsp[-3].operadorArit).true, (yyvsp[0].operadorArit).true); 
		(yyval.operadorArit).false = (yyvsp[0].operadorArit).false;
	}
#line 2114 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 516 "parser.y" /* yacc.c:1646  */
    {
		(yyval.operadorArit).true = (yyvsp[0].operadorArit).false; 
		(yyval.operadorArit).false = (yyval.operadorArit).true;
	}
#line 2123 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 520 "parser.y" /* yacc.c:1646  */
    {
		(yyval.operadorArit).true = makeTabla(nextQuad(&cuadruplas));
		(yyval.operadorArit).false = makeTabla(nextQuad(&cuadruplas)+1);
		genCuadruplas(&cuadruplas, GOTO, OP_NULL, OP_NULL, -1);
		genCuadruplas(&cuadruplas, GOTO, OP_NULL, OP_NULL, -1);
		if(!(yyvsp[0].boolValue)) { 
			tablaCuadruplas* aux = (yyval.operadorArit).false; 
			(yyval.operadorArit).false = (yyval.operadorArit).true; 
			(yyval.operadorArit).true = aux; 
		}
	}
#line 2139 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 531 "parser.y" /* yacc.c:1646  */
    {
		(yyval.operadorArit).true = makeTabla(nextQuad(&cuadruplas)); 
		(yyval.operadorArit).false = makeTabla(nextQuad(&cuadruplas)+1); 
		genCuadruplas(&cuadruplas, (yyvsp[-1].intValue), (yyvsp[-2].operadorArit).id, (yyvsp[0].operadorArit).id, -1);
		genCuadruplas(&cuadruplas, GOTO, OP_NULL, OP_NULL, -1);
	}
#line 2150 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 537 "parser.y" /* yacc.c:1646  */
    {(yyval.operadorArit) = (yyvsp[-1].operadorArit);}
#line 2156 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 541 "parser.y" /* yacc.c:1646  */
    { (yyval.intValue)=COMPARACION_MAYOR;}
#line 2162 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 542 "parser.y" /* yacc.c:1646  */
    {(yyval.intValue)=COMPARACION_MENOR;}
#line 2168 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 543 "parser.y" /* yacc.c:1646  */
    {(yyval.intValue)=COMPARACION_MAYORIGUAL;}
#line 2174 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 544 "parser.y" /* yacc.c:1646  */
    {(yyval.intValue)=COMPARACION_MAYORIGUAL;}
#line 2180 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 545 "parser.y" /* yacc.c:1646  */
    {(yyval.intValue)=IGUALACION;}
#line 2186 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 546 "parser.y" /* yacc.c:1646  */
    {(yyval.intValue)=DISTINTO;}
#line 2192 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 550 "parser.y" /* yacc.c:1646  */
    {

	}
#line 2200 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 553 "parser.y" /* yacc.c:1646  */
    {}
#line 2206 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 557 "parser.y" /* yacc.c:1646  */
    {}
#line 2212 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 558 "parser.y" /* yacc.c:1646  */
    {}
#line 2218 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 559 "parser.y" /* yacc.c:1646  */
    {}
#line 2224 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 560 "parser.y" /* yacc.c:1646  */
    {}
#line 2230 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 561 "parser.y" /* yacc.c:1646  */
    {}
#line 2236 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 565 "parser.y" /* yacc.c:1646  */
    {
		(yyval.instr).current = crearTabla();
		if((yyvsp[-2].operadorArit).tipoSim != VARIABLE)
		{
			char* error = malloc(sizeof("\033[1;31m %s debe ser una variable") + sizeof(getNombre(&simbolos, (yyvsp[-2].operadorArit).id)));
			sprintf(error, "\033[1;31m %s debe ser una variable", getNombre(&simbolos, (yyvsp[-2].operadorArit).id));
			yyerror(error);
		}else{
			if((yyvsp[-2].operadorArit).tipo == (yyvsp[0].operadorArit).tipo)
			{
				if((yyvsp[0].operadorArit).tipo == BOOLEANO)
				{
					backpatch(&cuadruplas, (yyvsp[0].operadorArit).true, nextQuad(&cuadruplas));
					backpatch(&cuadruplas, (yyvsp[0].operadorArit).false, nextQuad(&cuadruplas)+1);
					genCuadruplas(&cuadruplas, VERDADERO, (yyvsp[-2].operadorArit).id, OP_NULL, OP_NULL);
					genCuadruplas(&cuadruplas, FALSO, (yyvsp[-2].operadorArit).id, OP_NULL, OP_NULL);
				}
				else
				{
					genCuadruplas(&cuadruplas, ASIGNACION, (yyvsp[0].operadorArit).id, OP_NULL, (yyvsp[-2].operadorArit).id);
				}
			}
			else
			{
				if((((yyvsp[-2].operadorArit).tipo == ENTERO) && ((yyvsp[0].operadorArit).tipo == REAL)) || (((yyvsp[-2].operadorArit).tipo == REAL) && ((yyvsp[0].operadorArit).tipo == ENTERO)))
				{
					if((yyvsp[-2].operadorArit).tipo == ENTERO)
					{
						genCuadruplas(&cuadruplas,REAL_A_ENTERO, (yyvsp[0].operadorArit).id, OP_NULL, (yyvsp[-2].operadorArit).id);
					}
					else
					{
						genCuadruplas(&cuadruplas, ENTERO_A_REAL, (yyvsp[0].operadorArit).id, OP_NULL, (yyvsp[-2].operadorArit).id);
					}
				}
				else 
				{
					char* error = malloc(sizeof("\033[1;31m No de puede convertir implicitamente a %s de tipo %d a tipo %d") + sizeof(getNombre(&simbolos, (yyvsp[0].operadorArit).id) + 2));
					sprintf(error, "\033[1;31m No de puede convertir implicitamente a %s de tipo %d a tipo %d", getNombre(&simbolos, (yyvsp[0].operadorArit).id), (yyvsp[0].operadorArit).tipo, (yyvsp[-2].operadorArit).tipo);
					yyerror(error);
				}
			}
		}
	}
#line 2285 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 612 "parser.y" /* yacc.c:1646  */
    {
		backpatch(&cuadruplas, (yyvsp[-6].operadorArit).true, (yyvsp[-4].instr).next);
		backpatch(&cuadruplas, (yyvsp[-6].operadorArit).false, (yyvsp[-2].instr).next);
		(yyval.instr).current = merge((yyvsp[-3].instr).current, merge((yyvsp[-2].instr).current, (yyvsp[-1].instr).current));
	}
#line 2295 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 617 "parser.y" /* yacc.c:1646  */
    {
		backpatch(&cuadruplas, (yyvsp[-4].operadorArit).true, (yyvsp[-2].instr).next);
		if(!tablaVacia((yyvsp[-1].instr).current))
			(yyval.instr).current = merge((yyvsp[-4].operadorArit).false, (yyvsp[-1].instr).current);
		else
		{
			(yyval.instr).current = merge((yyvsp[-4].operadorArit).false, makeTabla(nextQuad(&cuadruplas)));
			genCuadruplas(&cuadruplas, GOTO, OP_NULL, OP_NULL, -1);
		} 
	}
#line 2310 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 630 "parser.y" /* yacc.c:1646  */
    {
		backpatch(&cuadruplas, (yyvsp[-5].operadorArit).true, (yyvsp[-3].instr).next);
		backpatch(&cuadruplas, (yyvsp[-5].operadorArit).false, (yyvsp[-1].instr).next);
		(yyval.instr).current = merge((yyvsp[-2].instr).current, merge((yyvsp[-1].instr).current, (yyvsp[0].instr).current));
	}
#line 2320 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 635 "parser.y" /* yacc.c:1646  */
    {
		backpatch(&cuadruplas, (yyvsp[-3].operadorArit).true, (yyvsp[-1].instr).next);
		if(!tablaVacia((yyvsp[0].instr).current))
			(yyval.instr).current = merge((yyvsp[-3].operadorArit).false, (yyvsp[0].instr).current);
		else 
		{
			(yyval.instr).current = merge((yyvsp[-3].operadorArit).false, makeTabla(nextQuad(&cuadruplas)));
			genCuadruplas(&cuadruplas, GOTO, OP_NULL, OP_NULL, -1);
		}
	}
#line 2335 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 648 "parser.y" /* yacc.c:1646  */
    {}
#line 2341 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 649 "parser.y" /* yacc.c:1646  */
    {}
#line 2347 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 653 "parser.y" /* yacc.c:1646  */
    {
		backpatch(&cuadruplas, (yyvsp[-4].operadorArit).true, (yyvsp[-2].instr).next);
		if (!tablaVacia((yyvsp[-1].instr).current)){
			backpatch(&cuadruplas, (yyvsp[-1].instr).current, (yyvsp[-5].instr).next);
		}else{
			genCuadruplas(&cuadruplas, GOTO, OP_NULL, OP_NULL, (yyvsp[-5].instr).next);
		}
		(yyval.instr).current = (yyvsp[-4].operadorArit).false;
	}
#line 2361 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 665 "parser.y" /* yacc.c:1646  */
    {
	}
#line 2368 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 686 "parser.y" /* yacc.c:1646  */
    {}
#line 2374 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 687 "parser.y" /* yacc.c:1646  */
    {}
#line 2380 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 692 "parser.y" /* yacc.c:1646  */
    {}
#line 2386 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 693 "parser.y" /* yacc.c:1646  */
    {}
#line 2392 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 694 "parser.y" /* yacc.c:1646  */
    {}
#line 2398 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 706 "parser.y" /* yacc.c:1646  */
    {}
#line 2404 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 707 "parser.y" /* yacc.c:1646  */
    {}
#line 2410 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 712 "parser.y" /* yacc.c:1646  */
    {(yyval.instr).next =nextQuad(&cuadruplas);}
#line 2416 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 714 "parser.y" /* yacc.c:1646  */
    {(yyval.instr).current = makeTabla(nextQuad(&cuadruplas)); (yyval.instr).next = nextQuad(&cuadruplas);}
#line 2422 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 2426 "parser.tab.c" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
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
  return yyresult;
}
#line 715 "parser.y" /* yacc.c:1906  */


void yyerror(char const *error){
  printf("\033[1;31m Error: %s\n", error);
  exit(-1);
}

int main(int argc, char *argv[]) {
	initCuadruplas(&cuadruplas);
	initSimbolos(&simbolos);

  if ( argc > 0 ) {
    FILE *myfile = fopen(argv[1], "r");
    yyin=myfile;
  }
  else {
      yyin = stdin;
  }

  do{
    yyparse();
  } while(!feof(yyin));
}
