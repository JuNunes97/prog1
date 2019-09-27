#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int main ()
{
    int num,p=0,i=0;
    int par[5];
    int impar[5];
    int vetor[15];
	for (int x=0;x<15;x++)
    {
        scanf("%i",&num);
        vetor[x]=num;
    }
    for (int qtd=0;qtd<15;qtd++)
    {

        if (vetor[qtd]%2==0)
        {
            par[p]=vetor[qtd];
            p++;
            if (p==5)
            {
                for (int aux=0;aux<5;aux++)
                    printf("par[%i] = %i\n",aux,par[aux]);
                    p=0;
            }
        }
        else
        {
            impar[i]=vetor[qtd];
            i++;
            if (i==5)
            {
                for (int aux=0;aux<5;aux++)
                    printf("impar[%i] = %i\n",aux,impar[aux]);
                    i=0;
            }
        }
    }
    for (int aux=0;aux<i;aux++)
        printf("impar[%i] = %i\n",aux,impar[aux]);
    for (int aux=0;aux<p;aux++)
        printf("par[%i] = %i\n",aux,par[aux]);
}
