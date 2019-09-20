/* 10) Implemente a função float max(float v [ ], int n) que retorna o maior número entre os n
primeiros elementos de um vetor. */

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

float max(float vetor[],int n)
{
	float maior=vetor[0];
	for (int num=1;num<=n;num++)
		{
			if (vetor[num]>maior)
			maior=vetor[num];
		}
	return maior;
}

int main ()
{
	int n;
	float vetor[50];
	srand(time(0));
	for (int v=0;v<50;v++)
	{
		vetor[v]=rand()%20;
		printf("v[%d] = %.2f\n", v, vetor[v]);
	}
	printf("\nDigite a quantidade 'n' de valores a serem analisados: ");
	scanf ("%i",&n);
	printf("O maior número entre os %i primeiros elementos do vetor é: %.2f", n, max(vetor,n));
}
