#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//gcc nome.c -o nome -lm
//para rodar ./nome

int main()
{
	int Q, H,M,O, cont;
	scanf("%d", &Q);
	
	for(cont=1;cont<=Q;cont++){
		scanf("%d %d %d", &H, &M,&O);
		if (O==1){
			printf("%02d:%02d - A porta abriu!\n", H,M);
		}
		if (O==0){
			printf("%02d:%02d - A porta fechou!\n", H,M);	
		}
	}
	return 0;
}