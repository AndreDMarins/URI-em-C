#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//gcc nome.c -o nome -lm
//para rodar ./nome

int main()
{
	char classe[20], especie[20],alimento[20];
	char vert[]="vertebrado", invert[]="invertebrado";
	char ave[]="ave",mami[]="mamifero",inse[]="inseto",ane[]="anelideo";
	char carn[]="carnivoro", oni[]="onivoro",herb[]="herbivoro", hema[]="hematofago";
	
	scanf("%s", classe);
	
	if (strcmp(classe,vert)==0){
		scanf("%s", especie);
		if (strcmp(especie,ave)==0){
			scanf("%s", alimento);
			if(strcmp(alimento,carn)==0){
				printf("aguia\n");
			}
			else if(strcmp(alimento,oni)==0){
							printf ("pomba\n");
			}
		}
		else if (strcmp(especie,mami)==0){
			scanf("%s", alimento);
			if(strcmp(alimento,oni)==0){
				printf("homem\n");
			}
			else if(strcmp(alimento,herb)==0){
							printf ("vaca\n");
			}
		}
	}
	else if(strcmp(classe,invert)==0){
		scanf("%s", especie);
		if (strcmp(especie,inse)==0){
			scanf("%s", alimento);
			if(strcmp(alimento,hema)==0){
				printf("pulga\n");
			}
			else if(strcmp(alimento,herb)==0){
							printf ("lagarta\n");
			}
		}
		else if (strcmp(especie,ane)==0){
			scanf("%s", alimento);
			if(strcmp(alimento,hema)==0){
				printf("sanguessuga\n");
			}
			else if(strcmp(alimento,oni)==0){
							printf ("minhoca\n");
			}
		}
	}
	return 0;
}