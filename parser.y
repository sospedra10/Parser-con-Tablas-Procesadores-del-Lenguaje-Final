%{
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
%}

%code requires
{
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
}

/* Declaraciones de Bison */

%define parse.error verbose
%token accion
%token algoritmo
%token tipoBase
%token <stringValue> identificador
%token <intValue> literalEntero
%token <charValue> literalCaracter
%token <boolValue> literalBooleano
%token palabraReservada
%token <stringValue> literalCadena
%token <floatValue> literalReal
%token espacio
%left o
%left y
%left no
%token <stringValue> comentario
%token <stringValue> booleano
%token <stringValue> cadena
%token <stringValue> caracter
%token constt
%token continuar
%token de
%token dev
%token divv
%token ent
%token entero
%token es
%token faccion
%token falgoritmo
%token fconst
%token ffuncion
%token fmientras
%token fpara
%token fsi
%token ftipo
%token ftupla
%token funcion
%token fvar
%token hacer
%token hasta
%token mientras
%token mod
%token no 
%token o
%token para
%token <floatValue> real
%token ref
%token sal
%token si
%token tabla
%token tipo
%token tupla
%token var
%token y
%token operadorAsignar
%token operadorPuntoComa
%token operadorComa
%token operadorSubRango
%token operadorDefinicionTipo
%token operadorEntonces
%token operadorInicioArray
%token operadorFinArray
%token operadorIgual
%token operadorSiNoSi
%token operadorInicioParentesis
%token operadorFinParentesis
%token <cuentaValue> operadorMas
%token <cuentaValue> operadorPor
%token <cuentaValue> operadorElevado
%token <cuentaValue> operadorDivisor
%token <cuentaValue> operadorModulo
%token <cuentaValue> operadorMenos
%token operadorMayor
%token operadorMenor 
%token operadorMayorIgual
%token operadorMenorIgual 
%token operadorComparador
%token operadorDistinto
%token operadorAmpersand
%token operadorOr
%token operadorPunto
%left operadorMas operadorMenos
%left operadorPor operadorDivisor divv mod
%left operadorPunto operadorInicioArray ref
%left menosu masu

//tipos 

%type <intValue> oprel
%type <operadorArit> expresion
%type <tipo> defTipo
%type <operadorArit> expArit
%type <operadorArit> expBool
%type <operadorArit> operando
%type <tipo> listaId
%type <symData> literal
%type <symData> literalNumerico
%type <instr> M
%type <instr> N
%type <instr> asignacion
%type <instr> iteracion
%type <instr> itCotaFija
%type <instr> itCotaVariable
%type <instr> alternativa
%type <instr> instrucciones
%type <instr> instruccion
%type <instr> listaOpciones

%union {
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
}

/*precedencias*/

%%
/* Reglas gramaticales */

desc_algoritmo: 
    algoritmo identificador operadorPuntoComa cabeceraAlgoritmo bloqueAlgoritmo falgoritmo {
		printf("\033[1;31m Encontrado algoritmo\n");
		printSimbolos(&simbolos);
		printf("\n\n");
		printCuadruplas(&simbolos, &cuadruplas);
	}
;

cabeceraAlgoritmo:
    defGlobales defAccionesFunciones defVariablesInteraccion comentario {printf("\033[1;31m Algoritmo declarado\n");}
;

bloqueAlgoritmo:
    bloque comentario {printf("\033[1;31m Bloque algoritmo\n");}
;

defGlobales:
    definicionTipo defGlobales {printf("\033[1;31m Definición tipo global\n");}
    | definicionConst defGlobales {printf("\033[1;31m Definición const global\n");}
    | /* vacio */
;

defAccionesFunciones:
    defAccion defAccionesFunciones {printf("\033[1;31m Definición acción\n");}
    |defFuncion_d defAccionesFunciones {printf("\033[1;31m Definición función\n");}
    | /* vacio */
;

bloque:
    declaraciones instrucciones {printf("\033[1;31m Declaración instrucciones\n");}
;	

declaraciones:
    definicionTipo declaraciones {printf("\033[1;31m Definición tipo declaraciones\n");}
    | definicionConst declaraciones {printf("\033[1;31m Definición const declaraciones\n");}
    | definicionVar declaraciones {printf("\033[1;31m Definición var declaraciones\n");}
    | /* vacio */
;
	
definicionTipo:
    tipo listaDefsTipo ftipo {printf("\033[1;31m Definición tipo\n");}
;

definicionConst:
    constt listaDefsConstantes fconst {printf("\033[1;31m Definición const\n");}
;

definicionVar:
    var listaDefsVariables fvar {printf("\033[1;31m Definición var\n");}
;

listaDefsTipo: 
    identificador operadorIgual defTipo operadorPuntoComa listaDefsTipo {printf("\033[1;31m Definición lista tipos\n");}
    | /* vacio */
;

expresionT:
	literalEntero {printf("\033[1;31m Literal entero\n");}
	| literalCaracter {printf("\033[1;31m Definición caracter\n");}
;

listaCampos:
	identificador operadorDefinicionTipo defTipo operadorPuntoComa listaCampos {printf("\033[1;31m Lista campos\n");}
	| /* vacio */
;

literal:
	literalBooleano {$$.tipo = BOOLEANO; $$.valor.booleano = $1;}
	| literalCadena {$$.tipo = CADENA; strcpy($$.valor.cadena, $1);}
	| literalCaracter {$$.tipo = CHAR; $$.valor.caracter = $1;}
	| literalEntero {$$.tipo = ENTERO; $$.valor.entero = $1;}
	| literalReal {$$.tipo = REAL; $$.valor.real = $1;}
;

literalNumerico:
	literalEntero {$$.tipo = ENTERO; $$.valor.entero = $1;}
	| literalReal {$$.tipo = REAL; $$.valor.real = $1;}
;

listaDefsConstantes:
	identificador operadorIgual literal operadorPuntoComa listaDefsConstantes {printf("\033[1;31m Lista Definción constantes\n"); int id = insertarNombreSimbolos(&simbolos, $1, CONSTANTE, $3.tipo); asignarValorConst(&simbolos,id,$3.valor);}
	| /* vacio */
;

listaDefsVariables:
	listaId operadorPuntoComa listaDefsVariables {printf("\033[1;31m Lista Definción ariables\n");} 
	| /* vacio */
;

defTipo:
	tupla listaCampos ftupla {printf("\033[1;31m Definición tipo Lista campos\n");}
	| tabla operadorInicioArray expresionT operadorSubRango expresionT operadorFinArray de defTipo {printf("\033[1;31m Definición tipo tabla\n");}
	| identificador {printf("\033[1;31m Definición tipo identificador\n");}
	| expresionT operadorSubRango expresionT {printf("\033[1;31m Definición tipo\n");}
	| ref defTipo {printf("\033[1;31m Definición ref tipo\n");}
	| entero {printf("\033[1;31m Tipo entero\n"); $$ = ENTERO;}
	| booleano {printf("\033[1;31m Tipo booleano\n"); $$ = BOOLEANO;}
	| real {printf("\033[1;31m Tipo real\n"); $$ = REAL;}
	| caracter {printf("\033[1;31m Tipo caracter\n"); $$ = CHAR;}
	| cadena {printf("\033[1;31m Tipo cadena\n"); $$ = CADENA;}
	/*| tipoBase {}*/
;

listaId:
	identificador operadorComa listaId {insertarNombreSimbolos(&simbolos, $1, VARIABLE, $3); $$ = $3;}
	| identificador operadorDefinicionTipo defTipo { insertarNombreSimbolos(&simbolos, $1, VARIABLE, $3); $$ = $3;}
;

defVariablesInteraccion:
	defEntrada {}
	| defEntrada defSalida {}
	| defSalida {}
;

defEntrada:
	ent listaDefsVariables {}
;

defSalida:
	sal listaDefsVariables {}
;

expresion:
	expArit {}
	| expBool {}
	| llamadaFuncion {}
;

expArit: 
	expArit operadorMas expArit {
		int idTemp;
		if($1.tipo == ENTERO)
		{
			if($3.tipo == ENTERO)
			{
				idTemp = insertarNombreSimbolos(&simbolos, "", VARIABLE, ENTERO);
				genCuadruplas(&cuadruplas, SUMA_ENTEROS, $1.id, $3.id, idTemp);

				$$.tipo = ENTERO;
			}
			else
			{
				int idTemp1 = insertarNombreSimbolos(&simbolos, "", VARIABLE, REAL);
				genCuadruplas(&cuadruplas, ENTERO_A_REAL, $1.id, OP_NULL, idTemp1);

				idTemp = insertarNombreSimbolos(&simbolos, "", VARIABLE, REAL);
				genCuadruplas(&cuadruplas, SUMA_REALES, $3.id, idTemp1, idTemp);
				$$.tipo = REAL;
			}
		} else {
			if($3.tipo == REAL)
			{
				idTemp = insertarNombreSimbolos(&simbolos, "", VARIABLE, REAL);
				genCuadruplas(&cuadruplas, SUMA_REALES, $1.id, $3.id, idTemp);
				$$.tipo = REAL;
			}
			else
			{
				int idTemp1 = insertarNombreSimbolos(&simbolos, "", VARIABLE, REAL);
				genCuadruplas(&cuadruplas, ENTERO_A_REAL, $3.id, OP_NULL, idTemp1);

				idTemp = insertarNombreSimbolos(&simbolos, "", VARIABLE, REAL);
				genCuadruplas(&cuadruplas, SUMA_REALES, idTemp1, $1.id, idTemp);
				$$.tipo = REAL;
			}
		}
		$$.id = idTemp;
	}
	| expArit operadorMenos expArit {
		int idTemp;
		if($1.tipo == ENTERO)
		{
			if($3.tipo == ENTERO)
			{
				idTemp = insertarNombreSimbolos(&simbolos, "", VARIABLE, ENTERO);
				genCuadruplas(&cuadruplas, RESTA_ENTEROS, $1.id, $3.id, idTemp);
				$$.id = idTemp;
				$$.tipo = ENTERO;
			}
			else
			{
				int idTemp1 = insertarNombreSimbolos(&simbolos, "", VARIABLE, REAL);
				genCuadruplas(&cuadruplas, ENTERO_A_REAL, $1.id, OP_NULL, idTemp1);

				idTemp = insertarNombreSimbolos(&simbolos, "", VARIABLE, REAL);
				genCuadruplas(&cuadruplas, RESTA_REALES, $3.id, idTemp1, idTemp);
				$$.id = idTemp;
				$$.tipo = REAL;
			}
		} else {
			if($3.tipo == REAL)
			{
				idTemp = insertarNombreSimbolos(&simbolos, "", VARIABLE, REAL);
				genCuadruplas(&cuadruplas, RESTA_REALES, $1.id, $3.id, idTemp);
				$$.id = idTemp;
				$$.tipo = REAL;
			}
			else
			{
				int idTemp1 = insertarNombreSimbolos(&simbolos, "", VARIABLE, REAL);
				genCuadruplas(&cuadruplas, ENTERO_A_REAL, $3.id, OP_NULL, idTemp1);

				idTemp = insertarNombreSimbolos(&simbolos, "", VARIABLE, REAL);
				genCuadruplas(&cuadruplas, RESTA_REALES, idTemp1, $1.id, idTemp);
				$$.id = idTemp;
				$$.tipo = REAL;
			}
		}
	}
	| expArit operadorPor expArit {
		int idTemp;
		if($1.tipo == ENTERO)
		{
			if($3.tipo == ENTERO)
			{
				idTemp = insertarNombreSimbolos(&simbolos, "", VARIABLE, ENTERO);
				genCuadruplas(&cuadruplas, MULT_ENTEROS, $1.id, $3.id, idTemp);
				$$.tipo = ENTERO;
			}
			else
			{
				int idTemp1 = insertarNombreSimbolos(&simbolos, "", VARIABLE, REAL);
				genCuadruplas(&cuadruplas, ENTERO_A_REAL, $1.id, OP_NULL, idTemp1);

				idTemp = insertarNombreSimbolos(&simbolos, "", VARIABLE, REAL);
				genCuadruplas(&cuadruplas, MULT_REALES, $3.id, idTemp1, idTemp);
				$$.tipo = REAL;
			}
		} else {
			if($3.tipo == REAL)
			{
				idTemp = insertarNombreSimbolos(&simbolos, "", VARIABLE, REAL);
				genCuadruplas(&cuadruplas, MULT_REALES, $1.id, $3.id, idTemp);
				$$.tipo = REAL;
			}
			else
			{
				int idTemp1 = insertarNombreSimbolos(&simbolos, "", VARIABLE, REAL);
				genCuadruplas(&cuadruplas, ENTERO_A_REAL, $3.id, OP_NULL, idTemp1);

				idTemp = insertarNombreSimbolos(&simbolos, "", VARIABLE, REAL);
				genCuadruplas(&cuadruplas, MULT_REALES, idTemp1, $1.id, idTemp);
				$$.tipo = REAL;
			}
		}
		$$.id = idTemp;
	}
	| expArit operadorDivisor expArit {
		int idTemp = insertarNombreSimbolos(&simbolos, "", VARIABLE, REAL);
		int idTemp1 = $1.id;
		int idTemp3 = $3.id;
		if($1.tipo == ENTERO)
		{
			int idTemp1 = insertarNombreSimbolos(&simbolos, "", VARIABLE, REAL);
			genCuadruplas(&cuadruplas, ENTERO_A_REAL, $1.id, OP_NULL, idTemp1);
		} 
		if ($3.tipo == ENTERO){
			int idTemp3 = insertarNombreSimbolos(&simbolos, "", VARIABLE, REAL);
			genCuadruplas(&cuadruplas, ENTERO_A_REAL, $3.id, OP_NULL, idTemp3);
		}
		genCuadruplas(&cuadruplas, DIV_REAL, idTemp1, idTemp3, idTemp);
		$$.id = idTemp;
		$$.tipo = REAL;
	}
	| expArit divv expArit {
		int idTemp;
		if(($1.tipo == ENTERO) && ($3.tipo == ENTERO))
		{
			idTemp = insertarNombreSimbolos(&simbolos, "", VARIABLE, ENTERO);
			genCuadruplas(&cuadruplas, DIV, $1.id, $3.id, idTemp);
		}
		else
		{
			if($1.tipo != ENTERO)
			{
				char* error = malloc(sizeof("\033[1;31m %s debe ser un ENTERO") + sizeof(getNombre(&simbolos, $1.id)));
				sprintf(error, "\033[1;31m %s debe ser un ENTERO", getNombre(&simbolos, $1.id));
				yyerror(error);
			}
			else{
				char* error = malloc(sizeof("\033[1;31m %s debe ser un ENTERO") + sizeof(getNombre(&simbolos, $3.id)));
				sprintf(error, "\033[1;31m %s debe ser un ENTERO", getNombre(&simbolos, $3.id));
				yyerror(error);
			}
		}
		$$.id = idTemp;
		$$.tipo = REAL;
	}
	| expArit mod expArit {
		int idTemp;
		if(($1.tipo == ENTERO) && ($3.tipo == ENTERO))
		{
			idTemp = insertarNombreSimbolos(&simbolos, "", VARIABLE, ENTERO);
			genCuadruplas(&cuadruplas, MOD, $1.id, $3.id, idTemp);
		}
		else
		{
			if($1.tipo != ENTERO)
			{
				char* error = malloc(sizeof("\033[1;31m %s debe ser un ENTERO") + sizeof(getNombre(&simbolos, $1.id)));
				sprintf(error, "\033[1;31m %s debe ser un ENTERO", getNombre(&simbolos, $1.id));
				yyerror(error);
			}
			else
			{
				char* error = malloc(sizeof("\033[1;31m %s debe ser un ENTERO") + sizeof(getNombre(&simbolos, $3.id)));
				sprintf(error, "\033[1;31m %s debe ser un ENTERO", getNombre(&simbolos, $3.id));
				yyerror(error);
			}
		}
		$$.id = idTemp;
		$$.tipo = REAL;
	}
	| operadorInicioParentesis expArit operadorFinParentesis {$$ = $2;}
	| operando {}
	| operadorMenos expArit %prec menosu {}
	| operadorMas expArit %prec masu {}
	| literalNumerico { $$.tipo = $1.tipo; $$.id = insertarNombreSimbolos(&simbolos, "", CONSTANTE, $1.tipo); asignarValorConst(&simbolos, $$.id, $1.valor);}
;

operando:
	identificador {
		int id; 
		nodo nodoTabla = *getNodoByNombre(&simbolos,$1);
		if(nodoTabla.id == 0) 
		{ 
			char* error = malloc(sizeof("\033[1;31m Variable %s no definida") + sizeof($1));
			sprintf(error, "\033[1;31m Variable %s no definida", $1);
			yyerror(error);
		} 
		else 
		{  
			$$.id = nodoTabla.id;
			$$.tipo = nodoTabla.symbol.data.tipo; 
			$$.tipoSim = nodoTabla.symbol.tipo;
		} 
	}
	| operando operadorPunto operando {}
	| operando operadorInicioArray expresion operadorFinArray {}
	| operando ref {}
;

expBool: 
	expBool y M expBool {
		backpatch(&cuadruplas, $$.true, $3.next); 
		$$.false = merge($1.false, $4.false); 
		$$.true = $4.true;
	}
	| expBool o M expBool {
		backpatch(&cuadruplas, $$.false, $3.next); 
		$$.true = merge($1.true, $4.true); 
		$$.false = $4.false;
	}
	| no expBool {
		$$.true = $2.false; 
		$$.false = $$.true;
	}
	| literalBooleano {
		$$.true = makeTabla(nextQuad(&cuadruplas));
		$$.false = makeTabla(nextQuad(&cuadruplas)+1);
		genCuadruplas(&cuadruplas, GOTO, OP_NULL, OP_NULL, -1);
		genCuadruplas(&cuadruplas, GOTO, OP_NULL, OP_NULL, -1);
		if(!$1) { 
			tablaCuadruplas* aux = $$.false; 
			$$.false = $$.true; 
			$$.true = aux; 
		}
	}
	| expresion oprel expresion {
		$$.true = makeTabla(nextQuad(&cuadruplas)); 
		$$.false = makeTabla(nextQuad(&cuadruplas)+1); 
		genCuadruplas(&cuadruplas, $2, $1.id, $3.id, -1);
		genCuadruplas(&cuadruplas, GOTO, OP_NULL, OP_NULL, -1);
	}
	| operadorInicioParentesis expBool operadorFinParentesis {$$ = $2;}
;

oprel:
	operadorMayor { $$=COMPARACION_MAYOR;}
	| operadorMenor {$$=COMPARACION_MENOR;}
	| operadorMayorIgual {$$=COMPARACION_MAYORIGUAL;}
	| operadorMenorIgual {$$=COMPARACION_MAYORIGUAL;}
	| operadorComparador {$$=IGUALACION;}
	| operadorDistinto {$$=DISTINTO;}
;

instrucciones: 
	instruccion operadorPuntoComa instrucciones {

	}
	| instruccion {}
;

instruccion:
	continuar {}
	| asignacion {}
	| alternativa {}
	| iteracion {}
	| llamadaAccion {}
;

asignacion:
	operando operadorAsignar expresion {
		$$.current = crearTabla();
		if($1.tipoSim != VARIABLE)
		{
			char* error = malloc(sizeof("\033[1;31m %s debe ser una variable") + sizeof(getNombre(&simbolos, $1.id)));
			sprintf(error, "\033[1;31m %s debe ser una variable", getNombre(&simbolos, $1.id));
			yyerror(error);
		}else{
			if($1.tipo == $3.tipo)
			{
				if($3.tipo == BOOLEANO)
				{
					backpatch(&cuadruplas, $3.true, nextQuad(&cuadruplas));
					backpatch(&cuadruplas, $3.false, nextQuad(&cuadruplas)+1);
					genCuadruplas(&cuadruplas, VERDADERO, $1.id, OP_NULL, OP_NULL);
					genCuadruplas(&cuadruplas, FALSO, $1.id, OP_NULL, OP_NULL);
				}
				else
				{
					genCuadruplas(&cuadruplas, ASIGNACION, $3.id, OP_NULL, $1.id);
				}
			}
			else
			{
				if((($1.tipo == ENTERO) && ($3.tipo == REAL)) || (($1.tipo == REAL) && ($3.tipo == ENTERO)))
				{
					if($1.tipo == ENTERO)
					{
						genCuadruplas(&cuadruplas,REAL_A_ENTERO, $3.id, OP_NULL, $1.id);
					}
					else
					{
						genCuadruplas(&cuadruplas, ENTERO_A_REAL, $3.id, OP_NULL, $1.id);
					}
				}
				else 
				{
					char* error = malloc(sizeof("\033[1;31m No de puede convertir implicitamente a %s de tipo %d a tipo %d") + sizeof(getNombre(&simbolos, $3.id) + 2));
					sprintf(error, "\033[1;31m No de puede convertir implicitamente a %s de tipo %d a tipo %d", getNombre(&simbolos, $3.id), $3.tipo, $1.tipo);
					yyerror(error);
				}
			}
		}
	}
;

alternativa:
	si expresion operadorEntonces M instrucciones N listaOpciones fsi {
		backpatch(&cuadruplas, $2.true, $4.next);
		backpatch(&cuadruplas, $2.false, $6.next);
		$$.current = merge($5.current, merge($6.current, $7.current));
	}
	| si expresion operadorEntonces M instrucciones fsi {
		backpatch(&cuadruplas, $2.true, $4.next);
		if(!tablaVacia($5.current))
			$$.current = merge($2.false, $5.current);
		else
		{
			$$.current = merge($2.false, makeTabla(nextQuad(&cuadruplas)));
			genCuadruplas(&cuadruplas, GOTO, OP_NULL, OP_NULL, -1);
		} 
	}
;
	
listaOpciones:
	operadorSiNoSi expresion operadorEntonces M instrucciones N listaOpciones {
		backpatch(&cuadruplas, $2.true, $4.next);
		backpatch(&cuadruplas, $2.false, $6.next);
		$$.current = merge($5.current, merge($6.current, $7.current));
	}
	| operadorSiNoSi expresion operadorEntonces M instrucciones {
		backpatch(&cuadruplas, $2.true, $4.next);
		if(!tablaVacia($5.current))
			$$.current = merge($2.false, $5.current);
		else 
		{
			$$.current = merge($2.false, makeTabla(nextQuad(&cuadruplas)));
			genCuadruplas(&cuadruplas, GOTO, OP_NULL, OP_NULL, -1);
		}
	}
;

iteracion: 
	itCotaFija {}
	| itCotaVariable {}
;

itCotaVariable:
	mientras M expresion hacer M instrucciones fmientras {
		backpatch(&cuadruplas, $3.true, $5.next);
		if (!tablaVacia($6.current)){
			backpatch(&cuadruplas, $6.current, $2.next);
		}else{
			genCuadruplas(&cuadruplas, GOTO, OP_NULL, OP_NULL, $2.next);
		}
		$$.current = $3.false;
	}
;

itCotaFija: 
	para identificador operadorAsignar expresion hasta expresion hacer instrucciones fpara {
	}
;

defAccion: 
	accion cabeceraAccion bloque faccion
;

defFuncion_d:
	funcion cabeceraFuncion bloque dev expresion ffuncion
;

cabeceraAccion:
	identificador operadorInicioParentesis defParForm operadorFinParentesis operadorPuntoComa
;

cabeceraFuncion: 
	identificador operadorInicioParentesis listaDefsVariables operadorFinParentesis dev tipoBase operadorPuntoComa
;

defParForm: 
	dParForm operadorPuntoComa defParForm {}
	| dParForm {}
	| /* vacio */
;

dParForm: 
	ent listaId {}
	| sal listaId {}
	| es listaId {}
;

llamadaAccion:
	identificador operadorInicioParentesis parametrosReales operadorFinParentesis
;

llamadaFuncion:
	identificador operadorInicioParentesis parametrosReales operadorFinParentesis
;

parametrosReales: 
	expresion operadorComa parametrosReales {}
	| expresion {}
	| /* vacio */
;

M:
	/* vacio */ {$$.next =nextQuad(&cuadruplas);}
N:
	/* vacio */ {$$.current = makeTabla(nextQuad(&cuadruplas)); $$.next = nextQuad(&cuadruplas);}
%%

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
