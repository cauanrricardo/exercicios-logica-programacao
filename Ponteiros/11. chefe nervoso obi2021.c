#include <stdio.h>
#include <stdlib.h>

int main(){

int n,i,num;
int soma = 0, tam = 0; //tam = controla a quantidade de numero no vetor e a posicao
printf("Digite a quantidade de numeros: ");
scanf("%d", &n);

int *vetor = (int *)malloc(n * sizeof(int));

printf("Digite os numeros: \n");
for(i = 0; i < n; i++)
{
scanf("%d", &num);

if(num == 0){ //se o número for zero, remover o último número do vetor, se houver algum
    if(tam > 0){
        tam--;
        soma -= vetor[tam];
    }
}
else
{
vetor[tam] = num;
soma += num;
tam++;
}

}
printf("A soma dos numeros eh: %d \n", soma);

free(vetor);
}