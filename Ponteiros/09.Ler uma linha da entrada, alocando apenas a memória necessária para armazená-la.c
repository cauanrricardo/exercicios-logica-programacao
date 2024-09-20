#include <stdio.h>
#include <stdlib.h>

int main(){

    char *s = 0;
    int tam = 0;
    char c;

    printf("Digite uma string: ");
    scanf("%c", &c);
    
    while(c != '\n'){
        //redimensionar a memória alocada 
        s = (char*)realloc(s,(tam + 2) * sizeof(char));//tam = 2 = um pro caractere e outro pro terminador
        s[tam] = c;
        tam++;
        scanf("%c", &c);
    }
    s[tam] = '\0';
    printf("String armazenada: %s\n", s);
    printf("Tamanho da memoria alocada: %d bytes\n", tam + 1); // +1 para o terminador nulo
    free(s);


}