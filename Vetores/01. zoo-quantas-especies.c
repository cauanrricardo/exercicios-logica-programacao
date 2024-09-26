#include <stdio.h>
int main(){
    
    int n, rep = 0;
    scanf("%d", &n);
    int vetor[n];
    
    for(int i = 0; i < n; i++){
        scanf("%d", &vetor[i]);
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            if(vetor[i] == vetor[j]){
                rep++;
                break;
            }
        }
    }

    printf("%d", n - rep);
    
    
}