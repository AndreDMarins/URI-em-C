#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//gcc nome.c -o nome -lm
//para rodar ./nome

int main()
{
	float x1, y1, x2, y2,D;
	scanf("%f %f", &x1, &y1);
	scanf("%f %f", &x2, &y2);
	D=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
	printf("%.4f\n",D);
	
	
	return 0;
}