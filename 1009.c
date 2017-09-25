#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//gcc nome.c -o nome -lm
//para rodar ./nome

int main()
{
	char Nome[10];
	double S, V, T;
	gets(Nome);
	scanf("%lf %lf",&S,&V);
	T=S+(0.15*V);
	printf ("%s\n",Nome);
	printf("TOTAL = R$ %.2lf\n",T);
	

	return 0;
}