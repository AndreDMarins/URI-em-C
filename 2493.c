//2493 - Jogo do operador

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

struct expressao {
	int Indice;
	int	X;
	char Op; 
	int Y; 
	int Resultado;
	};
struct jogador {
	char Nome[53];
	int Num;
	char Sinal;		
	};
	
	typedef struct expressao Expressao; // define a strutura expressao como Expressao.
	typedef struct jogador Jogador;
	# define MAX 53// define um comprimento maximo.
	//Expressao Conta[MAX] ;// cria uma tabela com a estrutura expressao com valor maximo definido acima
	//PExpressao Tab [MAX];// cria uma tabela com a estrutura expressao com valor maximo definido acima utilizando ponteriro.
	
int main (){
	int i,j,k,l,m, T, Passo, NPasso;
	char Imprimi[MAX][MAX];
	Expressao Conta[MAX];
	Jogador TNome[MAX];
	char Igual;
	char temp[MAX];

	while(scanf("%d", &T)!=EOF){
	for(i=0;i<T;i++){
	Conta[i].Indice=i+1;
	scanf("%d %d %c %d\n", &Conta[i].X, &Conta[i].Y, &Igual, &Conta[i].Resultado);	
		
	}
	for(j=0;j<T;j++){
		scanf("%s %d %c\n", TNome[j].Nome, &TNome[j].Num, &TNome[j].Sinal);
		
	}
	Passo=0;
	NPasso=0;
	k=0;
	for(j=0;j<T;j++){
		for(i=0;i<T;i++){			
			if(TNome[j].Num == Conta[i].Indice){
				if(TNome[j].Sinal=='+'){
					if ((Conta[i].X+Conta[i].Y) != Conta[i].Resultado){
						strcpy(Imprimi[k],TNome[j].Nome);
						//printf("%s\n", Imprimi[j]);
						NPasso=NPasso+1;
						k++;
					}		}
					else{
						if(TNome[j].Sinal=='-'){
							if ((Conta[i].X-Conta[i].Y )!= Conta[i].Resultado){
								strcpy(Imprimi[k],TNome[j].Nome);
								//printf("%s\n", Imprimi[j]);
								NPasso=NPasso+1;
								k++;
							}
						}
								else{
									if(TNome[j].Sinal=='*'){
										if ((Conta[i].X*Conta[i].Y) != Conta[i].Resultado){
											strcpy(Imprimi[k],TNome[j].Nome);
											//printf("%s\n", Imprimi[j]);
											NPasso=NPasso+1;
											k++;
										}
									}
										else{
											if(TNome[j].Sinal=='I'){//se for impossivel
												if((Conta[i].X+Conta[i].Y) == Conta[i].Resultado ||
												(Conta[i].X-Conta[i].Y )== Conta[i].Resultado || 
												(Conta[i].X*Conta[i].Y) == Conta[i].Resultado){
													strcpy(Imprimi[k],TNome[j].Nome);
													NPasso=NPasso+1;
													k++;													
												}			
											}	
										}	
								}
				}
			}			
		}
	}
	
	if(NPasso==0)
		printf("You Shall All Pass!");
	if(NPasso==T)
		printf("None Shall Pass!");
	else{
		if(NPasso!=0){
			for(m = 1; m < NPasso; m++){
				for (l = 0; l < NPasso-1; l++){
                       
					if(strcmp(Imprimi[l],Imprimi[l+1]) > 0){
						strcpy(temp,Imprimi[l]);
						strcpy(Imprimi[l],Imprimi[l+1]);
						strcpy(Imprimi[l+1],temp);
					}                               
				}      
			}
			for(j=0;j<NPasso;j++){
				printf("%s",Imprimi[j]);
				if(j<NPasso-1)
					printf(" ");
			}
		}
	}
	printf("\n");
	}
	return 0;
}