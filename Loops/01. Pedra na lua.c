#include <stdio.h>
#include <limits.h>

int main()
{
    int n_participantes, pedraA, pedraB, i, dif = 0;
    int menor_dif = INT_MAX;
    int melhor_participante = -1;
    int flag_ganhador = 0;

    printf("Digite a quantidade de participantes: ");
    scanf("%d", &n_participantes);

    for (i = 0; i < n_participantes; i++)
    {
        printf("Digite a distancia da pedra A do participante %d: ", i);
        scanf("%d", &pedraA);
        printf("Digite a distancia da pedra B do participante %d: ", i);
        scanf("%d", &pedraB);
        if (pedraA >= 10 && pedraB >= 10)
        {
            dif = abs(pedraA - pedraB);
            if (dif < menor_dif)
            {
                menor_dif = dif;
                melhor_participante = i;
                flag_ganhador = 1;
            }
        }
    }
    if (flag_ganhador)
    {
        printf("Ganhador da competicao foi o participante: %d\n", melhor_participante);
    }
    else
    {
        printf("sem ganhador\n");
    }

    return 0;
}
