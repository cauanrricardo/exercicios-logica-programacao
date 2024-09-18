/*Implemente a função 'calcula_media', que recebe um aluno passado por referência e preenche o campo 'media' com a média das 3 notas do aluno.

O arquivo de envio já terá parte do código preenchido.
Você deverá:
- Implementar a função 'calcula_media'.
- Chamar a função 'calcula_media' dentro da função 'main'.*/

#include <stdio.h>

typedef struct {
   float nota[3];
   float media;
} aluno;

// Recebe um aluno passado por referência, e preenche o campo 'media' com a
// média das 3 notas do aluno.
void calcula_media(aluno *a)
{
int i;
float soma = 0;
for(i = 0; i < 3; i++){
 soma += a->nota[i];
}
a->media = soma / 3;
}

int main()
{
   aluno a;
   int i;
   for (i = 0; i < 3; i++)
      scanf("%f", &a.nota[i]);

    calcula_media(&a);

   printf("%.1f", a.media);
}