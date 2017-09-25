#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//gcc nome.c -o nome -lm
//para rodar ./nome

int main()
{
	char Nome[10];
	int C,N,x;
	scanf("%d",&C);
	for(x=1;x<=C;x++){
		scanf("%s %d",&Nome, &N);
		if(strcmp(Nome,"Thor")==0){
			printf("Y\n");
		}
		else{
			printf("N\n");
		}
	}	
	
	return 0;
}