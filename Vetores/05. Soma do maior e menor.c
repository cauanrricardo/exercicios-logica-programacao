#include <stdio.h>
#include <limits.h>

int main()
{
    int vet[5], maior = INT_MIN, menor = INT_MAX;
    int i, soma = 0;
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &vet[i]);
        if (vet[i] > maior)
        {
            maior = vet[i];
        }
        if (vet[i] < menor)
        {
            menor = vet[i];
        }
    }
    soma += (menor + maior);
    printf("%d", soma);
}