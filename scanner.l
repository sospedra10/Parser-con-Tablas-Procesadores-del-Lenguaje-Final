%top{
    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>
    #include "tablaSimbolos.h"
	#include "tablaCuadruplas.h"
    #include "parser.tab.h"
}
    char *parseString(char *toParse) {
		char* solucion=(char *) malloc((strlen(yytext)+1)*sizeof(char));
		strcpy(solucion, toParse);
		solucion[strlen(solucion)]='\0';
		return solucion;
    }
    int parseBool(char *toParse) {
		if (strcmp(toParse, "verdadero") == 0){
            return 1;
        }
		return 0;
    }

cifra               [0-9]
identificador       [A-Za-z][A-Za-z0-9]*
letraOCifra         [A-Za-z0-9]
letra               [a-zA-Z]

literalEntero       [0-9]+((e|E)[0-9]+)?
literalReal         [0-9]+(\.[0-9]+)?((e|E)[0-9]+)?
literalBooleano     verdadero|falso
literalCaracter     \".\"
espacio             [ \t\n]
literalCadena       \'([^']|(\/'))*\'
literalNumerico 	literalEntero|literalReal
literal             literalBooleano|literalCadena|literalCaracter|literalEntero|literalReal

comentario          (\{([^\}]|(\/\}))*\})

accion              ?i:"accion"
algoritmo           ?i:"algoritmo"
booleano            ?i:"boolean"
cadena              ?i:"cadena"
caracter            ?i:"caracter"
constt              ?i:"const"
continuar           ?i:"continuar"
de                  ?i:"de"
dev                 ?i:"dev"
divv                ?i:"div"
ent                 ?i:"ent"
entero              ?i:"entero"
es                 	?i:"e/s"
falso				        ?i:"falso"
faccion             ?i:"faccion"
falgoritmo          ?i:"falgoritmo"
fconst              ?i:"fconst"
ffuncion            ?i:"ffuncion"
fmientras           ?i:"fmientras"
fpara               ?i:"fpara"
fsi                 ?i:"fsi"
ftipo               ?i:"ftipo"
ftupla              ?i:"ftupla"
funcion             ?i:"funcion"
fvar                ?i:"fvar"
hacer               ?i:"hacer"
hasta               ?i:"hasta"
mientras            ?i:"mientras"
mod                 ?i:"mod"
no                  ?i:"no"
o                   ?i:"o"
para                ?i:"para"
real                ?i:"real"
ref                 ?i:"ref"
sal                 ?i:"sal"
si                  ?i:"si"
tabla               ?i:"tabla"
tipo                ?i:"tipo"
tupla               ?i:"tupla"
var                 ?i:"var"
verdadero			      ?i:"verdadero"
y                   ?i:"y"

operadorAsignar     ":="
operadorPuntoComa   ";"
operadorComa        ","
operadorSubRango    ".."
operadorDefinicionTipo ":"
operadorEntonces    "->"
operadorInicioArray "["
operadorFinArray    "]"
operadorIgual       "="
operadorSiNoSi      "[]"
operadorInicioParentesis "("
operadorFinParentesis ")"
operadorMas         "+"
operadorPor         "*"
operadorElevado     "^"
operadorDivisor     "/"
operadorModulo      "%"
operadorMenos       "-"
operadorMayor       ">"
operadorMenor       "<"
operadorMayorIgual ">="
operadorMenorIgual "<="
operadorComparador "=="
operadorDistinto   "!="
operadorAmpersand  "&"
operadorOr         "\|"
operadorPunto		"."

tipoBase 			Entero|Booleano|Caracter|Real|Cadena


palabraReservada    accion|algoritmo|booleano|cadena|caracter|constt|continuar|de|dev|divv|ent|entero|e\/s|faccion|falgoritmo|fconst|ffuncion|fmientras|fpara|fsi|ftipo|ftupla|funcion|fvar|hacer|hasta|mientras|mod|no|o|para|real|ref|sal|si|tabla|tipo|tupla|var|y

%%

{operadorAsignar}             {printf("\033[0m Un operadorAsignar: %s\n", yytext );yylval.stringValue;return operadorAsignar;}
{operadorPuntoComa}           {printf("\033[0m Un operadorPuntoComa: %s\n", yytext );return operadorPuntoComa;}
{operadorComa}                {printf("\033[0m Un operadorComa: %s\n", yytext );return operadorComa;}
{operadorSubRango}            {printf("\033[0m Un operadorSubRango: %s\n", yytext );return operadorSubRango;}
{operadorDefinicionTipo}      {printf("\033[0m Un operadorDefinicionTipo: %s\n", yytext );return operadorDefinicionTipo;}
{operadorEntonces}            {printf("\033[0m Un operadorEntonces: %s\n", yytext );return operadorEntonces;}
{operadorInicioArray}         {printf("\033[0m Un operadorInicioArray: %s\n", yytext );return operadorInicioArray;}
{operadorFinArray}            {printf("\033[0m Un operadorFinArray: %s\n", yytext );return operadorFinArray;}
{operadorIgual}               {printf("\033[0m Un operadorIgual: %s\n", yytext );return operadorIgual;}
{operadorSiNoSi}              {printf("\033[0m Un operadorSiNoSi: %s\n", yytext );return operadorSiNoSi;}
{operadorInicioParentesis}    {printf("\033[0m Un operadorInicioParentesis: %s\n", yytext );return operadorInicioParentesis;}
{operadorFinParentesis}       {printf("\033[0m Un operadorFinParentesis: %s\n", yytext );return operadorFinParentesis;}
{operadorMas}                 {printf("\033[0m Un operadorMas: %s\n", yytext );yylval.cuentaValue=yytext[0];return operadorMas;}
{operadorPor}                 {printf("\033[0m Un operadorPor: %s\n", yytext );yylval.cuentaValue=yytext[0];return operadorPor;}
{operadorElevado}             {printf("\033[0m Un operadorElevado: %s\n", yytext );yylval.cuentaValue=yytext[0];return operadorElevado;}
{operadorDivisor}             {printf("\033[0m Un operadorDivisor: %s\n", yytext );yylval.cuentaValue=yytext[0];return operadorDivisor;}
{operadorModulo}              {printf("\033[0m Un operadorModulo: %s\n", yytext );yylval.cuentaValue=yytext[0];return operadorModulo;}
{operadorMenos}               {printf("\033[0m Un operadorMenos: %s\n", yytext );yylval.cuentaValue=yytext[0];return operadorMenos;}
{operadorMayor}               {printf("\033[0m Un operadorMayor: %s\n", yytext );return operadorMayor;}
{operadorMenor}               {printf("\033[0m Un operadorMenor: %s\n", yytext );return operadorMenor;}
{operadorMayorIgual}          {printf("\033[0m Un operadorMayorIgual: %s\n", yytext ); return operadorMayorIgual;}
{operadorMenorIgual}          {printf("\033[0m Un operadorMenorIgual: %s\n", yytext );return operadorMenorIgual;}
{operadorComparador}          {printf("\033[0m Un operadorComparador: %s\n", yytext );return operadorComparador;}
{operadorDistinto}            {printf("\033[0m Un operadorDistinto: %s\n", yytext );return operadorDistinto;}
{operadorAmpersand}           {printf("\033[0m Un operadorAmpersand: %s\n", yytext );return operadorAmpersand;}
{operadorOr}                  {printf("\033[0m Un operadorOr: %s\n", yytext );return operadorOr;}

{accion}                      {printf("\033[0m Una accion: %s\n", yytext );return accion;}
{algoritmo}                   {printf("\033[0m Un algoritmo: %s\n", yytext );yylval.stringValue=parseString(yytext);return algoritmo;} 
{booleano}                    {printf("\033[0m Un booleano: %s\n", yytext );return booleano;} 
{cadena}                      {printf("\033[0m Una cadena: %s\n", yytext );return cadena;} 
{caracter}                    {printf("\033[0m Un caracter: %s\n", yytext );return caracter;} 
{constt}                      {printf("\033[0m Una constt: %s\n", yytext );return constt;} 
{continuar}                   {printf("\033[0m Un continuar: %s\n", yytext );return continuar;} 
{de}                          {printf("\033[0m Un de: %s\n", yytext );return de;} 
{dev}                         {printf("\033[0m Un dev: %s\n", yytext );return dev;} 
{divv}                        {printf("\033[0m Un divv: %s\n", yytext );return divv;} 

{ent}                         {printf("\033[0m Una ent: %s\n", yytext );return ent;} 
{entero}                      {printf("\033[0m Un entero: %s\n", yytext );return entero;} 
{es}                          {printf("\033[0m Una e/s: %s\n", yytext );return es;} 
{faccion}                     {printf("\033[0m Una faccion: %s\n", yytext );return faccion;}
{falgoritmo}                  {printf("\033[0m Un falgoritmo: %s\n", yytext );return falgoritmo;}
{fconst}                      {printf("\033[0m Una fconst: %s\n", yytext );return fconst;}
{ffuncion}                    {printf("\033[0m Una ffuncion: %s\n", yytext );return ffuncion;} 
{fmientras}                   {printf("\033[0m Un fmientras: %s\n", yytext );return fmientras;}
{fpara}                       {printf("\033[0m Un fpara: %s\n", yytext );return fpara;} 
{fsi}                         {printf("\033[0m Un fsi: %s\n", yytext );return fsi;}
{ftipo}                       {printf("\033[0m Un ftipo: %s\n", yytext );return ftipo;} 
{ftupla}                      {printf("\033[0m Una ftupla: %s\n", yytext );return ftupla;} 
{funcion}                     {printf("\033[0m Una funcion: %s\n", yytext );return funcion;}

{fvar}                        {printf("\033[0m Un fvar: %s\n", yytext );return fvar;}
{hacer}                       {printf("\033[0m Un hacer: %s\n", yytext );return hacer;} 
{hasta}                       {printf("\033[0m Un hasta: %s\n", yytext );return hasta;}
{mientras}                    {printf("\033[0m Un mientras: %s\n", yytext );return mientras;} 
{mod}                         {printf("\033[0m Un mod: %s\n", yytext );return mod;}
{no}                          {printf("\033[0m Un no: %s\n", yytext );return no;}
{o}                           {printf("\033[0m Una o: %s\n", yytext );return o;}
{para}                        {printf("\033[0m Un para: %s\n", yytext );return para;} 
{real}                        {printf("\033[0m Un real: %s\n", yytext );return real;}
{ref}                         {printf("\033[0m Una ref: %s\n", yytext );return ref;}
{sal}                         {printf("\033[0m Una sal: %s\n", yytext );return sal;}
{si}                          {printf("\033[0m Un si: %s\n", yytext );return si;}
{tabla}                       {printf("\033[0m Una tabla: %s\n", yytext );return tabla;} 
{tipo}                        {printf("\033[0m Un tipo: %s\n", yytext );return tipo;}
{tupla}                       {printf("\033[0m Una tupla: %s\n", yytext );return tupla;} 
{var}                         {printf("\033[0m Una var: %s\n", yytext );return var;}
{y}                           {printf("\033[0m Una y: %s\n", yytext );return y;}

{literalCaracter}             {printf("\033[0m Un literalCaracter: %s\n", yytext );yylval.charValue=yytext[0];return literalCaracter;}
{literalCadena}               {printf("\033[0m Un literalCadena: %s\n", yytext );yylval.stringValue=parseString(yytext);return literalCadena;}
{comentario}                  {printf("\033[0m Un comentario: %s\n", yytext );return comentario;}
{literalEntero}               {printf("\033[0m Un literalEntero: %s\n", yytext );yylval.intValue=atoi(yytext);return literalEntero;}
{literalReal}                 {printf("\033[0m Un literalReal: %s\n", yytext );strtod(yytext,NULL);return literalReal;}
{literalBooleano}             {printf("\033[0m Un literalBooleano: %s\n", yytext );yylval.boolValue=parseBool(yytext);return literalBooleano;}
{identificador}               {printf("\033[0m Un identificador: %s\n", yytext );yylval.stringValue=parseString(yytext);return identificador;}

%%

