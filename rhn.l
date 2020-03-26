
digit [0-9]
space [" "]

%{
	#include<stdio.h>
	#include "rhn.tab.h"
	#include<stdlib.h>
	#include <math.h>

	extern int yylval;
	char str[100];
	char sym2d[100][100];
	int i,cnt=0;
%}




%%
"void_main"	                 { return MAIN; }
"function"                           { return FUNC_DEC; }
"$_int_$"{space}"function"           { return FUNC_DEF; }

"if"		{ return IF;}
"else"		{ return ELSE;}
"then"		{ return THEN;}

"$_int_$"		{ return INT; }
"$_float_$"	{ return FLOAT; }
"$_char_$"		{ return CHAR; }

{digit}+	{ 
				yylval = atoi(yytext);
				return NUM;
			}

","			{ return COMMA; }
"<br>"			{ return BRK_LINE; }
":"			{ return COLON; }


"("		{ return LP; }
")"		{ return RP; }
"{{"		{ return START; }
"}}"		{ return END; }


"+"		{ return PLUS; }
"-"		{ return MINUS; }
"*"		{ return MULT; }
"/"		{ return DIV; }


":="	{ return ASSIGN;  }

">"		{ return GT; }
"<"		{ return LT; }
">="		{ return GE; }
"<="		{ return LE; }
"="		    { return EQUAL; }
"++"		{ return INC; }

"!" { return FACTORIAL; }
"^" { return POW; }

"while"  {return WHILE; }
"for"		{ return FOR; }
"print"  {return PRINT;}


[a-z]		{
				yylval = *yytext - 'a';
				return	VAR;
			}


[a-z]+[0-9]		{
				yylval = *yytext - 'a';
				return	NAME;
			}	
		

[a-z][a-z]+ {
				for(i=0;i<yyleng;i++) sym2d[cnt][i] = yytext[i];
				cnt++;
				return VAR1;
			}			


[ \t\n]*	;

"//"(.)*"\n" { printf("Comment Line\n");}


%%

/* user subroutines */

int main()
{
	
	yyin = freopen("input.txt","r",stdin);
	yyout = freopen("output.txt","w",stdout);
	yyparse();
}

