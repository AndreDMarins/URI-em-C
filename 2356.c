//2356 - Bactéria
#include <stdio.h>
 
int main() {
 
	char D[101]="";
	char S[101]="";
	char conf[101];
	char resist[]="Resistente";
	char nresist[]="Nao resistente";
	int tam, cont, cont2,res;
	
	scanf("%s %s",D,S);
	
	do{
		
		tam = strlen(D)-strlen(S);
		
		char conf[101]="";
		
		for(cont=0;cont<=tam;cont++){
		
			for(cont2=0;cont2<strlen(S);cont2++){
				conf[cont2]=D[cont2+cont];
			}
		
			conf[cont2+1]='\0';	
			
			if(strcmp(conf,S)==0){
				res=1;
			}
		}
		if(res==1){
			printf("%s\n",resist);
			res=0;
		}
		else{
			printf("%s\n",nresist);
		}
	}while(scanf("%s %s",D,S)!=EOF);
	

    return 0;
}