#include <stdio.h>

int main()
{
    int n1, n2, i, j, encontrado = 0;
    scanf("%d", &n1);
    int vet[n1];
    // leitura primeiro vetor
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &vet[i]);
    }

    scanf("%d", &n2);
    int vet2[n2];
    // leitura segundo vetor
    for (i = 0; i < n2; i++)
    {
        scanf("%d", &vet2[i]);
    }

    for (i = 0; i < n1; i++) // inicializa o primeiro vetor
    {
        encontrado = 0;
        for (j = 0; j < n2; j++)
        {
            if (vet[i] == vet2[j])
            {
                encontrado = 1;
                break;
            }
        }
        if (!encontrado) // diferente de 1
        {
            printf("nao\n");
            return 0;
        }
    }
    printf("sim\n");
}
