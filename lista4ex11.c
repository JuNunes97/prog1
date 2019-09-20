/* 11)  Implemente a função int compara (int vetor1 [ ], int vetor2 [ ]) que retorna 1 caso os
vetores   sejam  iguais  e  0  caso   contrário.   A  quantidade  de  elementos   em  cada  vetor   pode  ser
diferente. Se julgar necessário, passe outros parâmetros para a função. */

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

#define tam1 10
#define tam2 10

int compara(int vetor1[], int vetor2[])
{
	if (tam1!=tam2)
		return 0;
	for (int c=0;c<tam1;c++)
	{
		if (vetor1[c]!=vetor2[c])
			return 0;
	}
	return 1;
}

int main ()
{
	int n;
	int vetor1[tam1];
	srand(time(0));
	for (int v1=0;v1<tam1;v1++)
	{
		vetor1[v1]=rand()%20;
		printf("Vetor 1[%d] = %i\n", v1, vetor1[v1]);
	}
	printf("\n\n");
	
	int vetor2[tam2];
	for (int v2=0;v2<tam2;v2++)
	{
		vetor2[v2]=rand()%20;
		printf("Vetor 2[%d] = %i\n", v2, vetor2[v2]);
	}
	printf ("\n\n %i\n",compara(vetor1,vetor2));
}
