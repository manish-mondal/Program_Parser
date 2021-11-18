#ifndef lint
static char const 
yyrcsid[] = "$FreeBSD: src/usr.bin/yacc/skeleton.c,v 1.28 2000/01/17 02:04:06 bde Exp $";
#endif
#include <stdlib.h>
#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYLEX yylex()
#define YYEMPTY -1
#define yyclearin (yychar=(YYEMPTY))
#define yyerrok (yyerrflag=0)
#define YYRECOVERING() (yyerrflag!=0)
static int yygrowstack();
#define YYPREFIX "yy"
#line 2 "parser_MXM38640.y"
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
#line 20 "parser_MXM38640.y"
typedef union {
   int ival;
   float fval;
   char name[STR_SIZE];
   char type[STR_SIZE];
} YYSTYPE;
#line 41 "y.tab.c"
#define YYERRCODE 256
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
const short yylhs[] = {                                        -1,
    0,    1,    2,    2,    4,    5,    5,    6,    6,    3,
    7,    7,    8,    9,   11,   11,   11,   10,   13,   13,
   13,   12,   12,   12,   12,
};
const short yylen[] = {                                         2,
    4,    3,    2,    0,    5,    3,    0,    1,    1,    3,
    2,    0,    4,    2,    3,    3,    0,    2,    3,    3,
    0,    3,    1,    1,    1,
};
const short yydefred[] = {                                      0,
    0,    0,    0,    0,    0,    1,    0,    0,    0,    0,
    0,    0,    2,    3,    0,    0,    0,    0,    0,    6,
    9,    8,    0,    0,   10,   11,    5,    0,   23,   24,
   25,    0,    0,    0,    0,   13,    0,    0,   14,    0,
    0,   18,   22,    0,    0,    0,    0,   15,   16,   19,
   20,
};
const short yydgoto[] = {                                       2,
    6,    8,   13,    9,   11,   23,   18,   19,   32,   33,
   39,   34,   42,
};
const short yysindex[] = {                                   -242,
 -250,    0, -238, -233, -247,    0, -237, -228, -247, -244,
 -231, -241,    0,    0, -237, -260, -232, -224, -241,    0,
    0,    0, -227, -267,    0,    0,    0, -267,    0,    0,
    0, -226, -266, -258, -229,    0, -267, -267,    0, -267,
 -267,    0,    0, -266, -266, -258, -258,    0,    0,    0,
    0,
};
const short yyrindex[] = {                                      0,
    0,    0,    0,    0, -222,    0, -223,    0, -222,    0,
    0, -218,    0,    0, -223,    0,    0,    0, -218,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0, -252, -259,    0,    0,    0,    0,    0,    0,
    0,    0,    0, -252, -252, -259, -259,    0,    0,    0,
    0,
};
const short yygindex[] = {                                      0,
    0,   33,    0,    0,   28,    0,   25,    0,   17,  -20,
  -25,  -19,  -23,
};
#define YYTABLESIZE 45
const short yytable[] = {                                      28,
   21,   22,   37,   38,   21,   29,   30,   31,   21,   21,
   21,   17,   40,   41,    1,   17,   44,   45,   48,   49,
   46,   47,   50,   51,    3,    4,    5,    7,   10,   12,
   15,   16,   24,   17,   25,    4,   27,   36,   43,    7,
   12,   14,   20,   26,   35,
};
const short yycheck[] = {                                     267,
  261,  262,  269,  270,  264,  273,  274,  275,  268,  269,
  270,  264,  271,  272,  257,  268,   37,   38,   44,   45,
   40,   41,   46,   47,  275,  264,  260,  275,  266,  258,
  275,  263,  265,  275,  259,  258,  264,  264,  268,  263,
  259,    9,   15,   19,   28,
};
#define YYFINAL 2
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 275
#if YYDEBUG
const char * const yyname[] = {
"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"_PROGRAM","_BEGIN","_END","_VAR",
"_INTEGER","_REAL","_COLON","_SEMI","_ASSIGN","_COMMA","_LPAREN","_RPAREN",
"_ADD","_SUB","_MULT","_DIV","_CONST_I","_CONST_F","_ID",
};
const char * const yyrule[] = {
"$accept : Start",
"Start : _PROGRAM _ID _SEMI P",
"P : _VAR Q1 U",
"Q1 : Q Q1",
"Q1 :",
"Q : _ID R _COLON T _SEMI",
"R : _COMMA _ID R",
"R :",
"T : _REAL",
"T : _INTEGER",
"U : _BEGIN V1 _END",
"V1 : V V1",
"V1 :",
"V : _ID _ASSIGN W _SEMI",
"W : X W1",
"W1 : _ADD X W1",
"W1 : _SUB X W1",
"W1 :",
"X : Y X1",
"X1 : _MULT Y X1",
"X1 : _DIV Y X1",
"X1 :",
"Y : _LPAREN W _RPAREN",
"Y : _CONST_I",
"Y : _CONST_F",
"Y : _ID",
};
#endif
#if YYDEBUG
#include <stdio.h>
#endif
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH 10000
#endif
#endif
#define YYINITSTACKSIZE 200
int yydebug;
int yynerrs;
int yyerrflag;
int yychar;
short *yyssp;
YYSTYPE *yyvsp;
YYSTYPE yyval;
YYSTYPE yylval;
short *yyss;
short *yysslim;
YYSTYPE *yyvs;
int yystacksize;
#line 137 "parser_MXM38640.y"
void yyerror(char *s)
{
    printf("%s at line %d\n",s,line_num);
    exit(0);
}
#line 198 "y.tab.c"
/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack()
{
    int newsize, i;
    short *newss;
    YYSTYPE *newvs;

    if ((newsize = yystacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return -1;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;
    i = yyssp - yyss;
    newss = yyss ? (short *)realloc(yyss, newsize * sizeof *newss) :
      (short *)malloc(newsize * sizeof *newss);
    if (newss == NULL)
        return -1;
    yyss = newss;
    yyssp = newss + i;
    newvs = yyvs ? (YYSTYPE *)realloc(yyvs, newsize * sizeof *newvs) :
      (YYSTYPE *)malloc(newsize * sizeof *newvs);
    if (newvs == NULL)
        return -1;
    yyvs = newvs;
    yyvsp = newvs + i;
    yystacksize = newsize;
    yysslim = yyss + newsize - 1;
    return 0;
}

#define YYABORT goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR goto yyerrlab

#ifndef YYPARSE_PARAM
#if defined(__cplusplus) || __STDC__
#define YYPARSE_PARAM_ARG void
#define YYPARSE_PARAM_DECL
#else	/* ! ANSI-C/C++ */
#define YYPARSE_PARAM_ARG
#define YYPARSE_PARAM_DECL
#endif	/* ANSI-C/C++ */
#else	/* YYPARSE_PARAM */
#ifndef YYPARSE_PARAM_TYPE
#define YYPARSE_PARAM_TYPE void *
#endif
#if defined(__cplusplus) || __STDC__
#define YYPARSE_PARAM_ARG YYPARSE_PARAM_TYPE YYPARSE_PARAM
#define YYPARSE_PARAM_DECL
#else	/* ! ANSI-C/C++ */
#define YYPARSE_PARAM_ARG YYPARSE_PARAM
#define YYPARSE_PARAM_DECL YYPARSE_PARAM_TYPE YYPARSE_PARAM;
#endif	/* ANSI-C/C++ */
#endif	/* ! YYPARSE_PARAM */

int
yyparse (YYPARSE_PARAM_ARG)
    YYPARSE_PARAM_DECL
{
    register int yym, yyn, yystate;
#if YYDEBUG
    register const char *yys;

    if ((yys = getenv("YYDEBUG")))
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = (-1);

    if (yyss == NULL && yygrowstack()) goto yyoverflow;
    yyssp = yyss;
    yyvsp = yyvs;
    *yyssp = yystate = 0;

yyloop:
    if ((yyn = yydefred[yystate])) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = yylex()) < 0) yychar = 0;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yyssp >= yysslim && yygrowstack())
        {
            goto yyoverflow;
        }
        *++yyssp = yystate = yytable[yyn];
        *++yyvsp = yylval;
        yychar = (-1);
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;
#if defined(lint) || defined(__GNUC__)
    goto yynewerror;
#endif
yynewerror:
    yyerror("syntax error");
#if defined(lint) || defined(__GNUC__)
    goto yyerrlab;
#endif
yyerrlab:
    ++yynerrs;
yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yyssp]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yyssp, yytable[yyn]);
#endif
                if (yyssp >= yysslim && yygrowstack())
                {
                    goto yyoverflow;
                }
                *++yyssp = yystate = yytable[yyn];
                *++yyvsp = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yyssp);
#endif
                if (yyssp <= yyss) goto yyabort;
                --yyssp;
                --yyvsp;
            }
        }
    }
    else
    {
        if (yychar == 0) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = (-1);
        goto yyloop;
    }
yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    yyval = yyvsp[1-yym];
    switch (yyn)
    {
case 5:
#line 41 "parser_MXM38640.y"
{
	char* name = malloc(sizeof(yyvsp[-4].name));
	strcpy(name, yyvsp[-4].name);
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
break;
case 6:
#line 64 "parser_MXM38640.y"
{
	char* name = malloc(sizeof(yyvsp[-1].name));
	strcpy(name, yyvsp[-1].name);
	names[count++] = name;
}
break;
case 8:
#line 72 "parser_MXM38640.y"
{ 
	type = malloc(sizeof(yyvsp[0].type)); 
	strcpy(type, yyvsp[0].type); 
}
break;
case 9:
#line 77 "parser_MXM38640.y"
{ 
	type = malloc(sizeof(yyvsp[0].type)); 
	strcpy(type, yyvsp[0].type);
}
break;
case 13:
#line 87 "parser_MXM38640.y"
{
	char* name3 = malloc(sizeof(yyvsp[-3].name));
	strcpy(name3, yyvsp[-3].name);
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
break;
case 25:
#line 118 "parser_MXM38640.y"
{
	flag = 1;
	name = malloc(sizeof(yyvsp[0].name));
	strcpy(name, yyvsp[0].name);
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
break;
#line 481 "y.tab.c"
    }
    yyssp -= yym;
    yystate = *yyssp;
    yyvsp -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yyssp = YYFINAL;
        *++yyvsp = yyval;
        if (yychar < 0)
        {
            if ((yychar = yylex()) < 0) yychar = 0;
#if YYDEBUG
            if (yydebug)
            {
                yys = 0;
                if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
                if (!yys) yys = "illegal-symbol";
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == 0) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yyssp, yystate);
#endif
    if (yyssp >= yysslim && yygrowstack())
    {
        goto yyoverflow;
    }
    *++yyssp = yystate;
    *++yyvsp = yyval;
    goto yyloop;
yyoverflow:
    yyerror("yacc stack overflow");
yyabort:
    return (1);
yyaccept:
    return (0);
}
