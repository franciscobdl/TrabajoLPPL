/*****************************************************************************/
/**  Ejemplo de FLEX: S E M - 1           2023-2024 <jmbenedi@prhlt.upv.es> **/
/*****************************************************************************/
%{
#include <stdio.h>
#include <string.h>
#include "header.h"
#include "asin.h"

#define  retornar(x) {if (verbosidad) ECHO; return x; }
%}
/*-----------------------------------------------------------------------------
  Estas opciones evitan "warnings" innecesarios y permiten obtener el
  numero de linea actual en la variable global "yylineno".
-----------------------------------------------------------------------------*/
%option noinput       
%option nounput       
%option yylineno  

delimitador    [ \t\n]+
digito         [0-9]
entero         {digito}+
letra          [a-zA-Z]
identificador  {letra}({letra}|{digito}|_)*
constante      {entero}|{entero}"."|"."{entero}|{entero}"."{entero}
comentario     "//".*


%%
{delimitador}   { if (verbosidad) ECHO; }
{comentario}    { if (verbosidad) ECHO; }


"struct"        { retornar (STRUCT_);   }
"int"           { retornar (INT_);      }
"bool"          { retornar (BOOL_);     }
"return"        { retornar (RETURN_);   }
"read"          { retornar (READ_);     }
"print"         { retornar (PRINT_);    }
"if"            { retornar (IF_);       }
"else"          { retornar (ELSE_);     }
"while"         { retornar (WHILE_);    }
"true"          { retornar (TRUE_);     }
"false"         { retornar (FALSE_);    }

"("             { retornar (PARA_);     }
")"             { retornar (PARC_);     }
"["             { retornar (CORA_);     }
"]"             { retornar (CORC_);     }
"{"             { retornar (LLAVEA_);   }
"}"             { retornar (LLAVEC_);   }
";"             { retornar (PYC_);      }
","             { retornar (COMA_);     }
"."             { retornar (PUNTO_);    }

"&&"            { retornar (AND_);      }
"||"            { retornar (OR_);       }
"=="            { retornar (IG_);       }
"!="            { retornar (DESIG_);    }
">"             { retornar (MAY_);      }
"<"             { retornar (MEN_);      }
">="            { retornar (MAIG_);     }
"<="            { retornar (MEIG_);     }
"+"	            { retornar (MAS_);      }
"-"             { retornar (MENOS_);    }
"*"             { retornar (POR_);      }
"/"             { retornar (ENTRE_);    }
"!"             { retornar (NOT_);      }
"++"            { retornar (INC_);      }
"--"            { retornar (DEC_);      }
"="             { retornar (ASIG_);     }

{constante}		  	{ yylval.cent = atoi(yytext); retornar(CTE_); }
{identificador}		{ yylval.ident = strdup(yytext); retornar(ID_);}

.	              { yyerror("Caracter desconocido"); }

%%
/*****************************************************************************/
