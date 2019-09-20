/* 9) eliminar números repetidos do vetor. Os números repetidos devem ser substituídos por
novos números. Este procedimento deverá exibir na tela todos os elementos do vetor, antes e depois
de eliminar os números repetidos. */

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

void printa_vetor(int vetor[])
{
	for (int c=0;c<15;c++)
		printf("%i ",vetor[c]);
}
void novonum(int vetor[])
{
	int entrei_no_if;
	do {
		entrei_no_if = 0;
		for (int c=0;c<15;c++)
		{
			for (int i=0;i<15;i++)
			{
				if (vetor[i]==vetor[c] && i!= c)
				{
					vetor[i] = rand()%20;
					entrei_no_if = 1;
				}
			}
		}
	}while(entrei_no_if == 1);
}

int main ()
{
	int vetor[15];
	srand(time(0));
	for (int c=0;c<15;c++)
	{
		vetor[c]=rand()%20;
		printf("%i \n", vetor[c]);
	}
	novonum(vetor);
	printa_vetor(vetor);
}
