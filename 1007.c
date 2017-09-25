#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//gcc nome.c -o nome -lm
//para rodar ./nome

int main()
{
	float A,B,C,D,Dif;
	scanf("%f %f %f %f", &A,&B,&C,&D);
	Dif=(A*B-C*D);
	printf("DIFERENCA = %.0f\n",Dif);
	
	
	return 0;
}