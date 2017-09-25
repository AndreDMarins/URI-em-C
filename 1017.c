#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//gcc nome.c -o nome -lm
//para rodar ./nome

int main()
{
	int Hr, Vel;
	float Lt;
	scanf("%d %d", &Hr, &Vel);
	Lt=(Hr*Vel)/12.0;
	printf("%0.3f\n",Lt);
	
	return 0;
}