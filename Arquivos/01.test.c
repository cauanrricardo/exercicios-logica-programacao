#include <stdio.h>

typedef struct {
   int matricula;
   char nome[100];
   float media;
} aluno;

void alunos_para_arquivo(aluno turma[], int n)
{
   FILE *file = fopen("alunos.txt", "w");
   if(file == 0){
       printf("ERRO ao abrir o arquivo");
       return;
   }
   for (int i = 0; i < n; i++) {
       fprintf(file, "%d\n%s\n%f\n", turma[i].matricula, turma[i].nome, turma[i].media);
   }
   fclose(file);
}

void imprime_alunos_arquivo()
{
   FILE *file = fopen("alunos.txt", "r");
     if(file == 0){
       printf("ERRO ao abrir o arquivo");
       return;
   }
   aluno a;
   while(fscanf(file,"%d\n%[^\n]\n%f\n", &a.matricula, a.nome, &a.media) == 3){
       printf("%s\n", a.nome);
       
   }
   fclose(file);
}

int main()
{
   int n, i;
   scanf("%d\n", &n);
   aluno turma[n], a;

   for (i = 0; i < n; i++) {
       scanf("%d\n%[^\n]\n%f\n", &a.matricula, a.nome, &a.media);
       turma[i] = a;
   }
   alunos_para_arquivo(turma, n);
   imprime_alunos_arquivo();
}