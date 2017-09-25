//2031 - Pedra, Papel, Ataque Aéreo
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main (){
     int N, cont, i;
	 char Jog1[7], Jog2[7];
	 
	 scanf("%d", &N);
	 for(i=0; i<N; i++){
		 scanf("%s",Jog1);
		 scanf("%s",Jog2);
		 if (strcmp(Jog1,"ataque")==0 && strcmp(Jog2,"ataque")==0)
			 printf("Aniquilacao mutua\n");
		 else
			if (strcmp(Jog1,"pedra")==0 && strcmp(Jog2,"pedra")==0)
				printf("Sem ganhador\n");
			else
				if (strcmp(Jog1,"papel")==0 && strcmp(Jog2,"papel")==0)
					printf("Ambos venceram\n");
				else
					if (strcmp(Jog1,"ataque")==0 && (strcmp(Jog2,"pedra")==0 || strcmp(Jog2,"papel")==0))
						printf("Jogador 1 venceu\n");
					else
						if (strcmp(Jog1,"pedra")==0 && strcmp(Jog2,"papel")==0)
							printf("Jogador 1 venceu\n");
						else
							if (strcmp(Jog1,"papel")==0 && ((strcmp(Jog2,"pedra")==0 || strcmp(Jog2,"ataque")==0)))
								printf("Jogador 2 venceu\n");	
							else
								if (strcmp(Jog1,"pedra")==0 && strcmp(Jog2,"ataque")==0)
									printf("Jogador 2 venceu\n");
		 }
	return 0;
}