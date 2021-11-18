#ifndef _SYMTAB_H
#define _SYMTAB_H

enum TYPE {UNDEFINED, INTEGER, REAL, OPERATOR, ID};

void init_symbol_table();
void free_symbol_table();
void print_table();
int hash_insert(char *str, char *type);
int hash_search(char *str);
enum TYPE get_id_type();

#endif
