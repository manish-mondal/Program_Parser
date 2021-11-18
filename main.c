// gcc main.c y.tab.c lex.yy.c symtab.c
// ./a.out test1.txt

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern void yyerror(); 
extern int  yylex();
extern FILE *yyin;
extern int yyparse();
extern void init_symbol_table();
extern void free_symbol_table();
extern void print_table();


int main(int argc, char **argv)
{
    if ( argc > 1 ) {
        if ((yyin = fopen( argv[1], "r" )) == NULL) {
            printf("%s cannot be opened\n", argv[1]);
            exit(0);
        }
    }
    else
        yyin = stdin;

    init_symbol_table();
    if (yyparse() == 0) {
    	printf("\n\nProgram has been parsed successfully\n\n");
    	print_table();
    }
    free_symbol_table();
    
    return 0;
}

