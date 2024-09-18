#include <stdio.h>

int main(){

 char aux;
 char string[100];
 char *ini_ptr = string;
 char *fim_ptr = string;
 printf("Digite uma string: ");
 scanf("%[^\n]", string);

while(*fim_ptr != '\0' ){
    fim_ptr++;//nao precisa do *, pois vc quer mover o ponteiro e nao acessar eles
}
fim_ptr--;

while(ini_ptr < fim_ptr){
 aux = *ini_ptr;
 *ini_ptr = *fim_ptr;
 *fim_ptr = aux;

 ini_ptr++;
 fim_ptr--;
}
printf("A string invertida: ");
printf("%s\n", string);

}