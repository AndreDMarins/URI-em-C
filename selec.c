#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//gcc nome.c -o nome -lm
//para rodar ./nome

int main(void){
	int numeros[5001];
	int cont1, cont2, menor, aux;
	
	cont1=0;
	while(cont1<5000){
		scanf("%d",&numeros[cont1]);
		cont1++;
	}
	cont1=0;
	while(cont1<5000){
		menor=cont1;
		cont2=cont1+1;
		while(cont2<5000){
			if(numeros[cont2]<numeros[menor]){
				menor=cont2;
			}
			cont2=cont2+1;
			
		}
		aux=numeros[cont1];
		numeros[cont1]=numeros[menor];
		numeros[menor]=aux;
		cont1++;
	}
	cont1=0;
	while (cont1<5000){
		printf("%d ",numeros[cont1]);
		cont1++;
	}
	return 0;
}