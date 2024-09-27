#include <stdio.h>

int main()
{
    //total_album = figurinhas totais do album
    //total_baruel = figurinhas que baruel possui
    int total_album, total_baruel, i, j, encontrou, cont_faltando = 0, cont_repetida = 0;
    scanf("%d %d", &total_album, &total_baruel);
    int figuras[total_baruel]; 

    // le os as figurinhas de baruel 
    for (i = 0; i < total_baruel; i++) 
    {
        scanf("%d", &figuras[i]);
    }

    //verifica se e repetida, e se for imprime
    for (i = 1; i < total_baruel; i++)
    {
        if (figuras[i] == figuras[i - 1])
        {
            printf("%d ", figuras[i]);
            cont_repetida++;
        }
    }
    if (cont_repetida == 0)
        printf("N");
    printf("\n");

    for (j = 1; j <= total_album; j++)
    {
        encontrou = 0;
        for (i = 0; i < total_baruel; i++)
            if (figuras[i] == j)
                encontrou = 1;
        if (encontrou == 0)
        {
            printf("%d ", j);
            cont_faltando++;
        }
    }
    if (cont_faltando == 0)
        printf("N");
}