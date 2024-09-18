
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