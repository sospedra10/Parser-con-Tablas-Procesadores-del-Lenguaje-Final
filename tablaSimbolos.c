#include "tablaSimbolos.h" 
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

//#define NULL 0
const char* varNames[6] = {"VACIO","ENTERO","REAL","BOOLEANO","CADENA"};
const char* typeNames[2] = {"CONSTANTE","VARIABLE"};

void initSimbolos(tablaSimbolos *table) {
	table->size = 0;
    table->primero = NULL;
    table->ultimo = table->primero;
}

void printSimbolos(tablaSimbolos *table) {
    nodo *actual = table->primero;
    printf("# Simbolo:\t Tipo simbolo:\t Tipo: \t Nombre:\n");
    while (actual != NULL) {
            printf("%2d \t\t %s \t %s\t %s\n",
                actual->id, typeNames[actual->symbol.tipo], varNames[actual->symbol.data.tipo], actual->symbol.nombre);
        actual = actual->next;
    }
}

int insertarSimbolos(tablaSimbolos *table, elemento new_symbol) {
    nodo *actual = malloc(sizeof(nodo));
    actual->symbol = new_symbol;
    actual->id = table->size + 1;
    actual->next = NULL;

    if (table->primero == NULL) {
        table->primero = actual;
        table->ultimo = table->primero;
    } 
    else {
        table->ultimo->next = actual;
        table->ultimo = table->ultimo->next;
    }

    table->size += 1;

    return table->ultimo->id;
}

int insertarNombreSimbolos(tablaSimbolos *table, char *nombre, tipoSimbolo tipo, tipoVariables tipoVariable)
{
    if (strcmp("", nombre) != 0 && existeNombre(table, nombre)) {
        return -1;
    }

    elemento new_symbol;

    new_symbol.nombre = (char *) malloc(sizeof(char) * strlen(nombre));
    strcpy(new_symbol.nombre, nombre);
    symData data = {tipoVariable, 0};
    new_symbol.data = data;
    new_symbol.tipo = tipo;
    return insertarSimbolos(table, new_symbol);
}

int existeNombre(tablaSimbolos *table, char *nombre)
{
    return getNodoByNombre(table, nombre) != NULL;
}

nodo *getNodoByNombre(tablaSimbolos *table, char *nombre)
{
    nodo *actual = table->primero;

    while (actual != NULL) {
        if (strcmp(actual->symbol.nombre, nombre) == 0)
			return actual;
        actual = actual->next;
    }
    return NULL;
}

nodo *getNodoById(tablaSimbolos *table, int id)
{
    nodo *actual = table->primero;

    while (actual != NULL) {
        if (actual->id == id)
			return actual;
        actual = actual->next;
    }
    return NULL;
}

void asignarValorConst(tablaSimbolos *table, int id, valData valor){
    nodo* aux = getNodoById(table, id);
    aux->symbol.data.valor = valor;
}

char* getNombre(tablaSimbolos *table, int id){
    char* ret;
    if (id != 0 && id != -1){
        nodo* n = getNodoById(table, id);
        if(n->symbol.tipo == VARIABLE){
            if (strcmp(n->symbol.nombre,"")==0){
                ret = malloc(sizeof(n->id)+5);
                sprintf(ret,"T%2d",n->id);
            }else{
                ret = malloc(sizeof(n->symbol.nombre));
                strcpy(ret,n->symbol.nombre);
            }
        }else{
            char* valor = getValor(n->symbol.data);
            ret = malloc(sizeof(valor));
            strcpy(ret,valor);
        }
    }else{
        ret = malloc(2);
        strcpy(ret,"-");
    }
    return ret;
}

char* getValor(symData data){
    char* ret;
    switch(data.tipo){
        case ENTERO:
            ret = malloc(sizeof(data.valor.entero)+1);
            sprintf(ret,"%2d",data.valor.entero);
        break;
        case REAL:
            ret = malloc(sizeof(data.valor.real)+1);
            sprintf(ret,"%lf",data.valor.real);
        break;
        case BOOLEANO:
            ret = malloc(sizeof(data.valor.booleano)+1);
            sprintf(ret,"%d",data.valor.booleano);
        break;
        case CHAR:
            ret = malloc(sizeof(data.valor.caracter)+1);
            sprintf(ret,"%c",data.valor.caracter);
        break;
        case CADENA:
            ret = malloc(sizeof(data.valor.cadena)+1);
            sprintf(ret,"%s",data.valor.cadena);
        break;
    }
    return ret;
}