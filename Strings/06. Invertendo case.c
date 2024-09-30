#include <stdio.h>
#include <string.h>

int main()
{

  int i;
  char s[100];
  scanf("%[^\n]", s);

  for (i = 0; s[i]; i++)
  {
    if (s[i] >= 65 && s[i] <= 90)//se for maiscula
    {
      s[i] = s[i] + 32;
      printf("%c", s[i]);
    }
    else if (s[i] >= 97 && s[i] <= 122)//se for minuscula
    {
      s[i] = s[i] - 32;
      printf("%c", s[i]);
    }
    else
      printf("%c", s[i]);
  }
}