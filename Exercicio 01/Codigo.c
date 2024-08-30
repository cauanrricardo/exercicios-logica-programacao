#include <stdio.h>

int main() {
    //leituras das variaveis
    int i, j;
    int l, c;
    
    //leitura do tamanho da matriz
    scanf("%d %d", &l, &c);
    
    char mat[l][c];
    char mat_final[l][c];
    
    //leitura matriz
    for(i = 0; i < l; i++) {
        for(j = 0; j < c; j++) {
            scanf(" %c", &mat[i][j]);
        }
    }
    
   //acessar cada elemento da matriz
    for(i = 0; i < l; i++) {
        for(j = 0; j < c; j++) {
            int bomb = 0;
            if (mat[i][j] == '*') {
                mat_final[i][j] = '*'; 
            } else {
                // contar minas ao redor
                if (i - 1 >= 0 && mat[i - 1][j] == '*') bomb++;
                if (i + 1 < l && mat[i + 1][j] == '*') bomb++;
                if (j - 1 >= 0 && mat[i][j - 1] == '*') bomb++;
                if (j + 1 < c && mat[i][j + 1] == '*') bomb++;
                if (i - 1 >= 0 && j - 1 >= 0 && mat[i - 1][j - 1] == '*') bomb++;
                if (i - 1 >= 0 && j + 1 < c && mat[i - 1][j + 1] == '*') bomb++;
                if (i + 1 < l && j - 1 >= 0 && mat[i + 1][j - 1] == '*') bomb++;
                if (i + 1 < l && j + 1 < c && mat[i + 1][j + 1] == '*') bomb++;
                
                if (bomb == 0) {
                    mat_final[i][j] = '-';
                } else {
                    mat_final[i][j] = '0' + bomb; 
                }
            }
        }
    }
    
    // impressão da matriz final
    for(i = 0; i < l; i++) {
        for(j = 0; j < c; j++) {
            printf("%c", mat_final[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
