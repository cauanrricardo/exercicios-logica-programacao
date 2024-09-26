#include <stdio.h>

int main()
{
    int n;
    int i;
    scanf("%d", &n);
    double vet[n];
    double soma = 0, media = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%lf", &vet[i]);
        soma += vet[i];
    }
    media = soma / n;
    printf("%.2lf\n", media);
    for (i = 0; i < n; i++)
    {
        if (vet[i] < media)
            printf("P ");
        else if (vet[i] == media)
            printf("M ");
        else
            printf("G ");
    }
}