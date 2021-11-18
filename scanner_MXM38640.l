/* Include files and initialization here */
%{
#define STR_SIZE 80
#include <stdio.h>
#include <stdio.h>
#include <string.h>
#include "y.tab.h"
int line_num=1;
%}
/* definition */
%%
PROGRAM {return (_PROGRAM);}
VAR {return (_VAR);}
BEGIN {return (_BEGIN);}
END {return (_END);}
INTEGER {strcpy(yylval.type, yytext); return (_INTEGER);}
REAL {strcpy(yylval.type, yytext); return (_REAL);}
[a-zA-Z][a-zA-Z0-9]* {strcpy(yylval.name,yytext); return (_ID);}
[0-9][0-9]* {yylval.ival = atoi(yytext); return (_CONST_I);}
[0-9][0-9]*[.][0-9][0-9]* {yylval.fval = atof(yytext); return (_CONST_F);}
";" {return (_SEMI);}
"," {return (_COMMA);}
":=" {return (_ASSIGN);}
":" {return (_COLON);}
"(" {return (_LPAREN);}
")" {return (_RPAREN);}
"+" {return (_ADD);}
"*" {return (_MULT);}
"/" {return (_DIV);}
"-" {return (_SUB);}
"#".* ;
[ \t]+ ;
"\n" line_num++;
. {printf("Error:Invalid Syntax... %s in line %d\n", yytext, line_num); exit(1);}
%%
