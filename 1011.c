#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//gcc nome.c -o nome -lm
//para rodar ./nome

int main()
{
	float R;
	double V;
	
	scanf("%f",&R);
	V=(4/3.0)*3.14159*pow(R,3);
	printf("VOLUME = %.3lf\n",V);
	
	
	return 0;
}