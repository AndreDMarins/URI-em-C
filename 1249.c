//1249 - Rot13
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main (){

	int i,j,cont;
	char Alfabeto[]={"abcdefghijklmnopqrstuvwxyz"};
	char AlfabetoM[]={"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char Texto[100],TextoCodificado[100];
	
	while(fgets(Texto,100,stdin)){
		Texto[strlen(Texto)-1]='\0';
		for(i=0; i<strlen(Texto);i++){
			for(j=0; j<strlen(Alfabeto); j++){
				if(Texto[i] == Alfabeto[j] || Texto[i]==AlfabetoM[j]){
					cont=j+13;
					if(cont>25)
						cont=cont-26;
						
				}
			}
			if(Texto[i]>='a' && Texto[i]<='z')
				Texto[i]=Alfabeto[cont];				
			if(Texto[i]>='A' && Texto[i]<='Z')
				Texto[i]=AlfabetoM[cont];
			else
				Texto[i]=Texto[i];
		}
		Texto[i]='\0';
		printf("%s\n", Texto);
	}
	
	return 0;
}