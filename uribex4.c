/* Escreva um programa que leia um valor inteiro N (1 < N < 1000). Este N é a quantidade de linhas de saída que serão apresentadas na execução do programa. */

#include<stdio.h>
int main ()
{
	int n;
	scanf("%i",&n);
	
	for (int x=1;x<=n;x++)
	{
		printf("%i %i %i\n",x,x*x,x*x*x);
	}
}
