#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//gcc nome.c -o nome -lm
//para rodar ./nome

int main()
{
	int N, S;
	while(scanf("%d",&N)!=EOF){
		S=N-1;
		printf("%d\n",S);
	}
	return 0;
}