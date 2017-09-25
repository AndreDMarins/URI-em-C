//2338 - MORSE
#include <stdio.h>
 
int main() {
 
	char dic[37][20]={"=.===","===.=.=.=","===.=.===.=","===.=.=","=","=.=.===.=","===.===.=","=.=.=.=","=.=","=.===.===.===","===.=.===","=.===.=.=","===.===","===.=","===.===.===","=.===.===.=","===.===.=.===","=.===.=","=.=.=","===","=.=.===","=.=.=.===","=.===.===","===.=.=.===","===.=.===.===","===.===.=.=","=.===.===.===.===","=.=.===.===.===","=.=.=.===.===","=.=.=.=.===","===.===.===.===.===","===.=.=.=.=","===.===.=.=.=","===.===.===.=.=","===.===.===.===.=","===.===.===.===.==="};
	char letra[37][2]={"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z","1","2","3","4","5","6","7","8","9","0"};
	char morse[1001], trad[501], letram[51],letrat[51];
	char ponto[]=".", carac[2],espaco[]=" ";
	int pt=0, cont, casos, cont2,teste;
	scanf("%d",&casos);
	for(teste=0;teste<casos;teste++){
		letram[0]='\0';
		letrat[0]='\0';
		trad[0]='\0';
		scanf("%s",morse);
		for(cont=0;cont<strlen(morse);cont++){
			sprintf(carac,"%c",morse[cont]);
			carac[1]='\0';
			if (strcmp(carac,ponto)==0){
				pt++;
				if (pt==7){
					for(cont2=0;cont2<36;cont2++){
					
						stpcpy(letrat,dic[cont2]);
									
							if (strcmp(letrat,letram)==0){
								stpcpy(letrat,letra[cont2]);
								strcat(trad,letrat);
								strcat(trad,espaco);
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
					strcat(letram,carac);
				}
				else if(pt==1){
					strcat(letram,ponto);
					strcat(letram,carac);
					pt=0;
				}
				else if (pt==3){
					for(cont2=0;cont2<36;cont2++){
						stpcpy(letrat,dic[cont2]);
							if (strcmp(letrat,letram)==0){
								stpcpy(letrat,letra[cont2]);
								strcat(trad,letrat);
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
		for(cont2=0;cont2<36;cont2++){
			stpcpy(letrat,dic[cont2]);				
			if (strcmp(letrat,letram)==0){
				stpcpy(letrat,letra[cont2]);
				strcat(trad,letrat);
				stpcpy(letram,"");
				break;
			}				
		}
		printf("%s\n",trad);
	}
    return 0;
}