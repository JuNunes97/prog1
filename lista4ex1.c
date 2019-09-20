#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int main ()
{
	int vetor[15];
	srand(time(0));
	
	for (int c=0;c<15;c++)
	{
		vetor[c]=rand()%20;
		printf("%i ",vetor[c]);
	}
}
