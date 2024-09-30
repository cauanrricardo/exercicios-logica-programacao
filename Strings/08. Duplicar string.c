#include <stdio.h>
#include <string.h>

int main()
{

    char s[100];

    while (scanf("%s", s) > 0)
    {
        printf("%s %s ", s, s);
    }

    return 0;
}
