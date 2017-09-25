#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//gcc nome.c -o nome -lm
//para rodar ./nome

int main()
{
	int T1,T2,T3,T4,Ti;
	scanf("%d %d %d %d", &T1, &T2, &T3,&T4);
	Ti=T1+T2+T3+T4-3;
	printf("%d\n",Ti);
	
	return 0;
}