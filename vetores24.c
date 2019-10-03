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

int maior(int matriz[linha][coluna])
{
	int maior=0;
	for (int l=0;l<linha;l++)
	{
		for(int c=0;c<coluna;c++)
		{
			if (matriz[l][c]>maior)
				maior=matriz[l][c];
		}
	}
	printf("O maior valor e: %i.\n", maior);
}

int main ()
{
	srand(time(0));
	int matriz[linha][coluna];
	preencher(matriz);
	maior(matriz);

}
