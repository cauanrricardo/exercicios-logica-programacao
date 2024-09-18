#include <stdio.h>

// Recebe tempo em 'segundos', converte para horas, minutos e seguntos, e 
// retorna o resultado através dos parâmetros 'hor', 'min' e 'seg'.
void converte_tempo(int segundos, int *hor, int *min, int *seg)
{
    *hor = segundos / 3600;
    int resto = segundos % 3600;
    *min = resto / 60;
    *seg = resto % 60;

}

int main()
{
   int segundos, h, m, s;

   //recebe o tempo em segundos
   printf("Digite o tempo em segundos: ");
   scanf("%d", &segundos);
   
   //chama a funcao
   converte_tempo(segundos,&h,&m,&s);

   //exibe o resultado
   printf("%d:%d:%d", h, m, s);
}
//o ponteiro de *hor está guardando o resultado na variavel h, que foi passado como o & = endereco
//foi bom utilizar ponteiro nesse caso, pois nao precisa mecher diretamente na variavel do main, e sim somente no endereco de memoria dela