/* Leia um valor inteiro N. Este valor será a quantidade de valores inteiros X que serão lidos em seguida.
Mostre quantos destes valores X estão dentro do intervalo [10,20] e quantos estão fora do intervalo, mostrando essas informações. */


#include<stdio.h>

int main ()
{
	int n,x,num;
	int contador1=0, contador2=0;
	printf("Quantos valores:\n");
	scanf("%i",&n);
	
	for(x=0;x<n;x++)
	{
		printf("Digite um valor X:\n");
		scanf("%i",&num);
		if (num>=10 && num<=20)
			contador1++;
		else
			contador2++;
	}
	
	printf("Existem %i dentro do intervalo [10,20].\nExistem %i fora do intervalo [10,20]",contador1,contador2);
	
}
