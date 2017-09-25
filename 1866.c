#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//gcc nome.c -o nome -lm
//para rodar ./nome

int main()
{
	int C, N, S=0,x,y;
	scanf ("%d",&C);
	for(x=1;x<=C;x++){
		scanf("%d",&N);
		for(y=1;y<=N;y++){
			if(S==1){
				S=S-1;
			}
			else{
				S=S+1;
			}
		}
	printf("%d\n", S);
	S=0;
	}
	
	
	
	return 0;
}