#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//gcc nome.c -o nome -lm
//para rodar ./nome

int main()
{
	int Hr, Nfunc;
	float Vhr, Sal;
	scanf ("%i %i %f", &Nfunc, &Hr, &Vhr);
	Sal=Hr*Vhr;
	printf("NUMBER = %i\n",Nfunc);
	printf("SALARY = U$ %0.2f\n",Sal);
	
	return 0;
}