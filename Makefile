completo:	scanner.l parser.y
		bison -d -v parser.y
		flex scanner.l
	  	gcc tablaSimbolos.c tablaCuadruplas.c lex.yy.c parser.tab.c -lfl

gcc: 	lex.yy.c
	gcc lex.yy.c -lfl

clean: 	lex.yy.c a.out
	rm lex.yy.c
	rm a.out