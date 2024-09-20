#include <stdio.h>

int main(){

    FILE *f = fopen("teste.txt", "w");
    fprintf(f,"Hello Arquivos!");
    fclose(f);//linha de fechar o arquivo
}