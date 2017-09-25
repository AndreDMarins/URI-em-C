#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main (){
	int J,Z,N=1,Cofre,Teste=0,cont;
	scanf("%d",&N);
	while(N!=0){
		Teste++;
		printf("Teste %d\n",Teste);
		Cofre=0;
		for(cont=1;cont<=N;cont++){
			scanf ("%d %d", &J,&Z);
			Cofre=Cofre+(J-Z);
			printf("%d\n", Cofre);
		}
		printf("\n");
		scanf("%d",&N);
	}
	
}