#include<stdio.h>
#include<stdlib.h>
#include<time.h>

const int linha=4;
const int coluna=5;

int preencher(int matriz[linha][coluna])
{
	for (int l=0;l<linha;l++)
	{
		for(int c=0;c<coluna;c++)
		{
			matriz[l][c]=rand()%20;
			printf("%i ",matriz[l][c]);
		}
		printf("\n");
	}

}

int pares(int matriz[linha][coluna])
{
	int contador=0;
	for (int l=0;l<linha;l++)
	{
		for(int c=0;c<coluna;c++)
		{
			if (matriz[l][c]%2==0)
				contador++;
		}
	}
	printf("A matriz tem %i pares.\n", contador);
}

int main ()
{
	srand(time(0));
	int matriz[linha][coluna];
	preencher(matriz);
	pares(matriz);

}
