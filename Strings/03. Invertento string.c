#include <stdio.h>
#include <string.h>

int main()
{
    char txt[100];
    scanf("%[^\n]", txt);

    int t_txt = strlen(txt);

    for (int i = t_txt - 1; i >= 0; i--)
    {
        printf("%c", txt[i]);
    }
}