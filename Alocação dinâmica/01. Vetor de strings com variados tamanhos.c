#include <stdio.h>
#include <stdlib.h>

int main(){
 
 int n,i,num;
 printf("Digite a quantiodade de strings: ");
 scanf("%d", &n);

 char *s = (char*)malloc(n * sizeof(char));

//leitura dos dados;
 for(i = 0; i < n; i++){
    scanf("%d", &num[i]);
    scanf("%[^\n]", s[i]);
 }
 for(i = 0; i < n; i++){
    printf("%s\n", s[i]);
 }

}