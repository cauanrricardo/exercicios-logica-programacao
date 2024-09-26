#include <stdio.h>
#include <stdlib.h>

int funcao_abs(int a, int b)
{
    int resultado;
    if (a < 0 || b < 0)
    {
        resultado = abs(a - b);
    }
    else
    {
        resultado = abs(a - b);
    }
    return resultado;
}

int main()
{
    int x1, x2,resultado;
    printf("Digite o primeiro numero: ");
    scanf("%d", &x1);
    printf("Digite o segundo numero: ");
    scanf("%d", &x2);
    resultado = funcao_abs(x1, x2);
    printf("Valor absoluto: %d", resultado);
}
