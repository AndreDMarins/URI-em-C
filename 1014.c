#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//gcc nome.c -o nome -lm
//para rodar ./nome

int main()
{
	int X;
	float Y,C;
	scanf ("%d %f", &X,&Y);
	C=X/Y;
	printf("%0.3f km/l\n",C);
	
	return 0;
}