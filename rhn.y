/* C Declarations */

%{
	#include<stdio.h>
	
	extern char sym2d[100][100];
	#include <math.h>
	int indx=0,t=1,z=0;
	extern int cnt;
	int sym[26],store[26];
	int flag=1,val,i,j,count=0;
	
		
%}

/* BISON Declarations */

%token MAIN INT STR FLOAT CHAR NUM VAR VAR1 COMMA BRK_LINE FOR WHILE  COLON DEFAULT  CASE THEN IF ELSE SWITCH  LP RP START END  PRINT PLUS MINUS MULT DIV ASSIGN GT LT GE LE EQUAL INC FACTORIAL POW FUNC_DEC FUNC_DEF NAME
%nonassoc IFX
%nonassoc ELSE
%left LT GT
%left VAR
%left PLUS MINUS
%left MULT DIV
%left FACTORIAL
%left POW


	
/* Simple grammar rules */

%%

program		: MAIN LP RP START contents FUNC_CALL END  { printf("\nsuccessfully compiled\n"); }
			;


FUNC_CALL :       ;
               | FUNC_DEF NAME LP RP START FUNC_BODY END  { printf("\nFunction successfully executed\n"); }
               ;

contents: /* empty */
			| contents statement
			| contents declaration
			| contents if_else_for_while
			| contents function
			
			;


function   :  FUNC_DEC NAME LP RP  { printf("\nUser defined function  is called");  printf("\n"); }
                                                      
           ;

	
declaration: TYPE Variable BRK_LINE	{ printf("valid declaration\n");  printf("\n"); }
			;
			
TYPE 		: INT | FLOAT | CHAR ;



FUNC_BODY  :   NUM BRK_LINE {
					      
					      if($1%2 == 0)
					       {
					           printf("\nNumber %d is EVEN ",$1);
					           printf("\n");
					       }
					       else{
					       printf("\nNumber %d is ODD ",$1);
					       printf("\n");
					       }
					 }
				 ;	
				
Variable 	: VariableRepeat COMMA Variable | VariableRepeat ;
			
VariableRepeat		: VAR			{
										if(store[$1] == 1) printf("Variable %c Redeclared\n",$1+'a');
										else store[$1]=1;
									}
									
			| VAR1					{
										
									
										for(i=0; i<cnt-1; i++)
										{	
											
											for( j=0; sym2d[cnt-1][j]!='\0'; j++)
											{
												
												if(sym2d[i][j] == sym2d[cnt-1][j])
												{
													count++;
												}
									
											}
											
											if(count == j && sym2d[i][j]=='\0' && sym2d[cnt-1][j]=='\0'){
												
												printf("variable %s is Redeclared \n",sym2d[cnt-1]);
												 printf("\n");
											}
											count=0;
																					
										}
									
										
										
									}
									
			| VAR1 ASSIGN NUM 		{
										if(cnt<2)           
										{
											char c = (char) $3;
											sym2d[indx][99]=c;
											int i = (int) c;
											
											indx++;
											
										}
										
										
										for(i=0; i<cnt-1; i++) 
										{	
											
											for( j=0; sym2d[cnt-1][j]!='\0'; j++)
											{
												
												if(sym2d[i][j] == sym2d[cnt-1][j])
												{
													count++;
												}
									
											}
											
											
											if(count == j && sym2d[i][j]=='\0' && sym2d[cnt-1][j]=='\0')
											{
												
												printf("variable %s is Redeclared \n",sym2d[cnt-1]);
												 printf("\n");
												t=0;
											}
											
											count=0;
											
										}
									
										
										
										if(t&&cnt>1)
										{
											
											char c = (char) $3;
											sym2d[indx][99]=c;
											int i = (int) c;
											indx++;
										}
										
										if(t)printf("\nValue of the %s = %d\t\n",sym2d[cnt-1],sym2d[cnt-1][99]);
										 printf("\n");
										
									}						
									
									
			| VAR ASSIGN NUM 		{ 	
										if(store[$1] == 1) printf("variable %c Redeclared\n",$1+'a');
										else store[$1]=1;
										sym[$1] = $3; 
										printf("\nValue of the %c = %d\t\n",$1+'a',$3);
										 printf("\n");
									}
			;
			
if_else_for_while  	: IF LP Expresssion RP COLON START Expresssion END %prec IFX	{	
								
								if($3)
								{
									printf("\nvalue of Expresssion in if: %d\n",$7);

								}
								
								else
								{
									printf("condition value zero in IF block\n");
								}								}
															
			|IF LP Expresssion RP COLON START IF LP Expresssion RP COLON START Expresssion END ELSE COLON START Expresssion END END ELSE COLON START Expresssion END
									{
								    if($3)
									{
									   if($9)
									   { printf("\nvalue of Expresssion in if if: %d\n",$13); }
									   else
									   { printf("\nvalue of Expresssion in if else: %d\n",$18); }
									}
									else
									{
										printf("\nvalue of Expresssion in only else: %d\n",$24);
									}
									
								
									}

			|IF LP Expresssion RP COLON START Expresssion END ELSE COLON START IF LP Expresssion RP COLON START Expresssion END ELSE COLON START Expresssion END END
									{
								    if($3)
									{
										 printf("\nvalue of Expresssion in only if: %d\n",$7); 
									}
									else
									{
									   if($14)
									   { printf("\nvalue of Expresssion in else if: %d\n",$18); }
									   else
									   { printf("\nvalue of Expresssion in else else: %d\n",$23); }
									}
									
								
									}


		    | NUM FACTORIAL {
						int mult=1 ,i;
						for(i=$1;i>0;i--)
						{
							mult=mult*i;
						}
						$$=mult;
						printf("factorial value %d!\n",$$); 
					 }	
			
			| FOR LP VAR ASSIGN NUM COMMA VAR LE NUM COMMA VAR INC RP START if_else_for_while END 	{
																					printf("\nIn Loop:\n");
																					for( sym[$3]=$5; sym[$3] <= $9; sym[$3]++)
																					{
																						printf("%d",$15);
																						printf("\n");

																						
																					}printf("\n");
																				
																				}
			| WHILE LP VAR LT NUM RP COLON START if_else_for_while VAR INC BRK_LINE END    {
																					printf("\nWhile loop : \n");
																					while(sym[$3]<$5){
																					printf("%d\n",$9);
																					sym[$3]++;
																					 }
																					}
		    | PRINT LP VAR RP BRK_LINE          { printf("Print is called and value is : %d\n",sym[$3]); }
			
						
			|Expresssion BRK_LINE;
			

			
statement	: BRK_LINE
			| Expresssion BRK_LINE 				{ printf("\nValue of Expresssionession: %d\n", $1); }
			| VAR ASSIGN Expresssion BRK_LINE 	{
										sym[$1] = $3; 
									
										if(store[$1]!=1)printf("'%c' is not declared!!",$1+'a');
										printf("\n");
										//printf("\nValue of the %c = %d\t\n",$1+'a',$3);
									}
			
			;
	
Expresssion 		: VAR					{ $$ = sym[$1]; } 
			| Expresssion LT Expresssion	{ $$ = $1 < $3; }

	        | Expresssion GT Expresssion	{ $$ = $1 > $3; }
			| Expresssion MULT Expresssion			{ $$ = $1 * $3; }
			| Expresssion DIV Expresssion		{ 
										if($3) 
										{
												$$ = $1 / $3;
										}
										else
										{
											$$ = 0;
											printf("\ndivision by zero\t");
										}
									}
			|Expresssion PLUS Expresssion		{ $$ = $1 + $3; }
			|Expresssion MINUS Expresssion		{ $$ = $1 - $3; }
			
					 
			| Expresssion POW Expresssion { 
			                                       $$=pow($1,$3); printf("To the power value %d\n",$$);
			                                        printf("\n"); }				 

	
			|term
			 ;
			 
term 		: factor 
			;
			
factor 		: digit					{ $$ = $1; }
			|LP Expresssion RP				{ $$ = $2; }
			;
			
digit 		: NUM	    			{ $$ = $1; }
			;




			
%%

int yywrap()
{
return 1;
}


yyerror(char *s){
	printf( "%s\n", s);
}

