#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
	int inicio, fim, resultado;
	scanf("%d %d", &inicio, &fim);
	if(fim<inicio){
		fim=fim+24;
		resultado = fim - inicio;
	}
	else if(inicio<fim){
		resultado = fim - inicio;		
	}
	else{
		resultado = 24;
	}
	printf("O JOGO DUROU %d HORA(S)",resultado);
	
	
return 0;
}
