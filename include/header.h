/*****************************************************************************/
/**   Ejemplo de un posible fichero de cabeceras donde situar las           **/
/** definiciones de constantes, variables y estructuras para MenosC. Los    **/
/** alumnos deberan adaptarlo al desarrollo de su propio compilador.    **/
/*****************************************************************************/
#ifndef _HEADER_H
#define _HEADER_H

/****************************************************** Constantes generales */
#define TRUE  1
#define FALSE 0

typedef struct lista {
    int ref;
    int talla;
} Lista;

typedef struct texp {
    int t; /* Tipo */
    int v; /* Valor */
} Espresion;

#define TALLA_TIPO_SIMPLE 1     /* Talla asociada a los tipos simples */
#define TALLA_SEGENLACES 2      /* Talla del segmento de Enlaces de Control */


#define OP_AND 0
#define OP_OR 1
#define OP_IG 2
#define OP_DESIG 3
#define OP_MEN 4
#define OP_MAY 5
#define OP_MAIG 6
#define OP_MEIG 7
#define OP_MAS 8
#define OP_MENOS 9
#define OP_POR 10
#define OP_ENTRE 11
#define OP_NOT 12
#define OP_INC 13
#define OP_DEC 14

extern int verTdS; /* Flag si se desea una ver la TdS */

/************************************* Variables externas definidas en el AL */
extern int yylex();
extern int yyparse();

extern FILE *yyin;                           /* Fichero de entrada           */
extern int   yylineno;                       /* Contador del numero de linea */
extern char *yytext;                         /* Patron detectado             */
/********* Funciones y variables externas definidas en el Programa Principal */
extern void yyerror(const char * msg) ;   /* Tratamiento de errores          */

extern int verbosidad;                   /* Flag si se desea una traza       */
extern int numErrores;              /* Contador del numero de errores        */

#endif  /* _HEADER_H */
/*****************************************************************************/
