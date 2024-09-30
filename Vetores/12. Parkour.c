#include <stdio.h>
#include <stdlib.h>

int main()
{
    // n = numero de elementos
    int n, cont = 0, dif;
    scanf("%d", &n);
    int vetor[n];

    for (int i = 0; i < n; i++)
    { // le os numeros do vetor
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        dif = abs(vetor[i] - vetor[i + 1]); // subtrai a diferenca absoluta

        if (dif > 1)
        {           // se for maior que um soma na cont++
            cont++; // ou cont += dif;
        }
    }
    printf("%d\n", cont);
}