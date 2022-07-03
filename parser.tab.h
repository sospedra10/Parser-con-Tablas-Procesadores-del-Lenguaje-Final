/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
#line 18 "parser.y" /* yacc.c:1909  */

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

#line 60 "parser.tab.h" /* yacc.c:1909  */

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
#line 144 "parser.y" /* yacc.c:1909  */

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

#line 167 "parser.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
