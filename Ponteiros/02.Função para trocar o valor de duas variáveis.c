#include <stdio.h>

//funcao "troca" que troca os valores das variaveis
void troca(int *x, int *y){
int aux;

aux = *x;
*x = *y;
*y = aux;

}
int main(){

//declaracao das variaveis
 int a, b;
 scanf("%d %d", &a, &b);

//chamei a funcao e passei o endereco das variaveis
troca(&a, &b);

printf("%d %d", a, b);

}