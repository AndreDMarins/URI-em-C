#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//gcc nome.c -o nome -lm
//para rodar ./nome

int main()
{
	int cod1, cod2, p1 ,p2;
	float Total,Val1, Val2;
	scanf("%d %d %f", &cod1, &p1, &Val1);
	scanf("%d %d %f", &cod2, &p2, &Val2);
	
	Total=(Val1*p1)+(Val2*p2);
	printf("VALOR A PAGAR: R$ %0.2f\n",Total);
	
	return 0;
}