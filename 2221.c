#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//gcc nome.c -o nome -lm
//para rodar ./nome

int main()
{
	int Ai, Di, Li, T, B, cont;
	float VGG, VGD; //valor do golpe
	scanf("%d",&T);//numero de instancias
	
	for(cont=1;cont<=T;cont++){
		scanf("%d",&B);//Bonus
		scanf("%d %d %d", &Ai, &Di, &Li);//Val Ataque, Defesa e level para Guarte
		if (Li%2==0){
			VGD=((Ai+Di)/2)+B;
		}
		else{
			VGD=(Ai+Di)/2;
		}
		scanf ("%d %d %d", &Ai, &Di, &Li);//Val Ataque, Defesa e level para Dabriel
		if (Li%2==0){
			VGG=((Ai+Di)/2)+B;
		}
		else{
			VGG=(Ai+Di)/2;
		}
		if(VGD>VGG){
			printf("Dabriel\n");
		}
		if(VGG>VGD){
			printf("Guarte\n");
		}
		if (VGG==VGD){
			printf("Empate\n");
		}
	}
	
	return 0;
}