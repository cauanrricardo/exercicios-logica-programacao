#include <stdio.h>
#include <string.h>

int main()
{

    char s[100];
    scanf("%[^\n]", s);

    for (int i = 0; s[i]; i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            printf("%c", s[i]);
    }

    printf("\n");

    for (int i = 0; s[i]; i++)
    { // for diferente de vogal
        if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && s[i] != ' ')
            printf("%c", s[i]);
    }
}
