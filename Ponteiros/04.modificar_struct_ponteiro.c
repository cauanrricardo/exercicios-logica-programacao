/*Defina uma estrutura para armazenar os dados de um retângulo, declare uma variável desta estrutura, leia a altura e largura do retângulo, preencha o campo 'area' da estrutura e imprima todos os campos da estrutura.

Para isso, siga os passos abaixo:
- Defina a estrutura 'Retangulo' que contém 3 campos float chamados 'altura', 'largura' e 'area'.
- Declare uma variável do tipo 'Retangulo' chamada p.
- Leia os campos 'altura' e 'largura' de p.
- Declare um ponteiro para 'Retangulo' chamado ptr, e inicialize este ponteiro com o endereço de memória de p.
- Nos passos a seguir use apenas o ponteiro ptr (não acesse a variável p):
    - Armazene em 'area' o produto dos campos 'altura' e 'largura'.
    - Imprima os campos 'altura', 'largura' e 'area'.*/

#include <stdio.h>

typedef struct{

 float altura;
 float largura;
 float area;

}Retangulo;

int main(){
 Retangulo p;
printf("Digite a altura do retangulo: ");
scanf("%f", &p.altura);\
 printf("Digite a largura do retangulo: ");
scanf("%f", &p.largura);

Retangulo *ptr = &p;
ptr->area = ptr->altura * ptr->largura;

printf("Altura: %.2f\n", ptr->altura);
printf("Largura: %.2f\n", ptr->largura);
printf("Area: %.2f\n", ptr->area);

}