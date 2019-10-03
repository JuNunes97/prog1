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

int soma(int matriz[linha][coluna])
{
	int soma=0;
	float media=1;
	int contador=0;
	for (int l=0;l<linha;l++)
	{
		for(int c=0;c<coluna;c++)
		{
			soma=soma+matriz[l][c];
		}
	}
	media=soma/20;
	printf("Media = %.2f\n",media);
	for (int l=0;l<linha;l++)
	{
		for(int c=0;c<coluna;c++)
		{
			if(matriz[l][c]>media)
				contador++;
		}
	}
	printf("A quantidade de valores e: %i\n",contador);
}

int main ()
{
	srand(time(0));
	int matriz[linha][coluna];
	preencher(matriz);
	soma(matriz);
}
