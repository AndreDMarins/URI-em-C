#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//gcc nome.c -o nome -lm
//para rodar ./nome

int main()
{
	float O,B,I;
	scanf("%f %f %f", &O, &B, &I);
	if(O<B&&O<I){
		printf("Otavio\n");
	}
	if(B<O&&B<I){
		printf("Bruno\n");
	}
	if(I<B&&I<O){
		printf("Ian\n");
	}
	if(O==B||O==I||B==I){
		printf("Empate\n");
	}
	return 0;
}