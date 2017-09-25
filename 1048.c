#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
	float Salario, NovoSal, Reajuste;
	float Percentual;
	
	scanf("%f", &Salario);
	
	
	
	if(Salario<400.01){
		Percentual=15;
		NovoSal=(Salario*(1+Percentual/100));
		Reajuste=(Salario*(Percentual/100));
	}
	
	if((Salario>400)&&(Salario<800.01)){
		Percentual=12;
		NovoSal=Salario*(1+Percentual/100);
		Reajuste=Salario*(Percentual/100);
	}
		
	if((Salario>800)&&(Salario<1200.01)){
		Percentual=10;
		NovoSal=Salario*(1+Percentual/100);
		Reajuste=Salario*(Percentual/100);
	}
	
	if((Salario>1200)&&(Salario<2000.01)){
		Percentual=7;
		NovoSal=Salario*(1+Percentual/100);
		Reajuste=Salario*(Percentual/100);
	}
	
	if(Salario>2000){
		Percentual=4;
		NovoSal=Salario*(1+Percentual/100);
		Reajuste=Salario*(Percentual/100);
	}
	
	
	
	printf("Salario = %.2f\n",Salario);
	printf("Reajuste = %.2f\n",Reajuste);
	printf("Novo salario = %.2f\n",NovoSal);
	printf("Percentual = %.2f\n",Percentual);
	
	//printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d%%\n",NovoSal, Reajuste, Percentual);
		
	return 0;	
	}