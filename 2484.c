
//2484 - Abracadabra 

#include <stdio.h>
 
int main() {
 
	char abra[201];
	char palavra[101];
	char transicao[201];
	int cont1, cont2,x,triang;
	
	scanf("%s",palavra);
	
	do{
		transicao[0]='\0';
		triang=strlen(palavra);
		for(cont1=0;cont1<triang;cont1++){
			
			for(cont2=0;cont2<strlen(palavra);cont2++){
				x=cont2*2;
				abra[x]=palavra[cont2];
				if (x>0){
					abra[x-1]=' ';
				}
			}
			abra[x+1]='\0';
			palavra[cont2-1]='\0';
			printf("%s%s\n",transicao,abra);
			strcat(transicao," ");
		
		}
		printf("\n");
		
	}while(scanf("%s", palavra)!=EOF);
	
	
 
    return 0;
}