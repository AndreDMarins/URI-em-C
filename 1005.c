#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//gcc nome.c -o nome -lm
//para rodar ./nome

int main()
{
	double MEDIA, A,B;
	scanf("%lf %lf", &A, &B);
	A=(A/11)*10*0.35;
	B=(B/11)*10*0.75;
	MEDIA=A+B;

	printf("MEDIA = %0.5lf\n",MEDIA);
	return 0;
}