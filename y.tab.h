/* A Bison parser, made by GNU Bison 2.5.  */

/* Skeleton interface for Bison GLR parsers in C
   
      Copyright (C) 2002-2011 Free Software Foundation, Inc.
   
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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     NUMBER = 258,
     S = 259,
     AT = 260,
     LPAREN = 261,
     RPAREN = 262,
     PIPE = 263,
     LT = 264,
     SLASH = 265,
     DBLSLASH = 266,
     BANG = 267,
     COLON = 268,
     DBLCOLON = 269,
     QUERY = 270,
     HASH = 271,
     COMMA = 272,
     DOT = 273,
     DBLDOT = 274,
     GT = 275,
     LBRA = 276,
     RBRA = 277,
     TILDE = 278,
     SPLAT = 279,
     PLUS = 280,
     DASH = 281,
     EQ = 282,
     LTE = 283,
     GTE = 284,
     DOLLAR = 285,
     BSLASHLIT = 286,
     OTHER = 287,
     XANCESTOR = 288,
     XANCESTORSELF = 289,
     XATTR = 290,
     XCHILD = 291,
     XDESC = 292,
     XDESCSELF = 293,
     XFOLLOW = 294,
     XFOLLOWSIB = 295,
     XNS = 296,
     XPARENT = 297,
     XPRE = 298,
     XPRESIB = 299,
     XSELF = 300,
     XOR = 301,
     XAND = 302,
     XDIV = 303,
     XMOD = 304,
     XCOMMENT = 305,
     XTEXT = 306,
     XPI = 307,
     XNODE = 308,
     CXEQUATION = 309,
     CXOPHE = 310,
     CXOPNE = 311,
     CXOPSTARTEQ = 312,
     CXOPENDEQ = 313,
     CXOPCONTAINS = 314,
     CXOPCONTAINS2 = 315,
     CXFIRST = 316,
     CXLAST = 317,
     CXNOT = 318,
     CXEVEN = 319,
     CXODD = 320,
     CXEQ = 321,
     CXGT = 322,
     CXLT = 323,
     CXCONTENT = 324,
     CXHEADER = 325,
     CXCONTAINS = 326,
     CXEMPTY = 327,
     CXHAS = 328,
     CXPARENT = 329,
     CXNTHCH = 330,
     CXNTHLASTCH = 331,
     CXNTHTYPE = 332,
     CXNTHLASTTYPE = 333,
     CXFIRSTCH = 334,
     CXLASTCH = 335,
     CXFIRSTTYPE = 336,
     CXLASTTYPE = 337,
     CXONLYCH = 338,
     CXONLYTYPE = 339,
     CXINPUT = 340,
     CXTEXT = 341,
     CXPASSWORD = 342,
     CXRADIO = 343,
     CXCHECKBOX = 344,
     CXSUBMIT = 345,
     CXIMAGE = 346,
     CXRESET = 347,
     CXBUTTON = 348,
     CXFILE = 349,
     CXENABLED = 350,
     CXDISABLED = 351,
     CXCHECKED = 352,
     CXSELECTED = 353,
     NAME = 354,
     STRING = 355
   };
#endif


#ifndef YYSTYPE
typedef union YYSTYPE
{

/* Line 2663 of glr.c  */
#line 55 "parser.y"

  int empty;
	char* string;
  pxpathPtr node;



/* Line 2663 of glr.c  */
#line 157 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{

  char yydummy;

} YYLTYPE;
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif



extern YYSTYPE yylval;



