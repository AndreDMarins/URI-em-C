#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//gcc nome.c -o nome -lm
//para rodar ./nome

int main()
{
	int N, L, Md=0, Mt=0, Mq=0, Mc=0, cont;
	scanf("%d", &N);
	for(cont=1;cont<=N;cont++){
		scanf("%d",&L);
		if (L%2==0){
			Md++;
		}
		if (L%3==0){
			Mt++;
		}
		if (L%4==0){
			Mq++;
		}
		if (L%5==0){
			Mc++;
		}
	}
	printf("%d Multiplo(s) de 2\n",Md);
	printf("%d Multiplo(s) de 3\n",Mt);
	printf("%d Multiplo(s) de 4\n",Mq);
	printf("%d Multiplo(s) de 5\n",Mc);
	
	return 0;
}