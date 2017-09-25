#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char D[101],S[101];
	int i,j,aux;
	scanf("%s",D);
	do
	{
	scanf("%s",S);
	j=0;
	aux=0;
	if(strlen(D)<strlen(S))
	aux=0;
	else
	{
	
		for(i=0;i<strlen(D);i++)
			{
					if(D[i]==S[j])	
					j++;
					else
					j=0;
					if(j==strlen(S))
					{
					aux=1;
					break;	
					}					
			}
	}
	if(aux!=0)
		printf("Resistente\n");
	else
		printf("Nao resistente\n");
	}while(scanf("%s",D)!=EOF);
	
	return 0;
}