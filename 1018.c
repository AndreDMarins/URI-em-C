#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//gcc nome.c -o nome -lm
//para rodar ./nome

int main()
{
	int Valor, Ncem,Ncinq,Nvin,Ndez,Ncinc,Ndois,Num,X;
	scanf("%d",&Valor);
	X=Valor;
	Ncem = Valor/100;
	Valor = Valor%100;
	Ncinq = Valor/50;
	Valor = Valor%50;
	Nvin = Valor/20;
	Valor=Valor%20;
	Ndez=Valor/10;
	Valor=Valor%10;
	Ncinc=Valor/5;
	Valor=Valor%5;
	Ndois=Valor/2;
	Valor=Valor%2;
	Num=Valor/1;
	
	printf("%d\n",X);
	printf("%d nota(s) de R$ 100,00\n",Ncem);
	printf("%d nota(s) de R$ 50,00\n",Ncinq);
	printf("%d nota(s) de R$ 20,00\n",Nvin);
	printf("%d nota(s) de R$ 10,00\n",Ndez);
	printf("%d nota(s) de R$ 5,00\n",Ncinc);
	printf("%d nota(s) de R$ 2,00\n",Ndois);
	printf("%d nota(s) de R$ 1,00\n",Num);
	
	return 0;
}