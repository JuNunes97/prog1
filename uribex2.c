/* Na matemática, um número perfeito é um número inteiro para o qual a soma de todos os seus divisores positivos próprios (excluindo ele mesmo) é igual ao próprio número. Por exemplo o número 6 é perfeito, pois 1+2+3 é igual a 6. Sua tarefa é escrever um programa que imprima se um determinado número é perfeito ou não. */

#include<stdio.h>

int main ()
{
	int num;
	int aux=0;
	printf("Digite um valor:\n");
	scanf("%i",&num);

	for (int x=1;x<num;x++)
	{
		if (num%x==0)
			{
			printf("Divisores: %i\n",x);
			aux=aux+x;
			}
	}
	if (aux==num)
		printf("O numero e perfeito.\n");
	if (aux!=num)
		printf("O numero nao e perfeito.\n");
}
