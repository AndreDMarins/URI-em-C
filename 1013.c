#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//gcc nome.c -o nome -lm
//para rodar ./nome

int main()
{
	int A, B, C, MaiorAB, Maior;
	scanf("%d %d %d", &A, &B, &C);
	MaiorAB=(A+B+abs(A-B))/2;
	Maior=(MaiorAB+C+abs(MaiorAB-C))/2;
	printf("%i eh o maior\n", Maior);
	
	
	return 0;
}