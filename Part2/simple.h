/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Skeleton interface for Bison GLR parsers in C

   Copyright (C) 2002-2015, 2018-2021 Free Software Foundation, Inc.

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

#ifndef YY_YY_SIMPLE_H_INCLUDED
# define YY_YY_SIMPLE_H_INCLUDED
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
    T_ID = 258,                    /* T_ID  */
    T_NUM = 259,                   /* T_NUM  */
    T_ADD = 260,                   /* T_ADD  */
    T_SUB = 261,                   /* T_SUB  */
    T_MUL = 262,                   /* T_MUL  */
    T_DIV = 263,                   /* T_DIV  */
    T_LT = 264,                    /* T_LT  */
    T_GT = 265,                    /* T_GT  */
    T_LEQ = 266,                   /* T_LEQ  */
    T_GEQ = 267,                   /* T_GEQ  */
    T_EQ = 268,                    /* T_EQ  */
    T_NEQ = 269,                   /* T_NEQ  */
    T_AND = 270,                   /* T_AND  */
    T_OR = 271,                    /* T_OR  */
    T_READ = 272,                  /* T_READ  */
    T_WRITE = 273,                 /* T_WRITE  */
    T_ASSIGN = 274,                /* T_ASSIGN  */
    T_BEGIN = 275,                 /* T_BEGIN  */
    T_END = 276,                   /* T_END  */
    T_FOREACH = 277,               /* T_FOREACH  */
    T_IN = 278,                    /* T_IN  */
    T_REPEAT = 279,                /* T_REPEAT  */
    T_UNTIL = 280,                 /* T_UNTIL  */
    T_WHILE = 281,                 /* T_WHILE  */
    T_IF = 282,                    /* T_IF  */
    T_THEN = 283,                  /* T_THEN  */
    T_ELSE = 284,                  /* T_ELSE  */
    T_DECLARE = 285,               /* T_DECLARE  */
    T_INTEGER = 286,               /* T_INTEGER  */
    T_FLOAT = 287,                 /* T_FLOAT  */
    T_LITERAL_STR = 288            /* T_LITERAL_STR  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);

#endif /* !YY_YY_SIMPLE_H_INCLUDED  */
