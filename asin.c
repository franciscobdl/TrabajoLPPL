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
#line 3 "src/asin.y"

#include <stdio.h>
#include <string.h>
#include "header.h"
#include "libtds.h"


#line 79 "asin.c"

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

#include "asin.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_INT_ = 3,                       /* INT_  */
  YYSYMBOL_BOOL_ = 4,                      /* BOOL_  */
  YYSYMBOL_RETURN_ = 5,                    /* RETURN_  */
  YYSYMBOL_READ_ = 6,                      /* READ_  */
  YYSYMBOL_PRINT_ = 7,                     /* PRINT_  */
  YYSYMBOL_IF_ = 8,                        /* IF_  */
  YYSYMBOL_ELSE_ = 9,                      /* ELSE_  */
  YYSYMBOL_WHILE_ = 10,                    /* WHILE_  */
  YYSYMBOL_CORA_ = 11,                     /* CORA_  */
  YYSYMBOL_CORC_ = 12,                     /* CORC_  */
  YYSYMBOL_LLAVEA_ = 13,                   /* LLAVEA_  */
  YYSYMBOL_LLAVEC_ = 14,                   /* LLAVEC_  */
  YYSYMBOL_PARA_ = 15,                     /* PARA_  */
  YYSYMBOL_PARC_ = 16,                     /* PARC_  */
  YYSYMBOL_PYC_ = 17,                      /* PYC_  */
  YYSYMBOL_COMA_ = 18,                     /* COMA_  */
  YYSYMBOL_PUNTO_ = 19,                    /* PUNTO_  */
  YYSYMBOL_AND_ = 20,                      /* AND_  */
  YYSYMBOL_OR_ = 21,                       /* OR_  */
  YYSYMBOL_IG_ = 22,                       /* IG_  */
  YYSYMBOL_DESIG_ = 23,                    /* DESIG_  */
  YYSYMBOL_MAY_ = 24,                      /* MAY_  */
  YYSYMBOL_MEN_ = 25,                      /* MEN_  */
  YYSYMBOL_MAIG_ = 26,                     /* MAIG_  */
  YYSYMBOL_MEIG_ = 27,                     /* MEIG_  */
  YYSYMBOL_MAS_ = 28,                      /* MAS_  */
  YYSYMBOL_MENOS_ = 29,                    /* MENOS_  */
  YYSYMBOL_POR_ = 30,                      /* POR_  */
  YYSYMBOL_ENTRE_ = 31,                    /* ENTRE_  */
  YYSYMBOL_NOT_ = 32,                      /* NOT_  */
  YYSYMBOL_INC_ = 33,                      /* INC_  */
  YYSYMBOL_DEC_ = 34,                      /* DEC_  */
  YYSYMBOL_ASIG_ = 35,                     /* ASIG_  */
  YYSYMBOL_TRUE_ = 36,                     /* TRUE_  */
  YYSYMBOL_FALSE_ = 37,                    /* FALSE_  */
  YYSYMBOL_ID_ = 38,                       /* ID_  */
  YYSYMBOL_STRUCT_ = 39,                   /* STRUCT_  */
  YYSYMBOL_CTE_ = 40,                      /* CTE_  */
  YYSYMBOL_YYACCEPT = 41,                  /* $accept  */
  YYSYMBOL_programa = 42,                  /* programa  */
  YYSYMBOL_43_1 = 43,                      /* $@1  */
  YYSYMBOL_listDecla = 44,                 /* listDecla  */
  YYSYMBOL_decla = 45,                     /* decla  */
  YYSYMBOL_declaVar = 46,                  /* declaVar  */
  YYSYMBOL_tipoSimp = 47,                  /* tipoSimp  */
  YYSYMBOL_listCamp = 48,                  /* listCamp  */
  YYSYMBOL_declaFunc = 49,                 /* declaFunc  */
  YYSYMBOL_50_2 = 50,                      /* $@2  */
  YYSYMBOL_51_3 = 51,                      /* $@3  */
  YYSYMBOL_paramForm = 52,                 /* paramForm  */
  YYSYMBOL_listParamForm = 53,             /* listParamForm  */
  YYSYMBOL_declaVarLocal = 54,             /* declaVarLocal  */
  YYSYMBOL_listInst = 55,                  /* listInst  */
  YYSYMBOL_inst = 56,                      /* inst  */
  YYSYMBOL_instExpre = 57,                 /* instExpre  */
  YYSYMBOL_instEntSal = 58,                /* instEntSal  */
  YYSYMBOL_instSelec = 59,                 /* instSelec  */
  YYSYMBOL_instIter = 60,                  /* instIter  */
  YYSYMBOL_61_4 = 61,                      /* $@4  */
  YYSYMBOL_expre = 62,                     /* expre  */
  YYSYMBOL_expreLogic = 63,                /* expreLogic  */
  YYSYMBOL_expreIgual = 64,                /* expreIgual  */
  YYSYMBOL_expreRel = 65,                  /* expreRel  */
  YYSYMBOL_expreAd = 66,                   /* expreAd  */
  YYSYMBOL_expreMul = 67,                  /* expreMul  */
  YYSYMBOL_expreUna = 68,                  /* expreUna  */
  YYSYMBOL_expreSufi = 69,                 /* expreSufi  */
  YYSYMBOL_const = 70,                     /* const  */
  YYSYMBOL_paramAct = 71,                  /* paramAct  */
  YYSYMBOL_listParamAct = 72,              /* listParamAct  */
  YYSYMBOL_opLogic = 73,                   /* opLogic  */
  YYSYMBOL_opIgual = 74,                   /* opIgual  */
  YYSYMBOL_opRel = 75,                     /* opRel  */
  YYSYMBOL_opAd = 76,                      /* opAd  */
  YYSYMBOL_opMul = 77,                     /* opMul  */
  YYSYMBOL_opUna = 78,                     /* opUna  */
  YYSYMBOL_opIncre = 79                    /* opIncre  */
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
typedef yytype_uint8 yy_state_t;

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   188

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  41
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  39
/* YYNRULES -- Number of rules.  */
#define YYNRULES  85
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  155

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   295


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
      35,    36,    37,    38,    39,    40
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    32,    32,    32,    44,    45,    47,    48,    50,    57,
      71,    76,    77,    79,    83,    86,    93,    85,   109,   113,
     121,   129,   135,   136,   138,   139,   141,   142,   143,   144,
     145,   147,   148,   150,   157,   164,   172,   170,   180,   181,
     205,   226,   228,   229,   241,   242,   257,   258,   270,   271,
     283,   284,   296,   297,   319,   327,   328,   329,   339,   346,
     347,   365,   367,   368,   369,   371,   372,   374,   375,   377,
     378,   380,   381,   383,   384,   385,   386,   388,   389,   391,
     392,   394,   395,   396,   398,   399
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
  "\"end of file\"", "error", "\"invalid token\"", "INT_", "BOOL_",
  "RETURN_", "READ_", "PRINT_", "IF_", "ELSE_", "WHILE_", "CORA_", "CORC_",
  "LLAVEA_", "LLAVEC_", "PARA_", "PARC_", "PYC_", "COMA_", "PUNTO_",
  "AND_", "OR_", "IG_", "DESIG_", "MAY_", "MEN_", "MAIG_", "MEIG_", "MAS_",
  "MENOS_", "POR_", "ENTRE_", "NOT_", "INC_", "DEC_", "ASIG_", "TRUE_",
  "FALSE_", "ID_", "STRUCT_", "CTE_", "$accept", "programa", "$@1",
  "listDecla", "decla", "declaVar", "tipoSimp", "listCamp", "declaFunc",
  "$@2", "$@3", "paramForm", "listParamForm", "declaVarLocal", "listInst",
  "inst", "instExpre", "instEntSal", "instSelec", "instIter", "$@4",
  "expre", "expreLogic", "expreIgual", "expreRel", "expreAd", "expreMul",
  "expreUna", "expreSufi", "const", "paramAct", "listParamAct", "opLogic",
  "opIgual", "opRel", "opAd", "opMul", "opUna", "opIncre", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-132)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -132,    12,    -1,  -132,  -132,  -132,     1,    -1,  -132,  -132,
     -22,  -132,    15,  -132,    -4,    -5,     7,     2,  -132,    29,
      37,    18,    20,    49,    15,  -132,    43,    45,    47,    27,
      50,  -132,  -132,  -132,  -132,    52,  -132,    15,    58,  -132,
    -132,    -1,  -132,    41,    40,    -4,   133,    60,    70,    71,
      72,  -132,   133,  -132,  -132,  -132,  -132,  -132,  -132,  -132,
    -132,    48,  -132,  -132,  -132,  -132,  -132,  -132,    78,     6,
       9,    -2,     0,    21,  -132,  -132,  -132,   148,    61,    85,
      65,   133,   133,   133,    83,    88,   133,   133,    67,   133,
    -132,  -132,  -132,  -132,   148,  -132,  -132,   148,  -132,  -132,
    -132,  -132,   148,  -132,  -132,   148,  -132,  -132,   148,   103,
    -132,  -132,    74,    90,    91,    92,    93,  -132,  -132,    98,
      95,   111,  -132,    94,  -132,     9,    -2,     0,    21,  -132,
     133,    96,  -132,   113,   115,   118,  -132,   104,   133,  -132,
     133,   126,  -132,  -132,  -132,   131,   118,   133,  -132,  -132,
    -132,   118,  -132,  -132,  -132
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,     0,     1,    11,    12,     0,     3,     4,     6,
       0,     7,     0,     5,    15,     0,     0,     0,     8,     0,
       0,     0,     0,     0,    18,    13,     0,     0,     0,     0,
       0,    19,    10,    14,     9,    20,    16,     0,     0,    21,
      22,    24,    23,     0,     0,     0,     0,     0,     0,     0,
       0,    24,     0,    32,    81,    82,    83,    84,    85,    63,
      64,    57,    62,    25,    27,    28,    29,    30,     0,    38,
      42,    44,    46,    48,    50,    52,    55,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    65,     0,     0,
      58,    31,    69,    70,     0,    71,    72,     0,    74,    73,
      75,    76,     0,    77,    78,     0,    79,    80,     0,    57,
      53,    54,     0,     0,     0,     0,     0,    26,    56,     0,
      67,     0,    66,    59,    39,    43,    45,    47,    49,    51,
       0,     0,    17,     0,     0,     0,    36,    60,     0,    61,
       0,     0,    59,    33,    34,     0,     0,     0,    68,    41,
      60,     0,    37,    40,    35
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -132,  -132,  -132,  -132,   134,   101,    -7,  -132,  -132,  -132,
    -132,  -132,   106,  -132,   102,  -131,  -132,  -132,  -132,  -132,
    -132,   -46,  -132,    51,    62,    42,    44,   -69,  -132,  -132,
    -132,    19,  -132,  -132,  -132,  -132,  -132,  -132,   -60
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     2,     7,     8,     9,    10,    16,    11,    19,
      38,    30,    31,    41,    44,    63,    64,    65,    66,    67,
     146,    68,    69,    70,    71,    72,    73,    74,    75,    76,
     121,   122,    94,    97,   102,   105,   108,    77,    78
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      79,    90,     4,     5,   145,    15,    85,    17,   110,    22,
       4,     5,     3,    18,    12,   152,    14,    29,     4,     5,
     154,    21,    98,    99,   100,   101,    92,    93,   103,   104,
      29,    95,    96,    20,    43,   114,   115,   116,     6,   129,
     119,   120,    23,   124,    24,    46,    47,    48,    49,    90,
      50,   106,   107,    51,    25,    52,    26,    53,    27,    86,
      32,    28,    33,    87,    34,    35,    36,    88,    54,    55,
      37,    40,    56,    57,    58,    80,    59,    60,    61,    45,
      62,    57,    58,    89,   141,    81,    82,    83,   132,    47,
      48,    49,   120,    50,   149,    91,    51,   117,    52,   111,
      53,   153,   112,   113,   118,   123,   133,   134,   135,   136,
     137,    54,    55,   138,   130,    56,    57,    58,    87,    59,
      60,    61,   131,    62,    47,    48,    49,   139,    50,   140,
     143,    51,   144,    52,   142,    53,    57,    58,   150,   147,
     151,    13,    42,    39,   127,   125,    54,    55,    52,   128,
      56,    57,    58,    84,    59,    60,    61,   148,    62,   126,
       0,    54,    55,    52,     0,    56,    57,    58,     0,    59,
      60,    61,     0,    62,     0,     0,    54,    55,     0,     0,
      56,    57,    58,     0,    59,    60,   109,     0,    62
};

static const yytype_int16 yycheck[] =
{
      46,    61,     3,     4,   135,    12,    52,    11,    77,    16,
       3,     4,     0,    17,    13,   146,    38,    24,     3,     4,
     151,    14,    24,    25,    26,    27,    20,    21,    28,    29,
      37,    22,    23,    38,    41,    81,    82,    83,    39,   108,
      86,    87,    40,    89,    15,     5,     6,     7,     8,   109,
      10,    30,    31,    13,    17,    15,    38,    17,    38,    11,
      17,    12,    17,    15,    17,    38,    16,    19,    28,    29,
      18,    13,    32,    33,    34,    15,    36,    37,    38,    38,
      40,    33,    34,    35,   130,    15,    15,    15,    14,     6,
       7,     8,   138,    10,   140,    17,    13,    14,    15,    38,
      17,   147,    17,    38,    16,    38,    16,    16,    16,    16,
      12,    28,    29,    18,    11,    32,    33,    34,    15,    36,
      37,    38,    19,    40,     6,     7,     8,    16,    10,    35,
      17,    13,    17,    15,    38,    17,    33,    34,    12,    35,
       9,     7,    41,    37,   102,    94,    28,    29,    15,   105,
      32,    33,    34,    51,    36,    37,    38,   138,    40,    97,
      -1,    28,    29,    15,    -1,    32,    33,    34,    -1,    36,
      37,    38,    -1,    40,    -1,    -1,    28,    29,    -1,    -1,
      32,    33,    34,    -1,    36,    37,    38,    -1,    40
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    42,    43,     0,     3,     4,    39,    44,    45,    46,
      47,    49,    13,    45,    38,    47,    48,    11,    17,    50,
      38,    14,    47,    40,    15,    17,    38,    38,    12,    47,
      52,    53,    17,    17,    17,    38,    16,    18,    51,    53,
      13,    54,    46,    47,    55,    38,     5,     6,     7,     8,
      10,    13,    15,    17,    28,    29,    32,    33,    34,    36,
      37,    38,    40,    56,    57,    58,    59,    60,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    78,    79,    62,
      15,    15,    15,    15,    55,    62,    11,    15,    19,    35,
      79,    17,    20,    21,    73,    22,    23,    74,    24,    25,
      26,    27,    75,    28,    29,    76,    30,    31,    77,    38,
      68,    38,    17,    38,    62,    62,    62,    14,    16,    62,
      62,    71,    72,    38,    62,    64,    65,    66,    67,    68,
      11,    19,    14,    16,    16,    16,    16,    12,    18,    16,
      35,    62,    38,    17,    17,    56,    61,    35,    72,    62,
      12,     9,    56,    62,    56
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    41,    43,    42,    44,    44,    45,    45,    46,    46,
      46,    47,    47,    48,    48,    50,    51,    49,    52,    52,
      53,    53,    54,    54,    55,    55,    56,    56,    56,    56,
      56,    57,    57,    58,    58,    59,    61,    60,    62,    62,
      62,    62,    63,    63,    64,    64,    65,    65,    66,    66,
      67,    67,    68,    68,    68,    69,    69,    69,    69,    69,
      69,    69,    70,    70,    70,    71,    71,    72,    72,    73,
      73,    74,    74,    75,    75,    75,    75,    76,    76,    77,
      77,    78,    78,    78,    79,    79
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     1,     2,     1,     1,     3,     6,
       6,     1,     1,     3,     4,     0,     0,    14,     0,     1,
       2,     4,     0,     2,     0,     2,     3,     1,     1,     1,
       1,     2,     1,     5,     5,     7,     0,     6,     1,     3,
       6,     5,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     2,     2,     1,     3,     1,     2,     3,
       4,     4,     1,     1,     1,     0,     1,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1
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
  case 2: /* $@1: %empty  */
#line 32 "src/asin.y"
              {dvar = 0; niv = 0; cargaContexto(niv); }
#line 1256 "asin.c"
    break;

  case 3: /* programa: $@1 listDecla  */
#line 34 "src/asin.y"
            { 
            SIMB sim = obtTdS("main\0");
            if (sim.t == T_ERROR){
                  yyerror("El programa no tiene 'main'");
            };
            
            if(verTdS) mostrarTdS();
            
            }
#line 1270 "asin.c"
    break;

  case 4: /* listDecla: decla  */
#line 44 "src/asin.y"
                    { (yyval.cent) = (yyvsp[0].cent);}
#line 1276 "asin.c"
    break;

  case 5: /* listDecla: listDecla decla  */
#line 45 "src/asin.y"
                              { (yyval.cent) = (yyvsp[-1].cent) + (yyvsp[0].cent);}
#line 1282 "asin.c"
    break;

  case 6: /* decla: declaVar  */
#line 47 "src/asin.y"
                       { (yyval.cent) = 0;}
#line 1288 "asin.c"
    break;

  case 7: /* decla: declaFunc  */
#line 48 "src/asin.y"
                        { (yyval.cent) = (yyvsp[0].cent);}
#line 1294 "asin.c"
    break;

  case 8: /* declaVar: tipoSimp ID_ PYC_  */
#line 52 "src/asin.y"
                  { if ( ! insTdS((yyvsp[-1].ident), VARIABLE, (yyvsp[-2].cent), niv, dvar, 0) )
                        yyerror ("Identificador repetido");
                        else dvar += TALLA_TIPO_SIMPLE;
                        }
#line 1303 "asin.c"
    break;

  case 9: /* declaVar: tipoSimp ID_ CORA_ CTE_ CORC_ PYC_  */
#line 59 "src/asin.y"
            { int numelem = (yyvsp[-2].cent);
                  if ((yyvsp[-2].cent) <= 0) 
                  { 
                  yyerror("Talla inapropiada del array");
                  numelem = 0;
                  }
                  int refe = insTdA((yyvsp[-5].cent), numelem);
                  if ( ! insTdS((yyvsp[-4].ident), VARIABLE, T_ARRAY, niv, dvar, refe) )
                  yyerror ("Identificador repetido");
                  else dvar += numelem * TALLA_TIPO_SIMPLE;
                  }
#line 1319 "asin.c"
    break;

  case 11: /* tipoSimp: INT_  */
#line 76 "src/asin.y"
                     { (yyval.cent) = T_ENTERO; }
#line 1325 "asin.c"
    break;

  case 12: /* tipoSimp: BOOL_  */
#line 77 "src/asin.y"
                    { (yyval.cent) = T_LOGICO; }
#line 1331 "asin.c"
    break;

  case 13: /* listCamp: tipoSimp ID_ PYC_  */
#line 80 "src/asin.y"
                  { if ( ! insTdS((yyvsp[-1].ident), NULO, (yyvsp[-2].cent), niv, dvar, 0) )
                        yyerror ("Identificador repetido");
                        else dvar += TALLA_TIPO_SIMPLE;}
#line 1339 "asin.c"
    break;

  case 15: /* $@2: %empty  */
#line 86 "src/asin.y"
                { 
                    niv++; 
                    cargaContexto(niv); 
                    dvar = 0;

                }
#line 1350 "asin.c"
    break;

  case 16: /* $@3: %empty  */
#line 93 "src/asin.y"
                  { 
                        if ( ! insTdS((yyvsp[-4].ident), FUNCION, (yyvsp[-5].cent), niv-1, 0, (yyvsp[-1].lista).ref) )
                        {yyerror ("Ya existe esta funcion");}
                        
                  }
#line 1360 "asin.c"
    break;

  case 17: /* declaFunc: tipoSimp ID_ $@2 PARA_ paramForm PARC_ $@3 LLAVEA_ declaVarLocal listInst RETURN_ expre PYC_ LLAVEC_  */
#line 100 "src/asin.y"
            {
                  if ((yyvsp[-13].cent) != (yyvsp[-2].texp).t) yyerror("Error en el tipo de retorno de la funcion");
                    descargaContexto(niv);
                    niv--;
                    dvar = (yyval.cent);
            }
#line 1371 "asin.c"
    break;

  case 18: /* paramForm: %empty  */
#line 109 "src/asin.y"
            {
               (yyval.lista).ref = insTdD(-1, T_VACIO);   
               (yyval.lista).talla = 0;
            }
#line 1380 "asin.c"
    break;

  case 19: /* paramForm: listParamForm  */
#line 115 "src/asin.y"
            {
                  (yyval.lista).ref = (yyvsp[0].lista).ref;
                  (yyval.lista).talla = (yyvsp[0].lista).talla;

            }
#line 1390 "asin.c"
    break;

  case 20: /* listParamForm: tipoSimp ID_  */
#line 122 "src/asin.y"
            {
                  (yyval.lista).ref = insTdD(-1, (yyvsp[-1].cent));
                  (yyval.lista).talla = TALLA_TIPO_SIMPLE + TALLA_SEGENLACES;
                  if ( ! insTdS((yyvsp[0].ident), PARAMETRO, (yyvsp[-1].cent), niv, 0, (yyval.lista).ref) )
                        yyerror ("Ya existe este parametro");
            }
#line 1401 "asin.c"
    break;

  case 21: /* listParamForm: tipoSimp ID_ COMA_ listParamForm  */
#line 130 "src/asin.y"
            {
                  (yyval.lista).ref = insTdD((yyvsp[0].lista).ref, (yyvsp[-3].cent));
                  (yyval.lista).talla = TALLA_TIPO_SIMPLE + (yyvsp[0].lista).talla;
            }
#line 1410 "asin.c"
    break;

  case 33: /* instEntSal: READ_ PARA_ ID_ PARC_ PYC_  */
#line 151 "src/asin.y"
                    {
                        SIMB sim = obtTdS((yyvsp[-2].ident));
                        if (sim.t != T_ENTERO) {
                            yyerror("El argumento del 'read' debe ser 'entero'");
                        }
                    }
#line 1421 "asin.c"
    break;

  case 34: /* instEntSal: PRINT_ PARA_ expre PARC_ PYC_  */
#line 158 "src/asin.y"
                    {
                        if ((yyvsp[-2].texp).t != T_ERROR && (yyvsp[-2].texp).t != T_ENTERO) {
                            yyerror("La expresion del 'print' debe ser 'entera'");
                        }
                    }
#line 1431 "asin.c"
    break;

  case 35: /* instSelec: IF_ PARA_ expre PARC_ inst ELSE_ inst  */
#line 165 "src/asin.y"
                    {
                        if ((yyvsp[-4].texp).t != T_ERROR)
                            if ((yyvsp[-4].texp).t != T_LOGICO) yyerror("La expresion de evaluacion del \"if\" debe ser de tipo logico.");
                    }
#line 1440 "asin.c"
    break;

  case 36: /* $@4: %empty  */
#line 172 "src/asin.y"
            {
                        if ((yyvsp[-1].texp).t != T_ERROR)
                            if ((yyvsp[-1].texp).t != T_LOGICO) yyerror("La expresion del 'while' debe ser 'logica'.");
            }
#line 1449 "asin.c"
    break;

  case 39: /* expre: ID_ ASIG_ expre  */
#line 183 "src/asin.y"
            {   
                printf("valor expresion: %d\n", (yyvsp[0].texp).v);
                SIMB sim = obtTdS((yyvsp[-2].ident));
                if (sim.t == T_ERROR) {
                    yyerror("Objeto no declarado");
                } else if (!((sim.t != T_ENTERO || sim.t != T_LOGICO)  && ((yyvsp[0].texp).t != T_ENTERO || (yyvsp[0].texp).t != T_LOGICO))) // Verifica si son del mismo tipo  
                {
                    printf("tipo de la variable: %d\n", sim.t);
                    printf("tipo de la expresion: %d\n", (yyvsp[0].texp).t);
                    // comprueba si ambos son tipo simple
                    yyerror("El identificador debe ser de tipo simple");
                }
                
                else if (sim.t != (yyvsp[0].texp).t) //si son de tipos diferentes
                {
                        //si no son del mismo tipo
                        yyerror("Error de tipos en la 'asignacion'");
                    
                } 
            }
#line 1474 "asin.c"
    break;

  case 40: /* expre: ID_ CORA_ expre CORC_ ASIG_ expre  */
#line 206 "src/asin.y"
            {
			    SIMB sim = obtTdS((yyvsp[-5].ident)); DIM dim;
			    
                if (sim.t != T_ARRAY) {
                    yyerror("La variable debe ser de tipo array.");
                } else {
                    dim = obtTdA(sim.ref);
                }
                
			    if ((yyvsp[-3].texp).t != T_ERROR && (yyvsp[0].texp).t != T_ERROR) {                    
                    if (sim.t == T_ERROR) {
                        yyerror("No existe ninguna variable con ese identificador.");
                    } else if (! ((yyvsp[-3].texp).t == T_ENTERO)) {
                        yyerror("El indice del array debe ser un entero");
                    } else if (! ((yyvsp[0].texp).t == dim.telem)) { 
                        yyerror("Error de tipos en la asignacion de un array"); 
                    }                      
                }
		    }
#line 1498 "asin.c"
    break;

  case 43: /* expreLogic: expreLogic opLogic expreIgual  */
#line 230 "src/asin.y"
                    {
                        (yyval.texp).t = T_ERROR;
                        if ((yyvsp[-2].texp).t != T_ERROR || (yyvsp[0].texp).t != T_ERROR) {
                            if (!((yyvsp[-2].texp).t == (yyvsp[0].texp).t && (yyvsp[-2].texp).t == T_LOGICO)) {
                                yyerror("Error en la 'expresion logica'.");
                            } else {
                                (yyval.texp).t = T_LOGICO;
                            }
                        }
                    }
#line 1513 "asin.c"
    break;

  case 45: /* expreIgual: expreIgual opIgual expreRel  */
#line 243 "src/asin.y"
                    {	
                        (yyval.texp).t = T_ERROR;
                        
                        if ((yyvsp[-2].texp).t != T_ERROR && (yyvsp[0].texp).t != T_ERROR) {
                            if ((yyvsp[-2].texp).t != (yyvsp[0].texp).t) {
                                yyerror("Error en 'expresion de igualdad'.");
                            } else if ((yyvsp[0].texp).t != T_LOGICO || (yyvsp[0].texp).t != T_ENTERO) { 
                                yyerror("Incompatibilidad de tipos, deben ser expresiones logicas o de enteros3.");
                            }  else {
                                (yyval.texp).t = T_LOGICO;
                            }
                        } 
                    }
#line 1531 "asin.c"
    break;

  case 47: /* expreRel: expreRel opRel expreAd  */
#line 259 "src/asin.y"
                    {
                        (yyval.texp).t = T_ERROR;
                        if ((yyvsp[-2].texp).t != T_ERROR && (yyvsp[0].texp).t != T_ERROR){
                            if (!((yyvsp[-2].texp).t == (yyvsp[0].texp).t && (yyvsp[-2].texp).t == T_ENTERO)) {
                                yyerror("Error en 'expresion relacional'.");
                            } else {
                                (yyval.texp).t = T_LOGICO;
                            }
                        }
                    }
#line 1546 "asin.c"
    break;

  case 49: /* expreAd: expreAd opAd expreMul  */
#line 272 "src/asin.y"
                    {
                        (yyval.texp).t = T_ERROR;
                        if ((yyvsp[-2].texp).t != T_ERROR && (yyvsp[0].texp).t != T_ERROR) {
                            if (!((yyvsp[-2].texp).t == (yyvsp[0].texp).t && (yyvsp[-2].texp).t == T_ENTERO)) {
                                yyerror("Error de tipos en 'expresion aditiva'.");
                            } else {
                                (yyval.texp).t = T_ENTERO;
                            }
                        }
                    }
#line 1561 "asin.c"
    break;

  case 51: /* expreMul: expreMul opMul expreUna  */
#line 285 "src/asin.y"
                    {
                        (yyval.texp).t = T_ERROR;
                        if ((yyvsp[-2].texp).t != T_ERROR && (yyvsp[0].texp).t != T_ERROR) {
                            if (!((yyvsp[-2].texp).t == (yyvsp[0].texp).t && (yyvsp[-2].texp).t == T_ENTERO)) {
                                yyerror("Error de tipos en 'expresion multiplicativa'. ");
                            } else {
                                (yyval.texp).t = T_ENTERO;
                            } 
                        }
                    }
#line 1576 "asin.c"
    break;

  case 53: /* expreUna: opUna expreUna  */
#line 299 "src/asin.y"
            {  
                  (yyval.texp).t = T_ERROR;
                  if ((yyvsp[0].texp).t != T_ERROR) {
                        if ((yyvsp[0].texp).t == T_ENTERO) {                                                                         
                              if ((yyvsp[-1].cent) == OP_NOT) {
                              yyerror("Error en 'expresion unaria' - no se puede negar un entero.");
                              } else { 
                              (yyval.texp).t = T_ENTERO; 
                              }
                        } else if ((yyvsp[0].texp).t == T_LOGICO) {                                                                  
                              if ((yyvsp[-1].cent) == OP_MAS || (yyvsp[-1].cent) == OP_MENOS) {
                              yyerror("Error en 'expresion unaria' - no podemos aplicar operaciones + o - a booleanos");
                              } else { 
                              (yyval.texp).t = T_LOGICO;
                              }
                        } else {
                              yyerror("Incompatibilidad de tipos, no son el mismo tipo o no son equivalentes5.");
                        }                                                               
                  } 
            }
#line 1601 "asin.c"
    break;

  case 54: /* expreUna: opIncre ID_  */
#line 320 "src/asin.y"
            {
                SIMB sim = obtTdS((yyvsp[0].ident));
                if (sim.t != T_ENTERO) {
                    yyerror("Error en operador prefijo.");
                }
            }
#line 1612 "asin.c"
    break;

  case 55: /* expreSufi: const  */
#line 327 "src/asin.y"
                    { (yyval.texp) = (yyvsp[0].texp); }
#line 1618 "asin.c"
    break;

  case 56: /* expreSufi: PARA_ expre PARC_  */
#line 328 "src/asin.y"
                                {(yyval.texp).t = (yyvsp[-1].texp).t;}
#line 1624 "asin.c"
    break;

  case 57: /* expreSufi: ID_  */
#line 330 "src/asin.y"
                  {
                  SIMB sim = obtTdS((yyvsp[0].ident));
                  (yyval.texp).t = T_ERROR;
                  if (sim.t == T_ERROR) {
                        yyerror("No existe ninguna variable con ese identificador.");
                  } else { 
                        (yyval.texp).t = sim.t;
                  }
                  }
#line 1638 "asin.c"
    break;

  case 58: /* expreSufi: ID_ opIncre  */
#line 340 "src/asin.y"
            {
                SIMB sim = obtTdS((yyvsp[-1].ident));
                if (sim.t != T_ENTERO) {
                    yyerror("El identificador debe ser entero.");
                }
            }
#line 1649 "asin.c"
    break;

  case 60: /* expreSufi: ID_ CORA_ expre CORC_  */
#line 348 "src/asin.y"
            {
                SIMB sim = obtTdS((yyvsp[-3].ident));
                if (sim.t == T_ERROR) {
                    yyerror("No existe ninguna variable con ese identificador.");
                } else if (sim.t != T_ARRAY) {
                    yyerror("El identificador no es de tipo array.");
                } else {
                    // Verificar si la expresion (indice) es de tipo entero.
                    if ((yyvsp[-1].texp).t != T_ENTERO) {
                        yyerror("La expresion dentro de los corchetes debe ser de tipo entero.");
                    } else 
                        { 
                            (yyval.texp).t = T_ENTERO;  // Tipo del elemento del array.
                        }
                    
                }
            }
#line 1671 "asin.c"
    break;

  case 62: /* const: CTE_  */
#line 367 "src/asin.y"
                    {(yyval.texp).t = T_ENTERO; (yyval.texp).v = (yyvsp[0].cent);}
#line 1677 "asin.c"
    break;

  case 63: /* const: TRUE_  */
#line 368 "src/asin.y"
                    {(yyval.texp).t = T_LOGICO; (yyval.texp).v = TRUE;}
#line 1683 "asin.c"
    break;

  case 64: /* const: FALSE_  */
#line 369 "src/asin.y"
                     {(yyval.texp).t = T_LOGICO; (yyval.texp).v = FALSE;}
#line 1689 "asin.c"
    break;

  case 69: /* opLogic: AND_  */
#line 377 "src/asin.y"
                      {(yyval.cent) = OP_AND;}
#line 1695 "asin.c"
    break;

  case 70: /* opLogic: OR_  */
#line 378 "src/asin.y"
                      {(yyval.cent) = OP_OR;}
#line 1701 "asin.c"
    break;

  case 71: /* opIgual: IG_  */
#line 380 "src/asin.y"
                      {(yyval.cent) = OP_IG;}
#line 1707 "asin.c"
    break;

  case 72: /* opIgual: DESIG_  */
#line 381 "src/asin.y"
                      {(yyval.cent) = OP_DESIG;}
#line 1713 "asin.c"
    break;

  case 73: /* opRel: MEN_  */
#line 383 "src/asin.y"
                        {(yyval.cent) = OP_MEN;}
#line 1719 "asin.c"
    break;

  case 74: /* opRel: MAY_  */
#line 384 "src/asin.y"
                        {(yyval.cent) = OP_MAY;}
#line 1725 "asin.c"
    break;

  case 75: /* opRel: MAIG_  */
#line 385 "src/asin.y"
                        {(yyval.cent) = OP_MAIG;}
#line 1731 "asin.c"
    break;

  case 76: /* opRel: MEIG_  */
#line 386 "src/asin.y"
                        {(yyval.cent) = OP_MEIG;}
#line 1737 "asin.c"
    break;

  case 77: /* opAd: MAS_  */
#line 388 "src/asin.y"
                   {(yyval.cent) = OP_MAS;}
#line 1743 "asin.c"
    break;

  case 78: /* opAd: MENOS_  */
#line 389 "src/asin.y"
                         {(yyval.cent) = OP_MENOS;}
#line 1749 "asin.c"
    break;

  case 79: /* opMul: POR_  */
#line 391 "src/asin.y"
                        {(yyval.cent) = OP_POR;}
#line 1755 "asin.c"
    break;

  case 80: /* opMul: ENTRE_  */
#line 392 "src/asin.y"
                        {(yyval.cent) = OP_ENTRE;}
#line 1761 "asin.c"
    break;

  case 81: /* opUna: MAS_  */
#line 394 "src/asin.y"
                        {(yyval.cent) = OP_MAS;}
#line 1767 "asin.c"
    break;

  case 82: /* opUna: MENOS_  */
#line 395 "src/asin.y"
                        {(yyval.cent) = OP_MENOS;}
#line 1773 "asin.c"
    break;

  case 83: /* opUna: NOT_  */
#line 396 "src/asin.y"
                        {(yyval.cent) = OP_NOT;}
#line 1779 "asin.c"
    break;

  case 84: /* opIncre: INC_  */
#line 398 "src/asin.y"
                      {(yyval.cent) = OP_INC;}
#line 1785 "asin.c"
    break;

  case 85: /* opIncre: DEC_  */
#line 399 "src/asin.y"
                      {(yyval.cent) = OP_DEC;}
#line 1791 "asin.c"
    break;


#line 1795 "asin.c"

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

#line 403 "src/asin.y"

