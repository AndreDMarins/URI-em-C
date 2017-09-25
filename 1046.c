#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
	int inicio, fim, duracao;
	scanf("%d%d",&inicio, &fim);
	if(fim==0)
		fim=24;
	if((inicio>12)&&(inicio<=24))
	{
		duracao=(24-inicio)+fim;
		printf("O JOGO DUROU %d HORA(S)\n",duracao);
	}
	else
		if((inicio>=0)&&(inicio<=12))
	{
		duracao =(fim-inicio);
		if (duracao<0){
			printf("O JOGO DUROU %d HORA(S)\n",-duracao);
		}
		else 
			printf("O JOGO DUROU %d HORA(S)\n",duracao);
	}
	
	
	return 0;
	
}