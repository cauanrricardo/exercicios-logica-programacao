#include <stdio.h>
#include <string.h>

int main(){
    
    char s[50];
    scanf("%[^\n]", s);
    
    for(int i = 0; s[i]; i++){
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') printf("v");
         else if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') printf("v");
         else if(s[i] == ' ') printf(" ");
         else printf("c");
    }
    printf("\n");
    
    
    
}