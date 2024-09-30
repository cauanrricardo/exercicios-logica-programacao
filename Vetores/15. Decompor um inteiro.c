#include <stdio.h>
int main()
{

    int n, cont = 0;
    scanf("%d", &n);
    int aux = n;

    while (n > 0)
    { // pegar o ultimo numero//ex: 1234 % 10 = resto 4
        n = n / 10;
        cont++;
    }
    int vetor[cont];
    for (int i = 0; i < cont; i++)
    { // ordenar o vetor
        vetor[i] = aux % 10;//pega o ultimo digito
        aux = aux / 10;//remove o ultimo digito
    }
    for (int i = cont - 1; i >= 0; i--)
    { // printar o numero
        printf("%d", vetor[i]);
        if (i != 0)
        {
            printf(" ");
        }
    }

    printf("\n");
}
