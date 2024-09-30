#include <stdio.h>
#include <string.h>

void Substring(char txt[], int n1, int n2){
       for(int i = 0; i < n2; i++){
        printf("%c", txt[n1++]);   
              if(txt[n1] == '\0'){
                break;
            }
        }
}

int main(){

    char txt[100];
    int n1, n2;//n1 = posicao inicial - n2 = numero de caracteres
    
    scanf("%[^\n]\n", txt);
    scanf("%d\n%d", &n1, &n2);
    int t_txt = strlen(txt);
        
        if(n1 < strlen(txt)){
            Substring(txt, n1, n2);
        }
    
 
    }
    //n1++: Este é um operador de incremento pós-fixado. Ele faz duas coisas:
                                                       // Usa o valor atual de n1: O valor de n1 é usado para acessar o caractere no array txt.
                                                   // Incrementa n1: Após o uso, o valor de n1 é incrementado em 1. Isso significa que na próxima vez que n1 for usado, ele estará apontando para o próximo caractere no array.
            
    
