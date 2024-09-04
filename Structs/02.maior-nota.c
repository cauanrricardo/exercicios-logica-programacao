#include <stdio.h>

//declaracao do struct
struct info_aluno{
        
    char nome[50];
    int matricula;
    char disciplina[50];
    float nota;
    
};

//funcao para ler as variaveis definidas no struct
struct info_aluno registro_aluno(){
    struct info_aluno aluno;
    scanf(" %[^\n]", aluno.nome);
    scanf("%d", &aluno.matricula);
    scanf(" %[^\n]", aluno.disciplina);
    scanf("%f", &aluno.nota);
    
    return aluno;

}

//funcao para fazer a logica do progama + imprimir o resultado
void imprimidora(){
    
   struct info_aluno aluno2 = registro_aluno();
   struct info_aluno aluno = registro_aluno();
    if(aluno.nota >aluno2.nota)printf("%s , %.1f", aluno.nome, aluno.nota);
    else if(aluno2.nota >aluno.nota)printf("%s , %.1f", aluno2.nome, aluno2.nota);
    else printf("%s e %s , %.1f", aluno2.nome, aluno.nome, aluno2.nota);
    
}

int main(){
    
    imprimidora();
    
}