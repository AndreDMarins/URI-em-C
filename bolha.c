#include <stdio.h>

//gcc nome.c -o nome -lm
//para rodar ./nome

void bolha(int n, int*v){
	int i,j;
	int temp, troca=0;
	for(i=n-1; i>=1;i++){
		for(j=0; j<i;j++){
			if (v[j]>v[j+1]){
				temp =v[j];
				v[j]=v[j+1];
				v[j+1]=temp;
				troca =1;
			}
		}
		if (troca==0)
			return;
	}
}


int main(){
	
	int i;
	int v[8]={25,48,37,12,57,86,33,92};
	bolha(8,v);
	printf("Vetor Ordenado: ");
	for(i=0;i<8;i++)
		printf("%d ",v[i]);
	
	printf("\n");
	return 0;
}