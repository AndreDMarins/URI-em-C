#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{

	char dic[37][20]={"=.===","===.=.=.=","===.=.===.=","===.=.=","=","=.=.===.=","===.===.=","=.=.=.=","=.=","=.===.===.===","===.===","=.===.=.=","===.===","===.=","===.===.===","=.===.===.=","===.===.=.===","=.===.=","=.=.=","===","=.=.===","=.=.=.===","=.===.===","===.=.=.===","===.=.===","===.===.=.=","=.===.===.===.===","=.=.===.===.===","=.=.=.===.===","=.=.=.=.===","===.===.===.===.===","===.=.=.=.=","===.===.=.=.=","===.===.===.=.=","===.===.===.===.=","===.===.===.===.==="};
	char letra[37][2]={"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z","1","2","3","4","5","6","7","8","9","0"};
	char morse[1001], trad[501], letrat[51], carac,letram[51];
	int cont, y;
	
		scanf("%s", morse);
		
		for(y=0;y<strlen(morse);y++){
		
			strcat(carac,letram);
			
		}
		
		for(cont=0;cont<36;cont++){ //compara a letra com a matriz de dicionário posição a posição
		
						stpcpy(letrat,dic[cont]);
			
						printf("%s\n", letrat); // verifica se o cod morse na mem foi para a matriz p comparar **teste lemrar de tirar
		
						if (strcmp(morse,letrat)==0){
							strcat(trad,letrat);
							printf("Letra %c\n", letra[cont]);// imprime a letra encontrada *** teste, lembrar de tirar
						
							break;
						}
					
					}//fecha cont
	
	return 0;
}