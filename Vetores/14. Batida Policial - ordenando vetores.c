#include <stdio.h>
void Bubble_sort(int n1, int *vet)
{
int i, j, aux;
//o loop externo (controlado pelo i) realiza várias passagens pelo vetor.
for(i = 0; i < n1; i++)
{
    for(j = 0; j < n1 - 1; j++)//O loop interno (controlado pelo j) percorre os elementos, comparando cada par adjacente e trocando-os se estiverem fora de ordem.
    {
        if(vet[j] > vet[j + 1])
        {
            aux = vet[j];
            vet[j] = vet[j + 1];
            vet[j + 1] = aux;
        }
    }
}

}

int main()
{
int n1, i;
scanf("%d", &n1);
int vet[n1];

for(i = 0; i < n1; i++)
{
scanf("%d", &vet[i]);
}
Bubble_sort(n1, vet);

for(i = 0; i < n1; i++)
{
    printf("%d ", vet[i]);
}
}