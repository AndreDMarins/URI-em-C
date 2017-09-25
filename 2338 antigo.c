#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//gcc nome.c -o nome -lm
//para rodar ./nome

int main()
{
	char morse[1001], trad[501], letra[51];
	char a[]="=.===", b[]="===.=.=.=",c[]="===.=.===.=",d[]="===.=.=",e[]="=",f[]="=.=.===.=",g[]="===.===.=";
	char h[]="=.=.=.=",i[]="=.=",j[]="=.===.===.===",k[]="===.===",l[]="=.===.=.=",m[]="===.===",n[]="===.=";
	char o[]="===.===.===",p[]="=.===.===.=",q[]="===.===.=.===",r[]="=.===.=",s[]="=.=.=",t[]="===",u[]="=.=.===";
	char v[]="=.=.=.===",w[]="=.===.===",x[]="===.=.=.===",y[]="===.=.===",z[]="===.===.=.=";
	char um[]="=.===.===.===.===", dois[]="=.=.===.===.===", tres[]="=.=.=.===.===", quatro[]="=.=.=.=.===", cinco[]="===.===.===.===.===";
	char seis[]="===.=.=.=.=", sete[]="===.===.=.=.=", oito[]="===.===.===.=.=", nove[]="===.===.===.===.=", zero[]="===.===.===.===.===";
	char ponto[]=".", carac[]="=",espaco[]=" ";
	int pt=0, cont, casos, cont2,teste;

	scanf("%d",&casos);
	//===.===.=...===.===.=
	for (cont2=0;cont2<casos;cont2++){
		scanf("%s", morse);
		
		for(cont=0;cont<=strlen(morse);cont++){
			carac[0]=morse[cont];
			
			if (strcmp(carac,ponto)==0){
				pt++;
			}
			
			else{
				if(pt==0){
					strcat(letra,carac);
				}
				else if(pt==1){
					strcat(letra,ponto);
					strcat(letra,carac);
					pt=0;
				}
				else if(pt==3){
					printf("nao era p estar aqui %d\n",pt);
					if (strcmp(letra,a)==0){
						strcat(trad,"a");
						strcpy(letra,"");
						strcat(letra,"=");
						pt=0;
					}
					else if (strcmp(letra,b)==0){
						strcat(trad,"b");
					}
					else if (strcmp(letra,c)==0){
						strcat(trad,"c");
					}
					else if (strcmp(letra,d)==0){
						strcat(trad,"d");
					}
					else if (strcmp(letra,e)==0){
						strcat(trad,"e");
					}
					else if (strcmp(letra,f)==0){
						strcat(trad,"f");
					}
					else if (strcmp(letra,g)==0){
						strcat(trad,"g");
					}
					else if (strcmp(letra,h)==0){
						strcat(trad,"h");
					}
					else if (strcmp(letra,i)==0){
						strcat(trad,"i");
					}
					else if (strcmp(letra,j)==0){
						strcat(trad,"j");
					}
					else if (strcmp(letra,k)==0){
						strcat(trad,"k");
					}
					else if (strcmp(letra,l)==0){
						strcat(trad,"l");
					}
					else if (strcmp(letra,m)==0){
						strcat(trad,"m");
					}
					else if (strcmp(letra,n)==0){
						strcat(trad,"n");
					}
					else if (strcmp(letra,o)==0){
						strcat(trad,"o");
					}
					else if (strcmp(letra,p)==0){
						strcat(trad,"p");
					}
					else if (strcmp(letra,q)==0){
						strcat(trad,"q");
					}
					else if (strcmp(letra,r)==0){
						strcat(trad,"r");
					}
					else if (strcmp(letra,s)==0){
						strcat(trad,"s");
					}
					else if (strcmp(letra,t)==0){
						strcat(trad,"t");
					}
					else if (strcmp(letra,u)==0){
						strcat(trad,"u");
					}
					else if (strcmp(letra,w)==0){
						strcat(trad,"w");
					}
					else if (strcmp(letra,x)==0){
						strcat(trad,"x");
					}
					else if (strcmp(letra,y)==0){
						strcat(trad,"y");
					}
					else if (strcmp(letra,z)==0){
						strcat(trad,"z");
					}
					else if (strcmp(letra,um)==0){
						strcat(trad,"1");
					}
					else if (strcmp(letra,dois)==0){
						strcat(trad,"2");
					}
					else if (strcmp(letra,tres)==0){
						strcat(trad,"3");
					}
					else if (strcmp(letra,quatro)==0){
						strcat(trad,"4");
					}
					else if (strcmp(letra,cinco)==0){
						strcat(trad,"5");
					}
					else if (strcmp(letra,seis)==0){
						strcat(trad,"6");
					}
					else if (strcmp(letra,sete)==0){
						strcat(trad,"7");
					}
					else if (strcmp(letra,oito)==0){
						strcat(trad,"8");
					}
					else if (strcmp(letra,nove)==0){
						strcat(trad,"9");
					}
					else if (strcmp(letra,zero)==0){
						strcat(trad,"0");
					}
				strcpy(letra,"");
				strcat(letra,"=");
				pt=0;
				}
			}
		}
		
		
	}
		printf("traducao %s\n",trad);
		printf("%d\n%s\n",pt,letra);
	return 0;
}