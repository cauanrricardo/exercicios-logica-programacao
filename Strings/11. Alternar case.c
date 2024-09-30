#include <stdio.h>
#include <string.h>

int main()
{

    char s[100];
    int n, prox_maiuscula, i;

    scanf("%d", &n);
    getchar();

    for (i = 0; i < n; i++)
    {
        fgets(s, 100, stdin);

        if (s[0] >= 'a' && s[0] <= 'z')
        {
            prox_maiuscula = 1;
        }
        else
            prox_maiuscula = 0;
    }

    for (i = 1; s[i]; i++)
    {
        if (prox_maiuscula && s[0] >= 'a' && s[0] <= 'z')
        {
            s[i] = s[i] - 32;
        }
        else if (!prox_maiuscula && s[0] >= 'A' && s[0] <= 'Z')
        {
            s[i] = s[i] + 32;
        }
        if (s[i] != ' ')
        {
            prox_maiuscula = !prox_maiuscula;
        }
    }

    printf("%s", s);
}
