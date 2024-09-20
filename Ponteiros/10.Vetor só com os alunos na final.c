#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int matricula;
    char nome[50];
    float media;
} aluno;

void leitura_dados(aluno *alunos, int n)
{
int i;
    for(i = 0; i < n; i++){
    printf("Digite o nome do aluno: ");
    scanf("%s", alunos[i].nome);
    printf("Digite a matricula do %s: ", alunos[i].nome);
    scanf("%d", &alunos[i].matricula);
    printf("Digite a media do %s: ", alunos[i].nome);
    scanf("%f", &alunos[i].media);
    printf("----------------------------------------------\n");
    }
}

int main(){

    int n;
    printf("digite a quantidade de alunos: ");
    scanf("%d", &n);
    aluno *alunos;

    alunos = (aluno*)malloc(n * sizeof(aluno));
    leitura_dados(alunos, n);

    int cont = 0;
    int i;
    for(i = 0; i < n; i++){
        if(alunos[i].media >= 4.0 && alunos[i].media <= 7.0){
            cont++;
        }
    }

    aluno *final;
    //fazendo a alocacao somente para as pessoas de final
    final = (aluno*)malloc(cont * sizeof(aluno));

    int j = 0;
    for(i = 0; i < n; i++){
        if(alunos[i].media >= 4.0 && alunos[i].media <= 7.0){
            final[j++] = alunos[i];
        }
    }

   printf("Aluno selecionado para a prova final: \n");
   for(i = 0; i < cont; i++){
    printf("Matricula: %d\n", final[i].matricula);
    printf("Nome: %s\n", final[i].nome);
    printf("Media: %.2f\n", final[i].media);
   }
 free(alunos);
 free(final);

}