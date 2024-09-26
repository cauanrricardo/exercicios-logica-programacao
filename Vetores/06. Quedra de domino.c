#include <stdio.h>

int main()
{
int n, i;
scanf("%d", &n);
int vet[n];

for(i = 0; i < n; i++)
{
scanf("%d", &vet[i]);
}

int ordenado = 1;//comeca o vetor ordenado = 1;
for(i = 0; i < n - 1; i++)
{
if(vet[i] > vet[i + 1]){
ordenado = 0;
break;
}
}
if(ordenado)printf("ok\n");
else printf("precisa de ajuste\n");
}