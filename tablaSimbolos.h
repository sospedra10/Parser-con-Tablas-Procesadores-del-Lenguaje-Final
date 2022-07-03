#ifndef _TABLA_SIMBOLOS_H
#	define _TABLA_SIMBOLOS_H

typedef enum {
    VACIO,
    ENTERO,
    REAL,
    BOOLEANO,
    CHAR,
    CADENA
} tipoVariables;

typedef enum {
    CONSTANTE,
    VARIABLE
} tipoSimbolo;

typedef struct valData {
    union
    {
        int entero;
        double real;
        int booleano;
        char caracter;
        char cadena[256];
    };
} valData;

typedef struct symData {
    tipoVariables tipo;
    valData valor;
} symData;

typedef struct elemento {
    char *nombre;
    symData data;
    tipoSimbolo tipo;
} elemento;

typedef struct nodo {
    int id;
    elemento symbol;
    struct nodo *next;
} nodo;

typedef struct {
    int size;
    nodo *primero;
    nodo *ultimo;
} tablaSimbolos;

void initSimbolos(tablaSimbolos *);
void printSimbolos(tablaSimbolos*);
int insertarSimbolos(tablaSimbolos *, elemento);
int insertarNombreSimbolos(tablaSimbolos *, char *, tipoSimbolo, tipoVariables);
int existeNombre(tablaSimbolos *, char *);
char* getNombre(tablaSimbolos *, int);
char* getValor(symData);
nodo *getNodoByNombre(tablaSimbolos *, char *);
nodo *getNodoById(tablaSimbolos *, int);
void asignarValorConst(tablaSimbolos *, int, valData);

#endif
