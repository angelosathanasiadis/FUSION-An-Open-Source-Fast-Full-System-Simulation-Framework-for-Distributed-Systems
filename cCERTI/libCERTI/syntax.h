/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

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
