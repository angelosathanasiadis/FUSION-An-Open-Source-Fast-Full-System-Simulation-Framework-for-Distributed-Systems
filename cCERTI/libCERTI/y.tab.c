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
#line 1 "/home/simbricks/COSSIM/cCERTI/libCERTI/syntax.yy"

// ----------------------------------------------------------------------------
// CERTI - HLA RunTime Infrastructure
// Copyright (C) 2003  ONERA
//
// This file is part of CERTI-libCERTI
//
// CERTI-libCERTI is free software ; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public License
// as published by the Free Software Foundation ; either version 2 of
// the License, or (at your option) any later version.
//
// CERTI-libCERTI is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY ; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
// Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public
// License along with this program ; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
// USA
//
// $Id: syntax.yy,v 3.10 2011/12/29 17:59:28 erk Exp $
// ----------------------------------------------------------------------------

#include "fed.hh"
#include <iostream>

using std::cout ;
using std::cerr ;
using std::endl ;

namespace certi {
namespace fedparser {

extern std::string arg ;
extern const char *fed_filename ;
extern int line_number ;
extern std::string federationname_arg;
extern std::string federatename_arg;
extern std::string timestamp_arg;
extern std::string spacename_arg ;
extern std::string dimensionname_arg;
extern std::string objectclassname_arg;
extern std::string attributename_arg;
extern std::string interactionclassname_arg;
extern std::string parametername_arg;

}}

int yylex();
int yyerror(const char *);


#line 126 "y.tab.c"

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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    IDENT = 258,                   /* IDENT  */
    STRING = 259,                  /* STRING  */
    L_PAR = 260,                   /* L_PAR  */
    R_PAR = 261,                   /* R_PAR  */
    ATTRIBUTE = 262,               /* ATTRIBUTE  */
    CLASS = 263,                   /* CLASS  */
    DIMENSION = 264,               /* DIMENSION  */
    FED = 265,                     /* FED  */
    FED_VERSION = 266,             /* FED_VERSION  */
    FEDERATION = 267,              /* FEDERATION  */
    FEDERATE = 268,                /* FEDERATE  */
    INTERACTIONS = 269,            /* INTERACTIONS  */
    OBJECTS = 270,                 /* OBJECTS  */
    ORDER = 271,                   /* ORDER  */
    PARAMETER = 272,               /* PARAMETER  */
    SEC_LEVEL = 273,               /* SEC_LEVEL  */
    SPACE = 274,                   /* SPACE  */
    SPACES = 275,                  /* SPACES  */
    TRANSPORT = 276,               /* TRANSPORT  */
    TIMESTAMP_TOKEN = 277          /* TIMESTAMP_TOKEN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define IDENT 258
#define STRING 259
#define L_PAR 260
#define R_PAR 261
#define ATTRIBUTE 262
#define CLASS 263
#define DIMENSION 264
#define FED 265
#define FED_VERSION 266
#define FEDERATION 267
#define FEDERATE 268
#define INTERACTIONS 269
#define OBJECTS 270
#define ORDER 271
#define PARAMETER 272
#define SEC_LEVEL 273
#define SPACE 274
#define SPACES 275
#define TRANSPORT 276
#define TIMESTAMP_TOKEN 277

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IDENT = 3,                      /* IDENT  */
  YYSYMBOL_STRING = 4,                     /* STRING  */
  YYSYMBOL_L_PAR = 5,                      /* L_PAR  */
  YYSYMBOL_R_PAR = 6,                      /* R_PAR  */
  YYSYMBOL_ATTRIBUTE = 7,                  /* ATTRIBUTE  */
  YYSYMBOL_CLASS = 8,                      /* CLASS  */
  YYSYMBOL_DIMENSION = 9,                  /* DIMENSION  */
  YYSYMBOL_FED = 10,                       /* FED  */
  YYSYMBOL_FED_VERSION = 11,               /* FED_VERSION  */
  YYSYMBOL_FEDERATION = 12,                /* FEDERATION  */
  YYSYMBOL_FEDERATE = 13,                  /* FEDERATE  */
  YYSYMBOL_INTERACTIONS = 14,              /* INTERACTIONS  */
  YYSYMBOL_OBJECTS = 15,                   /* OBJECTS  */
  YYSYMBOL_ORDER = 16,                     /* ORDER  */
  YYSYMBOL_PARAMETER = 17,                 /* PARAMETER  */
  YYSYMBOL_SEC_LEVEL = 18,                 /* SEC_LEVEL  */
  YYSYMBOL_SPACE = 19,                     /* SPACE  */
  YYSYMBOL_SPACES = 20,                    /* SPACES  */
  YYSYMBOL_TRANSPORT = 21,                 /* TRANSPORT  */
  YYSYMBOL_TIMESTAMP_TOKEN = 22,           /* TIMESTAMP_TOKEN  */
  YYSYMBOL_YYACCEPT = 23,                  /* $accept  */
  YYSYMBOL_fed = 24,                       /* fed  */
  YYSYMBOL_25_1 = 25,                      /* $@1  */
  YYSYMBOL_26_2 = 26,                      /* $@2  */
  YYSYMBOL_federation = 27,                /* federation  */
  YYSYMBOL_28_3 = 28,                      /* $@3  */
  YYSYMBOL_fed_version = 29,               /* fed_version  */
  YYSYMBOL_30_4 = 30,                      /* $@4  */
  YYSYMBOL_federates = 31,                 /* federates  */
  YYSYMBOL_federate_list = 32,             /* federate_list  */
  YYSYMBOL_federate = 33,                  /* federate  */
  YYSYMBOL_34_5 = 34,                      /* $@5  */
  YYSYMBOL_35_6 = 35,                      /* $@6  */
  YYSYMBOL_spaces = 36,                    /* spaces  */
  YYSYMBOL_37_7 = 37,                      /* $@7  */
  YYSYMBOL_38_8 = 38,                      /* $@8  */
  YYSYMBOL_opt_space_list = 39,            /* opt_space_list  */
  YYSYMBOL_space_list = 40,                /* space_list  */
  YYSYMBOL_space = 41,                     /* space  */
  YYSYMBOL_42_9 = 42,                      /* $@9  */
  YYSYMBOL_43_10 = 43,                     /* $@10  */
  YYSYMBOL_opt_space_name = 44,            /* opt_space_name  */
  YYSYMBOL_opt_dimension_list = 45,        /* opt_dimension_list  */
  YYSYMBOL_dimension_list = 46,            /* dimension_list  */
  YYSYMBOL_dimension = 47,                 /* dimension  */
  YYSYMBOL_48_11 = 48,                     /* $@11  */
  YYSYMBOL_objects = 49,                   /* objects  */
  YYSYMBOL_50_12 = 50,                     /* $@12  */
  YYSYMBOL_51_13 = 51,                     /* $@13  */
  YYSYMBOL_opt_object_class_list = 52,     /* opt_object_class_list  */
  YYSYMBOL_object_class_list = 53,         /* object_class_list  */
  YYSYMBOL_object_class = 54,              /* object_class  */
  YYSYMBOL_55_14 = 55,                     /* $@14  */
  YYSYMBOL_56_15 = 56,                     /* $@15  */
  YYSYMBOL_object_class_items = 57,        /* object_class_items  */
  YYSYMBOL_attribute_list = 58,            /* attribute_list  */
  YYSYMBOL_attribute = 59,                 /* attribute  */
  YYSYMBOL_attribute_named_ts = 60,        /* attribute_named_ts  */
  YYSYMBOL_61_16 = 61,                     /* $@16  */
  YYSYMBOL_62_17 = 62,                     /* $@17  */
  YYSYMBOL_attribute_prefix = 63,          /* attribute_prefix  */
  YYSYMBOL_64_18 = 64,                     /* $@18  */
  YYSYMBOL_attribute_ts = 65,              /* attribute_ts  */
  YYSYMBOL_66_19 = 66,                     /* $@19  */
  YYSYMBOL_attribute_ro = 67,              /* attribute_ro  */
  YYSYMBOL_68_20 = 68,                     /* $@20  */
  YYSYMBOL_interactions = 69,              /* interactions  */
  YYSYMBOL_70_21 = 70,                     /* $@21  */
  YYSYMBOL_71_22 = 71,                     /* $@22  */
  YYSYMBOL_opt_interaction_class_list = 72, /* opt_interaction_class_list  */
  YYSYMBOL_interaction_class_list = 73,    /* interaction_class_list  */
  YYSYMBOL_interaction_class = 74,         /* interaction_class  */
  YYSYMBOL_interaction_class_prefix = 75,  /* interaction_class_prefix  */
  YYSYMBOL_76_23 = 76,                     /* $@23  */
  YYSYMBOL_interaction_class_ts = 77,      /* interaction_class_ts  */
  YYSYMBOL_78_24 = 78,                     /* $@24  */
  YYSYMBOL_79_25 = 79,                     /* $@25  */
  YYSYMBOL_interaction_class_ro = 80,      /* interaction_class_ro  */
  YYSYMBOL_81_26 = 81,                     /* $@26  */
  YYSYMBOL_82_27 = 82,                     /* $@27  */
  YYSYMBOL_interaction_class_items = 83,   /* interaction_class_items  */
  YYSYMBOL_parameter_list = 84,            /* parameter_list  */
  YYSYMBOL_parameter = 85,                 /* parameter  */
  YYSYMBOL_86_28 = 86,                     /* $@28  */
  YYSYMBOL_87_29 = 87,                     /* $@29  */
  YYSYMBOL_interaction_security_level = 88, /* interaction_security_level  */
  YYSYMBOL_89_30 = 89,                     /* $@30  */
  YYSYMBOL_object_security_level = 90,     /* object_security_level  */
  YYSYMBOL_91_31 = 91                      /* $@31  */
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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   97

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  23
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  69
/* YYNRULES -- Number of rules.  */
#define YYNRULES  98
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  149

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   277


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
      15,    16,    17,    18,    19,    20,    21,    22
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    83,    83,    89,    83,    93,    93,    98,    98,   102,
     103,   106,   107,   110,   112,   110,   116,   117,   116,   121,
     122,   125,   126,   129,   131,   129,   135,   137,   140,   141,
     144,   145,   148,   148,   153,   154,   153,   158,   159,   162,
     163,   166,   168,   166,   172,   173,   174,   175,   176,   177,
     178,   181,   182,   185,   186,   187,   191,   193,   190,   198,
     197,   203,   202,   208,   207,   213,   215,   212,   219,   220,
     223,   224,   227,   228,   232,   231,   237,   239,   236,   244,
     246,   243,   250,   251,   252,   253,   254,   255,   256,   259,
     260,   264,   263,   270,   269,   275,   275,   279,   279
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
  "\"end of file\"", "error", "\"invalid token\"", "IDENT", "STRING",
  "L_PAR", "R_PAR", "ATTRIBUTE", "CLASS", "DIMENSION", "FED",
  "FED_VERSION", "FEDERATION", "FEDERATE", "INTERACTIONS", "OBJECTS",
  "ORDER", "PARAMETER", "SEC_LEVEL", "SPACE", "SPACES", "TRANSPORT",
  "TIMESTAMP_TOKEN", "$accept", "fed", "$@1", "$@2", "federation", "$@3",
  "fed_version", "$@4", "federates", "federate_list", "federate", "$@5",
  "$@6", "spaces", "$@7", "$@8", "opt_space_list", "space_list", "space",
  "$@9", "$@10", "opt_space_name", "opt_dimension_list", "dimension_list",
  "dimension", "$@11", "objects", "$@12", "$@13", "opt_object_class_list",
  "object_class_list", "object_class", "$@14", "$@15",
  "object_class_items", "attribute_list", "attribute",
  "attribute_named_ts", "$@16", "$@17", "attribute_prefix", "$@18",
  "attribute_ts", "$@19", "attribute_ro", "$@20", "interactions", "$@21",
  "$@22", "opt_interaction_class_list", "interaction_class_list",
  "interaction_class", "interaction_class_prefix", "$@23",
  "interaction_class_ts", "$@24", "$@25", "interaction_class_ro", "$@26",
  "$@27", "interaction_class_items", "parameter_list", "parameter", "$@28",
  "$@29", "interaction_security_level", "$@30", "object_security_level",
  "$@31", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-111)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      17,  -111,    29,    21,  -111,    30,    25,  -111,    33,    26,
      32,  -111,    36,    22,    26,  -111,  -111,    35,  -111,  -111,
      31,  -111,  -111,    40,    28,  -111,    34,  -111,    41,  -111,
      28,  -111,    42,  -111,  -111,    43,  -111,    45,  -111,    48,
    -111,    42,  -111,    46,    49,  -111,    47,  -111,  -111,    51,
    -111,    54,  -111,    46,  -111,    -6,  -111,    56,  -111,    47,
    -111,     5,  -111,  -111,    55,  -111,    58,    58,  -111,  -111,
    -111,    59,  -111,     3,    60,    42,  -111,     7,  -111,  -111,
      -5,     7,    53,  -111,  -111,  -111,  -111,    61,  -111,  -111,
    -111,  -111,    62,    42,  -111,    58,    58,  -111,  -111,    42,
       7,  -111,     1,     1,  -111,    63,    64,    66,  -111,  -111,
    -111,    42,     4,    65,    46,  -111,    13,  -111,    13,  -111,
    -111,    50,  -111,    70,    71,  -111,  -111,  -111,    73,    46,
    -111,    46,    13,    75,    58,  -111,  -111,    76,    77,    80,
    -111,    46,  -111,  -111,  -111,  -111,  -111,    81,  -111
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     2,     0,     0,     1,     0,     0,     5,     0,    10,
       0,     7,     0,     0,     9,    11,     6,     0,    13,    16,
       0,    12,     8,     0,    20,    34,     0,    14,     0,    17,
      19,    21,    38,    65,     3,     0,    23,     0,    22,     0,
      35,    37,    39,    69,     0,    15,    29,    18,    41,     0,
      40,     0,    66,    68,    70,     0,     4,     0,    24,    28,
      30,    50,    36,    74,     0,    71,    27,    27,    72,    73,
      32,     0,    31,     0,     0,    46,    42,    44,    51,    53,
       0,     0,     0,    67,    26,    79,    76,     0,    25,    59,
      56,    97,     0,    48,    52,    27,    27,    55,    54,    47,
      45,    75,    88,    88,    33,     0,     0,     0,    43,    63,
      61,    49,     0,     0,    84,    80,    82,    89,     0,    77,
      60,     0,    98,     0,     0,    93,    91,    95,     0,    86,
      90,    85,    83,     0,    27,    64,    62,     0,     0,     0,
      81,    87,    78,    57,    94,    92,    96,     0,    58
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,
      74,  -111,  -111,  -111,  -111,  -111,  -111,  -111,    67,  -111,
    -111,   -64,  -111,  -111,    37,  -111,  -111,  -111,  -111,  -111,
     -57,   -40,  -111,  -111,  -111,    10,   -72,  -111,  -111,  -111,
    -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,
     -43,   -51,  -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,
     -11,   -25,  -110,  -111,  -111,  -111,  -111,  -111,  -111
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,    44,     6,    10,     9,    17,    13,    14,
      15,    23,    35,    20,    24,    37,    29,    30,    31,    46,
      71,    85,    58,    59,    60,    87,    26,    32,    49,    40,
      41,    42,    61,    92,    76,    77,    78,    79,   106,   147,
      80,   105,    97,   124,    98,   123,    34,    43,    64,    52,
     114,    54,    55,    82,    68,   103,   133,    69,   102,   128,
     115,   116,   117,   138,   137,   118,   139,    81,   107
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      53,    50,    65,    86,    75,    94,   130,    89,   125,    51,
      66,    95,    73,    39,    73,    39,    67,    96,   112,   113,
      93,    51,   130,    74,    99,    90,   126,     1,    94,     4,
     112,   109,   110,     5,     7,    50,     8,    11,    16,    12,
      18,    22,    19,   111,    27,    36,    25,    28,    33,    45,
      39,    47,    48,    50,    51,    56,    57,    62,    63,    50,
      70,    83,    84,    65,    91,    88,   134,   104,   108,   127,
     143,    50,   122,   129,   101,   131,   135,   136,    65,   140,
      65,   142,   144,   145,   120,   121,   146,   148,    21,   141,
      65,   100,   119,   132,     0,     0,    72,    38
};

static const yytype_int16 yycheck[] =
{
      43,    41,    53,    67,    61,    77,   116,     4,     4,     8,
      16,    16,     7,     8,     7,     8,    22,    22,    17,    18,
      77,     8,   132,    18,    81,    22,    22,    10,   100,     0,
      17,    95,    96,    12,     4,    75,    11,     4,     6,    13,
       4,     6,    20,   100,     4,     4,    15,    19,    14,     6,
       8,     6,     4,    93,     8,     6,     9,     6,     4,    99,
       4,     6,     4,   114,     4,     6,    16,     6,     6,     4,
     134,   111,     6,   116,    21,   118,     6,     6,   129,     6,
     131,     6,     6,     6,    21,    21,     6,     6,    14,   132,
     141,    81,   103,   118,    -1,    -1,    59,    30
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    10,    24,    25,     0,    12,    27,     4,    11,    29,
      28,     4,    13,    31,    32,    33,     6,    30,     4,    20,
      36,    33,     6,    34,    37,    15,    49,     4,    19,    39,
      40,    41,    50,    14,    69,    35,     4,    38,    41,     8,
      52,    53,    54,    70,    26,     6,    42,     6,     4,    51,
      54,     8,    72,    73,    74,    75,     6,     9,    45,    46,
      47,    55,     6,     4,    71,    74,    16,    22,    77,    80,
       4,    43,    47,     7,    18,    53,    57,    58,    59,    60,
      63,    90,    76,     6,     4,    44,    44,    48,     6,     4,
      22,     4,    56,    53,    59,    16,    22,    65,    67,    53,
      58,    21,    81,    78,     6,    64,    61,    91,     6,    44,
      44,    53,    17,    18,    73,    83,    84,    85,    88,    83,
      21,    21,     6,    68,    66,     4,    22,     4,    82,    73,
      85,    73,    84,    79,    16,     6,     6,    87,    86,    89,
       6,    73,     6,    44,     6,     6,     6,    62,     6
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    23,    25,    26,    24,    28,    27,    30,    29,    31,
      31,    32,    32,    34,    35,    33,    37,    38,    36,    39,
      39,    40,    40,    42,    43,    41,    44,    44,    45,    45,
      46,    46,    48,    47,    50,    51,    49,    52,    52,    53,
      53,    55,    56,    54,    57,    57,    57,    57,    57,    57,
      57,    58,    58,    59,    59,    59,    61,    62,    60,    64,
      63,    66,    65,    68,    67,    70,    71,    69,    72,    72,
      73,    73,    74,    74,    76,    75,    78,    79,    77,    81,
      82,    80,    83,    83,    83,    83,    83,    83,    83,    84,
      84,    86,    85,    87,    85,    89,    88,    91,    90
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     0,    10,     0,     4,     0,     4,     1,
       0,     1,     2,     0,     0,     6,     0,     0,     5,     1,
       0,     1,     2,     0,     0,     6,     1,     0,     1,     0,
       1,     2,     0,     4,     0,     0,     5,     1,     0,     1,
       2,     0,     0,     6,     1,     2,     1,     2,     2,     3,
       0,     1,     2,     1,     2,     2,     0,     0,     8,     0,
       4,     0,     4,     0,     4,     0,     0,     5,     1,     0,
       1,     2,     2,     2,     0,     4,     0,     0,     6,     0,
       0,     6,     1,     2,     1,     2,     2,     3,     0,     1,
       2,     0,     4,     0,     4,     0,     4,     0,     4
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
#line 83 "/home/simbricks/COSSIM/cCERTI/libCERTI/syntax.yy"
            { certi::fedparser::startFed(); }
#line 1392 "y.tab.c"
    break;

  case 3: /* $@2: %empty  */
#line 89 "/home/simbricks/COSSIM/cCERTI/libCERTI/syntax.yy"
                     { certi::fedparser::endFed(); }
#line 1398 "y.tab.c"
    break;

  case 5: /* $@3: %empty  */
#line 93 "/home/simbricks/COSSIM/cCERTI/libCERTI/syntax.yy"
                          { certi::fedparser::federationname_arg =  certi::fedparser::arg;
	                    certi::fedparser::addFederation(); }
#line 1405 "y.tab.c"
    break;

  case 7: /* $@4: %empty  */
#line 98 "/home/simbricks/COSSIM/cCERTI/libCERTI/syntax.yy"
                           { certi::fedparser::addFedVersion(); }
#line 1411 "y.tab.c"
    break;

  case 13: /* $@5: %empty  */
#line 110 "/home/simbricks/COSSIM/cCERTI/libCERTI/syntax.yy"
                        { certi::fedparser::federatename_arg =  certi::fedparser::arg;
	                  certi::fedparser::startFederate(); }
#line 1418 "y.tab.c"
    break;

  case 14: /* $@6: %empty  */
#line 112 "/home/simbricks/COSSIM/cCERTI/libCERTI/syntax.yy"
               { certi::fedparser::endFederate(); }
#line 1424 "y.tab.c"
    break;

  case 16: /* $@7: %empty  */
#line 116 "/home/simbricks/COSSIM/cCERTI/libCERTI/syntax.yy"
               { certi::fedparser::startSpaces(); }
#line 1430 "y.tab.c"
    break;

  case 17: /* $@8: %empty  */
#line 117 "/home/simbricks/COSSIM/cCERTI/libCERTI/syntax.yy"
                       { certi::fedparser::end(); }
#line 1436 "y.tab.c"
    break;

  case 23: /* $@9: %empty  */
#line 129 "/home/simbricks/COSSIM/cCERTI/libCERTI/syntax.yy"
                     { certi::fedparser::spacename_arg =  certi::fedparser::arg;
	               certi::fedparser::startSpace(); }
#line 1443 "y.tab.c"
    break;

  case 24: /* $@10: %empty  */
#line 131 "/home/simbricks/COSSIM/cCERTI/libCERTI/syntax.yy"
                           { certi::fedparser::endSpace(); }
#line 1449 "y.tab.c"
    break;

  case 26: /* opt_space_name: STRING  */
#line 135 "/home/simbricks/COSSIM/cCERTI/libCERTI/syntax.yy"
               { certi::fedparser::spacename_arg =  certi::fedparser::arg;
	         certi::fedparser::checkSpaceName(); }
#line 1456 "y.tab.c"
    break;

  case 32: /* $@11: %empty  */
#line 148 "/home/simbricks/COSSIM/cCERTI/libCERTI/syntax.yy"
                         { certi::fedparser::dimensionname_arg =  certi::fedparser::arg;
	                   certi::fedparser::addDimension(); }
#line 1463 "y.tab.c"
    break;

  case 34: /* $@12: %empty  */
#line 153 "/home/simbricks/COSSIM/cCERTI/libCERTI/syntax.yy"
                { certi::fedparser::startObjects(); }
#line 1469 "y.tab.c"
    break;

  case 35: /* $@13: %empty  */
#line 154 "/home/simbricks/COSSIM/cCERTI/libCERTI/syntax.yy"
                              { certi::fedparser::end(); }
#line 1475 "y.tab.c"
    break;

  case 41: /* $@14: %empty  */
#line 166 "/home/simbricks/COSSIM/cCERTI/libCERTI/syntax.yy"
                     { certi::fedparser::objectclassname_arg =  certi::fedparser::arg;
	               certi::fedparser::startObject(); }
#line 1482 "y.tab.c"
    break;

  case 42: /* $@15: %empty  */
#line 168 "/home/simbricks/COSSIM/cCERTI/libCERTI/syntax.yy"
                           { certi::fedparser::endObject(); }
#line 1488 "y.tab.c"
    break;

  case 56: /* $@16: %empty  */
#line 191 "/home/simbricks/COSSIM/cCERTI/libCERTI/syntax.yy"
        { certi::fedparser::attributename_arg = certi::fedparser::timestamp_arg;}
#line 1494 "y.tab.c"
    break;

  case 57: /* $@17: %empty  */
#line 193 "/home/simbricks/COSSIM/cCERTI/libCERTI/syntax.yy"
        { certi::fedparser::addAttribute(); }
#line 1500 "y.tab.c"
    break;

  case 59: /* $@18: %empty  */
#line 198 "/home/simbricks/COSSIM/cCERTI/libCERTI/syntax.yy"
        { certi::fedparser::attributename_arg = certi::fedparser::arg;}
#line 1506 "y.tab.c"
    break;

  case 61: /* $@19: %empty  */
#line 203 "/home/simbricks/COSSIM/cCERTI/libCERTI/syntax.yy"
        { certi::fedparser::addAttribute(); }
#line 1512 "y.tab.c"
    break;

  case 63: /* $@20: %empty  */
#line 208 "/home/simbricks/COSSIM/cCERTI/libCERTI/syntax.yy"
        { certi::fedparser::addAttribute(); }
#line 1518 "y.tab.c"
    break;

  case 65: /* $@21: %empty  */
#line 213 "/home/simbricks/COSSIM/cCERTI/libCERTI/syntax.yy"
        { certi::fedparser::startInteractions(); }
#line 1524 "y.tab.c"
    break;

  case 66: /* $@22: %empty  */
#line 215 "/home/simbricks/COSSIM/cCERTI/libCERTI/syntax.yy"
        { certi::fedparser::end(); }
#line 1530 "y.tab.c"
    break;

  case 74: /* $@23: %empty  */
#line 232 "/home/simbricks/COSSIM/cCERTI/libCERTI/syntax.yy"
        { certi::fedparser::interactionclassname_arg = certi::fedparser::arg;}
#line 1536 "y.tab.c"
    break;

  case 76: /* $@24: %empty  */
#line 237 "/home/simbricks/COSSIM/cCERTI/libCERTI/syntax.yy"
        { certi::fedparser::startInteraction(); }
#line 1542 "y.tab.c"
    break;

  case 77: /* $@25: %empty  */
#line 239 "/home/simbricks/COSSIM/cCERTI/libCERTI/syntax.yy"
        { certi::fedparser::endInteraction(); }
#line 1548 "y.tab.c"
    break;

  case 79: /* $@26: %empty  */
#line 244 "/home/simbricks/COSSIM/cCERTI/libCERTI/syntax.yy"
        { certi::fedparser::startInteraction(); }
#line 1554 "y.tab.c"
    break;

  case 80: /* $@27: %empty  */
#line 246 "/home/simbricks/COSSIM/cCERTI/libCERTI/syntax.yy"
        { certi::fedparser::endInteraction(); }
#line 1560 "y.tab.c"
    break;

  case 91: /* $@28: %empty  */
#line 264 "/home/simbricks/COSSIM/cCERTI/libCERTI/syntax.yy"
        {certi::fedparser::parametername_arg = certi::fedparser::timestamp_arg; 
	 certi::fedparser::addParameter(); }
#line 1567 "y.tab.c"
    break;

  case 93: /* $@29: %empty  */
#line 270 "/home/simbricks/COSSIM/cCERTI/libCERTI/syntax.yy"
        { certi::fedparser::parametername_arg = certi::fedparser::arg;
	  certi::fedparser::addParameter(); }
#line 1574 "y.tab.c"
    break;

  case 95: /* $@30: %empty  */
#line 275 "/home/simbricks/COSSIM/cCERTI/libCERTI/syntax.yy"
                         { certi::fedparser::addInteractionSecurityLevel(); }
#line 1580 "y.tab.c"
    break;

  case 97: /* $@31: %empty  */
#line 279 "/home/simbricks/COSSIM/cCERTI/libCERTI/syntax.yy"
                         { certi::fedparser::addObjectSecurityLevel(); }
#line 1586 "y.tab.c"
    break;


#line 1590 "y.tab.c"

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

#line 282 "/home/simbricks/COSSIM/cCERTI/libCERTI/syntax.yy"


int yyerror(const char *s) {
    cerr << endl << certi::fedparser::fed_filename << ":" 
         << certi::fedparser::line_number << ": " << s << endl ;
    return 0 ;
}
