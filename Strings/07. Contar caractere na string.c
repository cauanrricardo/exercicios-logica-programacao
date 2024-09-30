#include <stdio.h>
#include <string.h>

int main()
{
    int cont = 0;
    char letra;
    char txt[100];

    fgets(txt, 100, stdin);
    scanf("%c", &letra);

    for (int i = 0; txt[i]; i++)
    {
        if (txt[i] == letra || txt[i] == letra - 32 || txt[i] == letra + 32)
            cont++;
    }

    printf("%d", cont);
}