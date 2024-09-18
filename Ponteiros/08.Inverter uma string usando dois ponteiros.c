/*Leia uma string, inverta os caracteres da string (usando dois ponteiros)
 e imprima a string resultante.

>>
Ola mundo!
<<
!odnum alO

Para isso, execute os passos abaixo:
- Leia a string s.
- Crie dois ponteiros para char, chamados ini_ptr e fim_ptr.
- Inicialize ini_ptr com o endereço do primeiro caractere de s.
- Inicialize fim_ptr com o endereço do primeiro caractere de s, 
e incremente fim_ptr até que *fim_ptr seja o terminador.
 Em seguida (fora da repetição), decremente fim_ptr. 
 Desta forma, fim_ptr terá o endereço do último caractere de s.
- Enquanto ini_ptr for menor que fim_ptr, troque os caracteres
 apontados por estes dois ponteiros, incremente ini_ptr e decremente fim_ptr.
- Imprima a string s.
VPL
*/
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