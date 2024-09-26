#include <stdio.h>
int main(){
    
   int n_produtos;//quantidade de produtos
   scanf("%d", &n_produtos);
   
   float produtos[n_produtos];//le os valores do produto
   for(int i = 0; i < n_produtos; i++ ){
       scanf("%f", &produtos[i]);
   }
    
    float chute[n_produtos];//le o chute do primeiro jogador
    for(int i = 0; i < n_produtos; i++){
        scanf("%f", &chute[i]);
    }
    char escolha[n_produtos];//le a escolha do segundo jogador
    for(int i = 0; i < n_produtos; i++ ){
        scanf(" %c", &escolha[i]);
    }
    //le as pontuuacoes dos jogadores
    int pontos_primeiro = 0;
    int pontos_segundo = 0;
    
    for(int i = 0; i < n_produtos; i++){
    if(chute[i] == produtos[i]){//se o chute for igual ao valor do produto
        pontos_primeiro++;
    }
    else if(escolha[i] == 'm' && produtos[i] < chute[i]){
        pontos_segundo++;
    }
    else if(escolha[i] == 'M' && produtos[i] > chute[i]){
        pontos_segundo++;
    }
    else if(escolha[i] == 'm' && produtos[i] > chute[i]){
        pontos_primeiro++;
    }
    else if(escolha[i] == 'M' && produtos[i] < chute[i]){
        pontos_primeiro++;
    }
    else{
        pontos_primeiro++;
    }
    
    }//fechamento do for
    
    if(pontos_primeiro == pontos_segundo){
        printf("empate\n");
    }
    else if(pontos_segundo > pontos_primeiro){
        printf("segundo\n");
    }
    else{
        printf("primeiro\n");
    }
    
    
    
    
    
}
