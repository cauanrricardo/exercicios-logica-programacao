#include <stdio.h>
#include <string.h>

int main() {
    int n, i, j, total_leds;
    char numero[101];  
    
    int leds_por_digito[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    scanf("%d", &n);
    
    for (i = 0; i < n; i++) {
        total_leds = 0;
        
        scanf("%s", numero);
        for (j = 0; j < strlen(numero); j++) {
            total_leds += leds_por_digito[numero[j] - '0'];//caractere pra numero;
        }
        
        printf("%d leds\n", total_leds);
    }
    
    return 0;
}
