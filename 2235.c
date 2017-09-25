#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main ()
	{
	int A,B,C;
	scanf ("%d %d %d", &A,&B,&C);
	if(A-B==0||A-C==0||B-C==0||A+B-C==0||A+C-B==0||C+B-A==0)
	{
		printf("S\n");
	}
	else
	{
		printf("N\n");
	}
		
	
	}