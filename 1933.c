#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//gcc nome.c -o nome -lm
//para rodar ./nome

int main()
{
	int A,B;
	scanf ("%d %d", &A,&B);
	if(A>B){
		printf("%d\n",A);
	}
	else{
		printf("%d\n",B);
	}
		
	
	return 0;
}