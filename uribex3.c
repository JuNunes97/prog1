/* Leia um valor inteiro N. Apresente o quadrado de cada um dos valores pares, de 1 até N, inclusive N, se for o caso. */

#include<stdio.h>
int main ()
{
	int n;
	scanf("%d",&n);
	
	for (int d=2;d<=n;d++)
	{
		if (d%2==0)
			{
			printf("%d^2 = %d\n",d,d*d);
			}
	}
}
