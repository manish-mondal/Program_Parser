#ifndef YYERRCODE
#define YYERRCODE 256
#endif

#define _PROGRAM 257
#define _BEGIN 258
#define _END 259
#define _VAR 260
#define _INTEGER 261
#define _REAL 262
#define _COLON 263
#define _SEMI 264
#define _ASSIGN 265
#define _COMMA 266
#define _LPAREN 267
#define _RPAREN 268
#define _ADD 269
#define _SUB 270
#define _MULT 271
#define _DIV 272
#define _CONST_I 273
#define _CONST_F 274
#define _ID 275
typedef union {
   int ival;
   float fval;
   char name[STR_SIZE];
   char type[STR_SIZE];
} YYSTYPE;
extern YYSTYPE yylval;
