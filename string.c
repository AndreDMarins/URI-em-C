#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//gcc nome.c -o nome -lm
//para rodar ./nome

int main()
{
	char morse[1001], trad[501], letra[50];
	char a[]="=.===", b[]="===.=.=.=",c[]="===.=.===.=",d[]="===.=.=",e[]="=",f[]="=.=.===.=",g[]="===.===.=";
	char h[]="=.=.=.=",i[]="=.=",j[]="=.===.===.===",k[]="===.===",l[]="=.===.=.=",m[]="===.===",n[]="===.=";
	char o[]="===.===.===",p[]="=.===.===.=",q[]="===.===.=.===",r[]="=.===.=",s[]="=.=.=",t[]="===",u[]="=.=.===";
	char v[]="=.=.=.===",w[]="=.===.===",x[]="===.=.=.===",y[]="===.=.===",z[]="===.===.=.=";
	char um[]="=.===.===.===.===", dois[]="=.=.===.===.===", tres[]="=.=.=.===.===", quatro[]="=.=.=.=.===", cinco[]="===.===.===.===.===";
	char seis[]="===.=.=.=.=", sete[]="===.===.=.=.=", oito[]="===.===.===.=.=", nove[]="===.===.===.===.=", zero[]="===.===.===.===.===";
	char ponto[]=".", carac[2];
	int  cont, casos, cont2, pt=0;
	
	
	scanf("%s",morse);
	
	printf("%s\n",morse);
	
	if(strcmp(a,morse)==0)
		printf("a\n");
	else
		printf("erro\n");

	
	for(cont=0;cont<strlen(morse);cont++){
		
		carac[0]=morse[cont];
		strcat(trad,carac);
		printf("%s\n",carac);
		printf("%s\n",trad);
	}
	
	
	
	//printf("%s\n %d\n",a);
	//stpcpy(trad,a);
	//printf("%s\n",trad);
	//strcat(trad,"...");
	//printf("%s\n", trad);
	
	return 0;
}