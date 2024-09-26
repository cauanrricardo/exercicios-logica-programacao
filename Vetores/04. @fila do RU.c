#include <stdio.h>

int main()
{
    int n, i;
    printf("Digite a quantidade de pessoas na fila: ");
    scanf("%d", &n);
    int vet[n];

    printf("Digite os elementos: ");
    // loop pra ler os dados
    for (i = 0; i < n; i++)
    {
        scanf("%d", &vet[i]);
    }

    // loop impar
    printf("Elementos impares/alunos:\n ");
    printf("[ ");
    for (i = 0; i < n; i++)
    {
        if (vet[i] % 2 != 0)
        {
            printf("%d ", vet[i]);
        }
    }
    printf(" ]");
    printf("\n");
    printf("Elementos pares/servidores: ");
    printf("[ ");
    for (i = 0; i < n; i++)
    {
        if (vet[i] % 2 == 0)
        {
            printf("%d ", vet[i]);
        }
    }
    printf(" ]");
    printf("\n");

    return 0;
}
