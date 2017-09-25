#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//gcc nome.c -o nome -lm
//para rodar ./nome

int main()
{
	char dic[37][20]={"=.===","===.=.=.=","===.=.===.=","===.=.=","=","=.=.===.=","===.===.=","=.=.=.=","=.=","=.===.===.===","===.=.===","=.===.=.=","===.===","===.=","===.===.===","=.===.===.=","===.===.=.===","=.===.=","=.=.=","===","=.=.===","=.=.=.===","=.===.===","===.=.=.===","===.=.===.===","===.===.=.=","=.===.===.===.===","=.=.===.===.===","=.=.=.===.===","=.=.=.=.===","===.===.===.===.===","===.=.=.=.=","===.===.=.=.=","===.===.===.=.=","===.===.===.===.=","===.===.===.===.==="};
	char letra[37][2]={"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z","1","2","3","4","5","6","7","8","9","0"};
	char morse[1001], trad[501], letram[51],letrat[51];
	char ponto[]=".", carac[2],espaco[]=" ";
	int pt=0, cont, casos, cont2,teste;
	
	letram[0]='\0';
	letrat[0]='\0';
	
	scanf("%s",morse);
	
	
	for(cont=0;cont<strlen(morse);cont++){
		
		sprintf(carac,"%c",morse[cont]);
		carac[1]='\0';
		printf("%s\n",carac);//teste
		
		if (strcmp(carac,ponto)==0){
			pt++;
			printf("pt vale %d\n", pt);//teste
			if (pt==7){
				
				printf("if pt vale %d\n", pt);//teste
				printf("%s\n", letram);
				for(cont2=0;cont2<36;cont2++){
					
					stpcpy(letrat,dic[cont2]);
					printf("a letra t %s\n ", letrat);
					
						if (strcmp(letrat,letram)==0){
							stpcpy(letrat,letra[cont2]);
							strcat(trad,letrat);
							strcat(trad,espaco);
							printf("%s\n",trad);//
							stpcpy(letram,"");
							break;
						}
						
				}
					
						letram[0]='\0';
						
						pt=0;
				
			}
				
		}
		else{
			if (pt==0){
				printf("if pt vale %d\n", pt);//teste
				strcat(letram,carac);
				printf("letra morse %s",letram);
			}
			else if(pt==1){
				printf("if pt vale %d\n", pt);//teste
				strcat(letram,ponto);
				strcat(letram,carac);
				printf("letra morse %s\n",letram);
				pt=0;
			}
			else if (pt==3){
				
				printf("if pt vale %d\n", pt);//teste
				for(cont2=0;cont2<36;cont2++){
					
					stpcpy(letrat,dic[cont2]);
					printf("a letra t %s\n ", letrat);
					
						if (strcmp(letrat,letram)==0){
							stpcpy(letrat,letra[cont2]);
							strcat(trad,letrat);
							printf("%s\n",trad);//
							stpcpy(letram,"");
							break;
						}
						
				}
					
						letram[0]='\0';
						strcat(letram,carac);
						pt=0;
			}
				
		}
		
		
	}
	
	printf("rotina traduzir ultima que sobra\n");
						
	for(cont2=0;cont2<36;cont2++){
		
		stpcpy(letrat,dic[cont2]);
		printf("teste %s  posicao %d\n", letrat, cont2); //teste
						
		if (strcmp(letrat,letram)==0){
			stpcpy(letrat,letra[cont2]);
			strcat(trad,letrat);
			printf("Letra parcial %s\n", letrat);//teste
			stpcpy(letram,"");
			break;
		}
						
						
	}
	printf("traducao eh %s",trad);
	
		return 0;
}
		