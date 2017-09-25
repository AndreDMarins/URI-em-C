#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//gcc nome.c -o nome -lm
//para rodar ./nome

int main()
{
	int X;
	double M, E;
	scanf ("%d %lf",&X, &M);
	while(X!=0&&M!=0){
		E=X*M;
		printf("%.0lf\n",E);
		scanf ("%d %lf",&X, &M);
	}
	
	
	return 0;
}