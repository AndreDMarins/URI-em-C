//1763 - Tradutor do Papai Noel
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main (){
	char Portugues[]="Feliz Natal!", Alemanha[]="Frohliche Weihnachten!", Austria[]="Frohe Weihnacht!", Coreia[]="Chuk Sung Tan!", Espanhol[]="Feliz Navidad!" ; 
	char Grecia[]="Kala Christougena!", Ingles[]="Merry Christmas!", Suecia[]="God Jul!", Turquia[]="Mutlu Noeller", Irlanda[]="Nollaig Shona Dhuit!";
	char Belgica[]="Zalig Kerstfeest!", Italiano[]="Buon Natale!", SMarrocos[]="Milad Mubarak!", Japao[]="Merii Kurisumasu!", Pais[20];
	//printf("Digite o pais :");
	while (scanf("%s", Pais)!=EOF){
			
	if (strcmp(Pais,"brasil")==0 || strcmp(Pais,"portugal")==0)
		printf("%s\n", Portugues);
	else
		if (strcmp(Pais,"alemanha")==0)
			printf("%s\n", Alemanha);
		else
			if (strcmp(Pais,"austria")==0)
				printf("%s\n", Austria);
			else
				if (strcmp(Pais, "coreia")==0)
					printf("%s\n", Coreia);
				else
					if (strcmp(Pais, "espanha")==0 || strcmp(Pais,"argentina")==0 || strcmp(Pais, "mexico")==0 || strcmp(Pais,"chile")==0)
						printf("%s\n", Espanhol);
					else
						if (strcmp(Pais, "grecia")==0)
							printf("%s\n", Grecia);
						else
							if (strcmp(Pais,"estados-unidos")==0 || strcmp(Pais,"inglaterra")==0 || strcmp(Pais,"australia")==0 || strcmp(Pais,"antardida")==0 || strcmp(Pais,"canada")==0)
								printf("%s\n", Ingles);
							else
								if (strcmp(Pais, "suecia")==0)
									printf("%s\n", Suecia);
								else
									if (strcmp(Pais, "turquia")==0)
										printf("%s\n", Turquia);
									else
										if (strcmp(Pais, "irlanda")==0)
											printf("%s\n", Irlanda);
										else
											if (strcmp(Pais, "belgica")==0)
												printf("%s\n", Belgica);
											else
												if (strcmp(Pais, "italia")==0 || strcmp(Pais, "libia")==0)
													printf("%s\n", Italiano);
												else
													if (strcmp(Pais, "marrocos")==0 || strcmp(Pais, "siria")==0)
														printf("%s\n", SMarrocos);
													else
														if (strcmp(Pais, "japao")==0)
															printf("%s\n", Japao);
														else
															printf("--- NOT FOUND ---\n");
	
	//scanf(" %s", Pais);
	}
	
	return 0;
}