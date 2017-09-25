#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//gcc nome.c -o nome -lm
//para rodar ./nome

int main()
{
	float A,B,C,At, Ac,Atra,Aq,Ar;
	scanf("%f %f %f", &A, &B, &C);
	At=(A*C)/2;
	Ac=(3.14159*pow(C,2));
	Atra=((A+B)*C)/2;
	Aq=B*B;
	Ar=A*B;
	printf("TRIANGULO: %0.3f\n",At);
	printf("CIRCULO: %0.3f\n",Ac);
	printf("TRAPEZIO: %0.3f\n",Atra);
	printf("QUADRADO: %0.3f\n",Aq);
	printf("RETANGULO: %0.3f\n",Ar);
	
	return 0;
}