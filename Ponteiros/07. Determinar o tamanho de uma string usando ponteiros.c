#include <stdio.h>

int main(){

int cont = 0;
char string[100];
char *str_ptr = string;

printf("Digite uma string: ");
scanf("%[^\n]", string);//le \n

while(*str_ptr != '\0'){
   cont++;
   str_ptr++;
}

printf("Tamanho da sua string: ");
printf("%d", cont);


}