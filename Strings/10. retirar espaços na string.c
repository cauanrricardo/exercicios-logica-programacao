#include <stdio.h>
#include <string.h>

int main(){
    
    int flag = 1;
    char s[200];
   
    while(scanf("%s", s) == 1){//vai ler enquanto scanf retornar 1
        if(!flag) printf(" ");//O operador ! é o operador lógico de negação em C.
        printf("%s", s);
        flag = 0;
    }
    printf("\n");
    
}