#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
	int Hi, Mi, Hf, Mf, Horas, Minutos;
	
	scanf("%d%d%d%d",&Hi,&Mi,&Hf,&Mf);
	
	if(Hi==Hf && Mi==Mf){
		Horas=24;
		Minutos=0;
	}
	else{
		
		Hf=Hf*60+Mf;
		Hi=Hi*60+Mi;
		Horas=(Hf-Hi)/60;
		Minutos=(Hf-Hi)%60;
	}
	
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",Horas, Minutos);
	
	
	return 0;
	
}