#include <stdio.h>

int main()
{
    int n, i;
    scanf("%d", &n);
    s int vet[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &vet[i]);
    }

    int ordenado = 1; // o vetor já comeca ordenado = 1;
    for (i = 0; i < n - 1; i++)
    {
        if (vet[i] > vet[i + 1])
        {                 // significa que nao esat ordenado
            ordenado = 0; //= 0, pois nao esta ordenado
            break;
        }
    }
    if (ordenado)
        printf("ok\n"); // se for verdadeiro
    else
        printf("precisa de ajuste\n"); // caso contrario
}