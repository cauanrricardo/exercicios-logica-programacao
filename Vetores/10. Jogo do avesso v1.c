#include <stdio.h>

int main()
{
    int n, grito, i;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    int vet[n];
    printf("Digite o grito do chefe: ");
    scanf("%d", &grito);

    // leitura dos elementos de um vetor
    for (i = 0; i < n; i++)
    {
        scanf("%d", &vet[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (grito == vet[i])
        {
            if (i == 0)//se a posicao do vetor é a primeira
            {
                vet[i + 1] = vet[i + 1] * -1; // vet[i + 1] *= -1;
            }
            else if (i == n - 1)//se a posicao do vetor é a ultima
            {
                vet[i - 1] = vet[i - 1] * -1;
            }
            else
            {
                vet[i - 1] = vet[i - 1] * -1;
                vet[i + 1] = vet[i + 1] * -1;
            }
        }

        // imprimir os elementos
        printf(" Resultado do vetor depois do grito: ");
        printf("[");
        for (i = 0; i < n; i++)
        {
            printf("%d ", vet[i]);
        }
        printf("]");
    }
}
/*
1 grito do chefe
1 2 3 4 5
1 = vet[i = 0]
se  i == 0
executa
*/