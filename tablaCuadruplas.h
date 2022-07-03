#ifndef __TRADUCCIONES_H
#	define __TRADUCCIONES_H
#include "tablaSimbolos.h"

typedef enum {
        OP_NULL,
        ASIGNACION,
        SUMA_ENTEROS,
        SUMA_REALES,
        ENTERO_A_REAL,
        REAL_A_ENTERO,
        RESTA_ENTEROS,
        RESTA_REALES,
        MULT_ENTEROS,
        MULT_REALES,
        DIV_REAL,
        DIV,
        MOD,
        ELEVEVACION,
        IGUALACION,
        COMPARACION_MENOR,
        COMPARACION_MAYOR,
        COMPARACION_MENORIGUAL, 
        COMPARACION_MAYORIGUAL,
        DISTINTO,
        VERDADERO,
        FALSO,
        GOTO
}operador;

typedef struct {
    int valor1;
    int valor2;
    operador op;
    int resultado;
} cuadrupla;


typedef struct {
    int sizeCuads;
    int sizeIndex;
    cuadrupla cuads[100];
    int indices[100];
} tablaCuadruplas;

void initCuadruplas(tablaCuadruplas *c);
tablaCuadruplas* crearTabla();
int tablaVacia(tablaCuadruplas *c);
int nextQuad(tablaCuadruplas *c);
void printCuadruplas(tablaSimbolos*,tablaCuadruplas *c);
void genCuadruplas(tablaCuadruplas *c,operador op, int valor1, int valor2, int resultado);
void backpatch(tablaCuadruplas* cuadruplas, tablaCuadruplas* c, int numeroCuad);
tablaCuadruplas* makeTabla(int cuadrupla);
tablaCuadruplas* merge(tablaCuadruplas* c1,tablaCuadruplas* c2);

#endif