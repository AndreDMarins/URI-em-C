//1871 - Zero vale Zero 
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main (){
/*Declaracao de variaveis*/

int M,N, Soma,i,j;
char NumOut[13];

scanf("%d%d", &M, &N);// Entrada de dados

do{
	Soma= M + N;
	sprintf(NumOut, "%i", Soma);
	
		
	j=0;
	for(i=0;i<strlen(NumOut);i++){
		if(NumOut[i]!='0'){
			NumOut[j]=NumOut[i];
			j++;			
		}		
	}
	NumOut[j]='\0';
	
	printf("%s\n", NumOut);	
	
	scanf("%d%d", &M, &N);	
	
}while (M!=0 && N!=0);

	
	return 0;
}