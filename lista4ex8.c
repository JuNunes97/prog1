/* exibir o 3o. maior elemento do vetor. Por exemplo: v={2,4,4,1,3,6,5,6}   3o. Maior= 4.  */
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
int maior3(int vetor[])
{
	int contador=0;
	int maior=vetor[0];
	for (int p=1;p<15;p++)
		{
			if (vetor[p]!=maior)
			{
				maior=vetor[p];
				contador++;
			}
			if (contador==2)
			return maior;
		}
	return maior;
}
void ordem(int vetor[])
{
	int aux;
	for (int p=0;p<15;p++)
	{
		for (int c=p+1;c<15;c++)
		{
			if (vetor[p]<vetor[c])
			{
				aux=vetor[c];
				vetor[c]=vetor[p];
				vetor[p]=aux;
			}
		}
	}
	printf ("Depois que ordena:\n");
	for (int p=0;p<15;p++)
	{
		printf("v[%d] = %i\n", p, vetor[p]);
	}
}
int main ()
{
	int vetor[15];
	srand(time(0));
	for (int c=0;c<15;c++)
	{
		vetor[c]=rand()%20;
		printf("v[%d] = %i\n", c, vetor[c]);
	}
	ordem(vetor);
	printf ("O 3 maior valor e: %i\n", maior3(vetor));
}
