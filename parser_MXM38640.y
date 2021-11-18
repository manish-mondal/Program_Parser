%{
#define STR_SIZE 80
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "symtab.h"
extern int line_num;

int yylex();
void yyerror(char *s);

enum TYPE typeEnum;
int flag = 0;
char* name;
char* names[50];
int count = 0;
char* type;
%}

%union {
   int ival;
   float fval;
   char name[STR_SIZE];
   char type[STR_SIZE];
}

%start Start

%token _PROGRAM _BEGIN _END _VAR _INTEGER _REAL
_COLON _SEMI _ASSIGN _COMMA _LPAREN _RPAREN _ADD _SUB _MULT _DIV _CONST_I _CONST_F _ID


%%
Start : _PROGRAM _ID _SEMI P

P : _VAR Q1 U

Q1 : Q Q1| ;

Q : _ID R _COLON T _SEMI
{
	char* name = malloc(sizeof($<name>1));
	strcpy(name, $<name>1);
	names[count++] = name;
	int i = 0;
	for (i = 0; i < count; i++)
	{
		if(hash_search(names[i]) == -1)
		{
			
			hash_insert(names[i], type);
		}
		else
		{
			printf("Identifier redefined: %s ... (Line %d)\n", names[i], line_num);
			exit(0);
		}
		names[i] = NULL;
	}
	count = 0;
}

R : _COMMA _ID R 
{
	char* name = malloc(sizeof($<name>2));
	strcpy(name, $<name>2);
	names[count++] = name;
}
| ;

T : _REAL 
{ 
	type = malloc(sizeof($<type>1)); 
	strcpy(type, $<type>1); 
}
| _INTEGER 
{ 
	type = malloc(sizeof($<type>1)); 
	strcpy(type, $<type>1);
}

U : _BEGIN V1 _END

V1 : V V1| ; 

V : _ID _ASSIGN W _SEMI
{
	char* name3 = malloc(sizeof($<name>1));
	strcpy(name3, $<name>1);
	int hashIndex = hash_search(name3);
	if(hashIndex < 0)
	{
		printf("Undefined variable: %s ... (Line %d)\n", name3, line_num);
		exit(0);
	}
	else if(flag == 1)
	{
		if(typeEnum != get_id_type())
		{
			printf("Type mismatched: %s ... (Line %d) %d %d\n", name, line_num,get_id_type(),typeEnum);
			exit(0);
		}
	}
	flag = 0;
	free(name);
	free(name3);
}

W : X W1

W1 : _ADD X W1 | _SUB X W1 | ;

X : Y X1

X1 : _MULT Y X1 | _DIV Y X1 | ;

Y : _LPAREN W _RPAREN | _CONST_I | _CONST_F |_ID 
{
	flag = 1;
	name = malloc(sizeof($<name>1));
	strcpy(name, $<name>1);
	int hashIndex = hash_search(name);
	if(hashIndex < 0)
	{
		printf("Undefined variable: %s ... (Line %d)\n", name, line_num);
		exit(0);
	}
	else
	{
		typeEnum = get_id_type();
	}
}



%%
void yyerror(char *s)
{
    printf("%s at line %d\n",s,line_num);
    exit(0);
}
