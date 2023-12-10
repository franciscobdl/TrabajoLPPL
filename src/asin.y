

%{
#include <stdio.h>
#include <string.h>
#include "header.h"
#include "libtds.h"

%}

%union {
      int cent;
      char *ident;
      Lista lista;
      Espresion texp;

}

%token  INT_ BOOL_ RETURN_ READ_ PRINT_ IF_ ELSE_ WHILE_
%token  CORA_ CORC_ LLAVEA_ LLAVEC_ PARA_ PARC_ PYC_ COMA_ PUNTO_
%token  AND_ OR_ IG_ DESIG_ MAY_ MEN_ MAIG_ MEIG_ MAS_ MENOS_ POR_ ENTRE_ 
%token  NOT_ INC_ DEC_ ASIG_ TRUE_ FALSE_ 

%token <ident> ID_ STRUCT_
%token <cent> CTE_
%type <lista> listParamAct listParamForm paramForm
%type <cent> tipoSimp opLogic opIgual opRel opAd opMul opUna opIncre listDecla decla 
                  listCamp instEntSal instSelec declaFunc
%type <texp> expre expreLogic expreIgual expreRel expreAd expreMul expreUna expreSufi const
%%

programa 
            : {dvar = 0; niv = 0; cargaContexto(niv); } 
            listDecla 
            { 
            SIMB sim = obtTdS("main\0");
            if (sim.t == T_ERROR){
                  yyerror("El programa no tiene 'main'");
            };
            
            if(verTdS) mostrarTdS();
            
            }
            ;
listDecla   : decla { $$ = $1;}
            | listDecla decla { $$ = $1 + $2;}
            ;
decla       : declaVar { $$ = 0;}
            | declaFunc { $$ = $1;}
            ;
declaVar    : tipoSimp ID_ PYC_ 

                  { if ( ! insTdS($2, VARIABLE, $1, niv, dvar, 0) )
                        yyerror ("Identificador repetido");
                        else dvar += TALLA_TIPO_SIMPLE;
                        }

            | tipoSimp ID_ CORA_ CTE_ CORC_ PYC_

            { int numelem = $4;
                  if ($4 <= 0) 
                  { 
                  yyerror("Talla inapropiada del array");
                  numelem = 0;
                  }
                  int refe = insTdA($1, numelem);
                  if ( ! insTdS($2, VARIABLE, T_ARRAY, niv, dvar, refe) )
                  yyerror ("Identificador repetido");
                  else dvar += numelem * TALLA_TIPO_SIMPLE;
                  }

            | STRUCT_ LLAVEA_ listCamp LLAVEC_ ID_ PYC_



            ;
tipoSimp    : INT_   { $$ = T_ENTERO; }
            | BOOL_ { $$ = T_LOGICO; }
            ;
listCamp    : tipoSimp ID_ PYC_
                  { if ( ! insTdS($2, NULO, $1, niv, dvar, 0) )
                        yyerror ("Identificador repetido");
                        else dvar += TALLA_TIPO_SIMPLE;}
            | listCamp tipoSimp ID_ PYC_
            ;
declaFunc   : tipoSimp ID_ { niv++; cargaContexto(niv); } PARA_ paramForm PARC_ 

                  { 
                        if ( ! insTdS($2, FUNCION, $1, niv, 0, $5.ref) )
                        {yyerror ("Ya existe esta funcion");}
                        
                  }

            LLAVEA_ declaVarLocal listInst RETURN_ expre PYC_ LLAVEC_

            ;
paramForm   : 
            {
               $$.ref = insTdD(-1, T_VACIO);   
               $$.talla = 0;
            }
            | listParamForm

            {
                  $$.ref = $1.ref;
                  $$.talla = $1.talla;

            }
            ;
listParamForm : tipoSimp ID_
            {
                  $$.ref = insTdD(-1, $1);
                  $$.talla = TALLA_TIPO_SIMPLE + TALLA_SEGENLACES;
                  if ( ! insTdS($2, PARAMETRO, $1, niv, 0, $$.ref) )
                        yyerror ("Ya existe este parametro");
            }

            | tipoSimp ID_ COMA_ listParamForm
            {
                  $$.ref = insTdD($4.ref, $1);
                  $$.talla = TALLA_TIPO_SIMPLE + $4.talla;
            }
            ;
declaVarLocal : 
              | declaVarLocal declaVar
              ;
listInst    :
            | listInst inst
            ;
inst        : LLAVEA_ listInst LLAVEC_ 
            | instExpre
            | instEntSal
            | instSelec
            | instIter
            ;
instExpre   : expre PYC_
            | PYC_
            ;
instEntSal   : READ_ PARA_ ID_ PARC_ PYC_ 
                    {
                        SIMB sim = obtTdS($3);
                        if (sim.t != T_ENTERO) {
                            yyerror("El argumento del 'read' debe ser 'entero'");
                        }
                    }
            | PRINT_ PARA_ expre PARC_ PYC_
                    {
                        if ($3.t != T_ERROR && $3.t != T_ENTERO) {
                            yyerror("La expresion del 'print' debe ser 'entera'");
                        }
                    }
            ;
instSelec   : IF_ PARA_ expre PARC_ inst ELSE_ inst
                    {
                        if ($3.t != T_ERROR)
                            if ($3.t != T_LOGICO) yyerror("La expresion de evaluacion del \"if\" debe ser de tipo logico.");
                    }
             ;
instIter    : WHILE_ PARA_ expre PARC_ 

            {
                        if ($3.t != T_ERROR)
                            if ($3.t != T_LOGICO) yyerror("La expresion del 'while' debe ser 'logica'.");
            }

            inst
                    
            ;
expre       : expreLogic {$$.t = $1.t;}
            | ID_ ASIG_ expre

            {
                SIMB sim = obtTdS($1);
                if (sim.t == T_ERROR) {
                    yyerror("Objeto no declarado");
                } else if (sim.t != $3.t)
                {
                    // Verifica si ya hubo un error en $1 o $3
                    if (sim.t != T_ERROR && $3.t != T_ERROR)
                    {
                        yyerror("El identificador debe ser de tipo simple");
                    }
                }
            }


            | ID_ CORA_ expre CORC_ ASIG_ expre
            {
			    SIMB sim = obtTdS($1); DIM dim;
			    
                if (sim.t != T_ARRAY) {
                    yyerror("La variable debe ser de tipo array.");
                } else {
                    dim = obtTdA(sim.ref);
                }
                
			    if ($3.t != T_ERROR && $6.t != T_ERROR) {                    
                    if (sim.t == T_ERROR) {
                        yyerror("No existe ninguna variable con ese identificador.");
                    } else if (! ($3.t == T_ENTERO)) {
                        yyerror("El indice del array debe ser un entero");
                    } else if (! ($6.t == dim.telem)) { 
                        yyerror("Error de tipos en la asignacion de un array"); 
                    }                      
                }
		    }

            | ID_ PUNTO_ ID_ ASIG_ expre
            ;
expreLogic  : expreIgual        {$$.t = $1.t;}
            | expreLogic opLogic expreIgual
                    {
                        $$.t = T_ERROR;
                        if ($1.t != T_ERROR || $3.t != T_ERROR) {
                            if (!($1.t == $3.t && $1.t == T_LOGICO)) {
                                yyerror("Error en la 'expresion logica'.");
                            } else {
                                $$.t = T_LOGICO;
                            }
                        }
                    }
            ;
expreIgual  : expreRel      {$$.t = $1.t;}
            | expreIgual opIgual expreRel
                    {	
                        $$.t = T_ERROR;
                        
                        if ($1.t != T_ERROR && $3.t != T_ERROR) {
                            if ($1.t != $3.t) {
                                yyerror("Error en 'expresion de igualdad'.");
                            } else if ($3.t != T_LOGICO || $3.t != T_ENTERO) { 
                                yyerror("Incompatibilidad de tipos, deben ser expresiones logicas o de enteros3.");
                            }  else {
                                $$.t = T_LOGICO;
                            }
                        } 
                    }
            ;
expreRel    : expreAd       {$$.t = $1.t;}
            | expreRel opRel expreAd
                    {
                        $$.t = T_ERROR;
                        if ($1.t != T_ERROR && $3.t != T_ERROR){
                            if (!($1.t == $3.t && $1.t == T_ENTERO)) {
                                yyerror("Error en 'expresion relacional'.");
                            } else {
                                $$.t = T_LOGICO;
                            }
                        }
                    }
            ;
expreAd     : expreMul        {$$.t = $1.t;}
            | expreAd opAd expreMul
                    {
                        $$.t = T_ERROR;
                        if ($1.t != T_ERROR && $3.t != T_ERROR) {
                            if (!($1.t == $3.t && $1.t == T_ENTERO)) {
                                yyerror("Error de tipos en 'expresion aditiva'.");
                            } else {
                                $$.t = T_ENTERO;
                            }
                        }
                    }
            ;
expreMul    : expreUna  {$$.t = $1.t;}
            | expreMul opMul expreUna
                    {
                        $$.t = T_ERROR;
                        if ($1.t != T_ERROR && $3.t != T_ERROR) {
                            if (!($1.t == $3.t && $1.t == T_ENTERO)) {
                                yyerror("Error de tipos en 'expresion multiplicativa'. ");
                            } else {
                                $$.t = T_ENTERO;
                            } 
                        }
                    }
            ;  
expreUna    : expreSufi { $$ = $1; }
            | opUna expreUna

            {  
                  $$.t = T_ERROR;
                  if ($2.t != T_ERROR) {
                        if ($2.t == T_ENTERO) {                                                                         
                              if ($1 == OP_NOT) {
                              yyerror("Error en 'expresion unaria' - no se puede negar un entero.");
                              } else { 
                              $$.t = T_ENTERO; 
                              }
                        } else if ($2.t == T_LOGICO) {                                                                  
                              if ($1 == OP_MAS || $1 == OP_MENOS) {
                              yyerror("Error en 'expresion unaria' - no podemos aplicar operaciones + o - a booleanos");
                              } else { 
                              $$.t = T_LOGICO;
                              }
                        } else {
                              yyerror("Incompatibilidad de tipos, no son el mismo tipo o no son equivalentes5.");
                        }                                                               
                  } 
            }
            | opIncre ID_
            {
                SIMB sim = obtTdS($2);
                if (sim.t != T_ENTERO) {
                    yyerror("Error en operador prefijo.");
                }
            }
            ;
expreSufi   : const { $$ = $1; }
            | PARA_ expre PARC_ {$$.t = $2.t;}
            | ID_
                  {
                  SIMB sim = obtTdS($1);
                  $$.t = T_ERROR;
                  if (sim.t == T_ERROR) {
                        yyerror("No existe ninguna variable con ese identificador.");
                  } else { 
                        $$.t = sim.t;
                  }
                  }
            | ID_ opIncre
            {
                SIMB sim = obtTdS($1);
                if (sim.t != T_ENTERO) {
                    yyerror("El identificador debe ser entero.");
                }
            }
            | ID_ PUNTO_ ID_
            | ID_ CORA_ expre CORC_
            {
                SIMB sim = obtTdS($1);
                if (sim.t == T_ERROR) {
                    yyerror("No existe ninguna variable con ese identificador.");
                } else if (sim.t != T_ARRAY) {
                    yyerror("El identificador no es de tipo array.");
                } else {
                    // Verificar si la expresion (indice) es de tipo entero.
                    if ($3.t != T_ENTERO) {
                        yyerror("La expresion dentro de los corchetes debe ser de tipo entero.");
                    } else 
                        { 
                            $$.t = T_ENTERO;  // Tipo del elemento del array.
                        }
                    
                }
            }
            | ID_ PARA_ paramAct PARC_
            ;
const       : CTE_  {$$.t = T_ENTERO; $$.v = $1;}
            | TRUE_ {$$.t = T_LOGICO; $$.v = TRUE;}
            | FALSE_ {$$.t = T_LOGICO; $$.v = FALSE;}
            ;
paramAct    : 
            | listParamAct
            ;
listParamAct : expre
             | expre COMA_ listParamAct
             ;
opLogic     : AND_    {$$ = OP_AND;}
            | OR_     {$$ = OP_OR;}
            ;
opIgual     : IG_     {$$ = OP_IG;}
            | DESIG_  {$$ = OP_DESIG;}
            ;
opRel       : MEN_      {$$ = OP_MEN;}
            | MAY_      {$$ = OP_MAY;}
            | MAIG_     {$$ = OP_MAIG;}
            | MEIG_     {$$ = OP_MEIG;}
            ;
opAd  : MAS_       {$$ = OP_MAS;}
            | MENOS_     {$$ = OP_MENOS;}
            ;
opMul       : POR_      {$$ = OP_POR;}
            | ENTRE_    {$$ = OP_ENTRE;}
            ;
opUna       : MAS_      {$$ = OP_MAS;}
            | MENOS_    {$$ = OP_MENOS;}
            | NOT_      {$$ = OP_NOT;}
            ;
opIncre     : INC_    {$$ = OP_INC;}
            | DEC_    {$$ = OP_DEC;}
            ;


%%
