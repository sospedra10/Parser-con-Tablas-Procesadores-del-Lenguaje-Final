#include "tablaSimbolos.h"
#include "tablaCuadruplas.h"
#include <stdio.h>
#include <stdlib.h>

char* opNames[23] = {"NULL",":=","+","+","real","int","-","-","*","*","/","/","MOD","ELEVEVACION","==","<",">","<=",">=","!=","VERDADERO","FALSO","GOTO"};

void initCuadruplas(tablaCuadruplas *c){
	c->sizeCuads = 0;
	c->sizeIndex = 0;
}

tablaCuadruplas* crearTabla()
{
    tablaCuadruplas* c = (tablaCuadruplas*)malloc(sizeof(tablaCuadruplas));
	c->sizeCuads = 0;
	c->sizeIndex = 0;    
	return c;
}

int tablaVacia(tablaCuadruplas* c){
	return c->sizeCuads + c->sizeIndex == 0;
}

void backpatch(tablaCuadruplas* cuadruplas, tablaCuadruplas* C, int numeroCuad)
{
	for (int i=0;i<C->sizeIndex;i++){
		cuadrupla* cuad = &cuadruplas->cuads[C->indices[i]];
		cuad->resultado = numeroCuad;
	}
}

int nextQuad(tablaCuadruplas *c){
	return c->sizeCuads;
}

tablaCuadruplas* makeTabla(int cuad)
{
	tablaCuadruplas* C = malloc(sizeof(tablaCuadruplas));
	C->sizeCuads = 0;
	C->sizeIndex = 1;
	C->indices[0] = cuad;
	return C;
}

tablaCuadruplas* merge(tablaCuadruplas* c1,tablaCuadruplas* c2)
{
	for (int i = c1->sizeIndex; i< c1->sizeIndex + c2->sizeIndex; i++){
		c1->indices[i] = c2->indices[i - c1->sizeIndex];
	}
	c1->sizeIndex = c1->sizeIndex + c2->sizeIndex;
	return c1;
}

void genCuadruplas(tablaCuadruplas *c,operador op, int valor1, int valor2, int resultado) {
	c->cuads[c->sizeCuads].op = op;  
	c->cuads[c->sizeCuads].valor1 = valor1;  
	c->cuads[c->sizeCuads].valor2 = valor2;
	c->cuads[c->sizeCuads].resultado = resultado;  
	c->sizeCuads += 1;
}

int esOpRelacional(int op){
	if (op == GOTO | op == COMPARACION_MENOR | op == COMPARACION_MAYOR | op == COMPARACION_MAYORIGUAL 
	| op == COMPARACION_MENORIGUAL | op == DISTINTO){
			return 1;
	}
	return 0;
}

void printCuadruplas(tablaSimbolos* s, tablaCuadruplas *c) {
	printf("Cuadrupla #:\t Valor1:\t Operador:\t Valor2:\t Resultado:\n");
	
    for (int i = 0; i < c->sizeCuads; i++) {
		char* valor1 = getNombre(s,c->cuads[i].valor1);
		char* valor2 = getNombre(s,c->cuads[i].valor2);
		char* resultado;
		if (esOpRelacional(c->cuads[i].op)){
			resultado = malloc(sizeof(c->cuads[i].resultado));
			sprintf(resultado, "%2d",c->cuads[i].resultado);
		}else{
			resultado = getNombre(s,c->cuads[i].resultado);
		}

        printf("%2d \t\t %s \t\t %s \t\t %s \t\t %s\n", i, valor1, opNames[c->cuads[i].op], valor2, resultado);
    }
}