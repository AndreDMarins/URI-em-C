//1255 - frequencia de letras
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void LimpaBuffer()
/* Limpa buffer de entrada para fgets */
{	while(getchar() != '\n');
	return;
}

int main () {
	int N, pos, max, j, i,cont[123];
	char a[201];
	char c;

	scanf("%d",&N);
	LimpaBuffer();

    while(N > 0)
    {
		
        fgets(a, sizeof(a), stdin);
        j = 97;
         while(j <= 122)
         {
                 cont[j] = 0;
                 j++;
         }
         i = 0;
         max = 0;
         while(a[i] != '\0')
         {
               if(a[i] >= 65 && a[i] <= 90)
                           a[i] += 32;
               if(a[i] >= 97 && a[i] <= 122)
               {
                           pos = a[i];
                           cont[pos]++;
                           if(cont[pos] > max)
                            max = cont[pos];
               }
               i++;
         }
         for(c = 'a'; c <= 'z'; c++)
        {
                 if(cont[c] == max)
                            printf("%c",c);
        }

         printf("\n");
		 N--;
		 
    }