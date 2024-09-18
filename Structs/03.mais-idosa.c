#include <stdio.h>
#include <string.h>

 typedef struct{
    char nome[50];
    int idade;
    char sexo;
} pessoa;

//funcao para ler os dados do struct(pessoa)
void leitura_dados(pessoa idosa[], int qnt_pessoas){
int i;
for(i = 0; i < qnt_pessoas; i++){
    printf("Digite seu nome: ");
    scanf(" %[^\n]", idosa[i].nome);
    printf("Digite sua idade: ");
    scanf("%d", &idosa[i].idade);
    printf("Digite seu sexo [M] ou [F]: ");
    scanf(" %c", &idosa[i].sexo);
}

}

void mais_idosa(pessoa idosa[],int qnt_pessoas){
int i;
int maior_idade = -1;
int encontrada = 0; //flag 1 = verdadeiro -- 0 = falso
char nome_idosa[50];

for(i = 0; i < qnt_pessoas; i++){
 if(idosa[i].idade > maior_idade && idosa[i].sexo == 'F' || idosa[i].sexo == 'f'){
    maior_idade = idosa[i].idade;
    strcpy(nome_idosa, idosa[i].nome);//destino - origem
    encontrada = 1;
 }
 
}
if(encontrada == 1) printf("%s\n", nome_idosa);
else printf("Nao ha mulher na lista!\n");

}

int main(){
 int qnt_pessoas;
 printf("Digite a quantidade de pessoas: ");
 scanf("%d", &qnt_pessoas);

 pessoa idosa [qnt_pessoas];
 leitura_dados(idosa, qnt_pessoas);
 mais_idosa(idosa, qnt_pessoas);

}