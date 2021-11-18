#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "symtab.h"

#define TABLE_SIZE 256


typedef struct {
    char *name;   // variable name
    char *type;   // variable type
    int var_size; // variable size
} RECORD;

RECORD symtab[TABLE_SIZE];

// ADD YOUR CODE HERE


int searchedHashIndex;
const char* typeEnumValues[6] = {"UNDEFINED", "INTEGER", "REAL", "OPERATOR", "ID", NULL};

//Hash function 
int hash_function(const char *name)
{
     long int type = 0;
     int i;
     int name_len = strlen(name);

    for (i=0; i < name_len; ++i) {
        type = type * 19 + name[i]-'a';
    }

     type = 2* (type % TABLE_SIZE);
return type;

}
// Initiate Symbol table with name and type NULL values
void init_symbol_table()
{
    int i;
    for(i = 0; i < TABLE_SIZE; i++)
    {
        symtab[i].name = NULL;
        symtab[i].type = NULL;
    }
}
int hash_insert(char* name, char* type)
{
	int i;
	for(i = 0; i < TABLE_SIZE; i++)
	{
		int hashIndex = hash_function(name);
		if(NULL == symtab[hashIndex].name && NULL == symtab[hashIndex].type)
		{
			symtab[hashIndex].name = name;
			symtab[hashIndex].type = type;
			break;
		}
	}
    return 0;
}

int hash_search(char* name)
{
    int i, res = -1;
	for(i = 0; i < TABLE_SIZE; i++)
	{
		int hashIndex = hash_function(name);
		char* currName = symtab[hashIndex].name;
		if(NULL != currName && strcmp(currName, name) == 0)
		{
		    res = hashIndex;
            searchedHashIndex = hashIndex;
		    break;
		}
	}
	return res;
}
// free Symbol table values
void free_symbol_table()
{
    int i;
    for(i = 0; i < TABLE_SIZE; i++)
    {
        if(NULL != symtab[i].name && NULL != symtab[i].type)
        {
            symtab[i].name = NULL;
            symtab[i].type = NULL;
        }
    }
}

void print_table()
{

	//print symbol table  with the pattern given in assignment

    printf("SYMBOL TABLE\n");
    printf("-------------------------------------------------\n");
    printf("|%-10s|%-10s|%-10s|%-10s|\n", "INDEX", "NAME", "DATA TYPE", "MEMORY ADDR");
    printf("-------------------------------------------------\n");
    int i;
    for (i = 0; i < TABLE_SIZE; i++)
    {
        if(NULL != symtab[i].name)
        {
            printf("|%-10d|%-10s|%-10s|0          |\n", i, symtab[i].name, symtab[i].type);
        }
    }
    printf("-------------------------------------------------\n");
}

enum TYPE get_id_type()
{
    char* type = symtab[searchedHashIndex].type;
    int i = 0;
    enum TYPE resVal = UNDEFINED;
    for (i = 0; typeEnumValues[i] != NULL; ++i, ++resVal)
    {
        if(strcmp(type, typeEnumValues[i]) == 0)
            break;
    }
    return resVal;
}
