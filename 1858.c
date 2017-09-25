#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//gcc nome.c -o nome -lm
//para rodar ./nome

int main()
{
	int N, T[100], Ti[100],x,y,P=0;
	scanf("%d", &N);
	for(x=0;x<N;x++){
		scanf("%d",&T[x]);
		Ti[x]=T[x];
	}
	for(x=0;x<N;x++){
		for(y=0;y<N;y++){
			if(T[x]<=Ti[y]&&T[x]<T[P]){
				if(T[x]<=T[P]){
						P=x;
					}
				
			}
		}
	}
	P=P+1;
	printf("%d\n", P);
	
	return 0;
}