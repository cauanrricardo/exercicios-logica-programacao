#include <stdio.h>

struct registro{
    
    char nome[50];
    float notas[3];
    
};

struct registro leitura_registro (){//funcao pra ler os alunos
    struct registro aluno;
    scanf(" %[^\n]", aluno.nome);
    for(int i = 0; i < 3; i++){
        scanf("%f", &aluno.notas[i]);
    }
    return aluno;
  
}

void media(){
    
    struct registro aluno = leitura_registro();
    struct registro aluno2 = leitura_registro();
    float soma1 = 0,soma2 = 0, media1, media2;
    
    for(int i = 0; i < 3; i++){
        soma1 += aluno.notas[i]; 
    }
    media1 = soma1/3;
     for(int i = 0; i < 3; i++){
        soma2 += aluno2.notas[i]; 
    }
    media2 = soma2 / 3;
    float media_final = (media1 + media2) /2;
    printf("%.1f", media_final);
}

int main(){
    
    media();
    
}