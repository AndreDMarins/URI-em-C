#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//gcc nome.c -o nome -lm
//para rodar ./nome

int main (void){
	
	int numeros[20];
	int cont, aux, troca;
	
	cont =0;
	
	while(cont<=19){
		scanf("%d", &numeros[cont]);
		cont++;
	}
	for(int i=0;i<=19;i++){	
		do{
			troca=0;
			cont=0;
			while(cont<=19){
				if (numeros[cont]>numeros[cont+1]){
					aux =numeros[cont];
					numeros[cont]=numeros[cont+1];
					numeros[cont+1]=aux;
					
					troca=1;
					
				}
				cont++;
			}
		}while(troca=0);
	}
	cont=0;
	printf("\n");
	while(cont<=19){
		printf("%d ", numeros[cont]);
		cont++;
	}
	return 0;
	
}