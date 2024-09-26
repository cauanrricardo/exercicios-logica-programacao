#include <stdio.h>
void inverte_vetor(int n, int vet[])//ou int *vet;
{
    int i;
    printf("Digite os elementos do vetor: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &vet[i]);
    }
    printf("Elementos invertidos: ");
    for (i = n - 1; i >= 0; i--)
    {
        printf("%d ", vet[i]);
    }
}
int main()
{
    int n;
    printf("Digite a quantidade de elementos do vetor: ");
    scanf("%d", &n);
    int vet[n];
    inverte_vetor(n, vet);
}