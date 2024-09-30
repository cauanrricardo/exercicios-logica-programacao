#include <stdio.h>

int main()
{
    int n1, par = 0, i, j;
    scanf("%d", &n1);
    int vet[n1];

    // leitura de dados
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &vet[i]);
    }

    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < n1; j++)
        {
            if ((vet[i] == -vet[j]) && (vet[i] != 0))
            {
                par++;
                vet[j] = 0; // é uma marcacao que ja foi
                break;
            }
        }
    }

    printf("%d", par);

    return 0;
}
