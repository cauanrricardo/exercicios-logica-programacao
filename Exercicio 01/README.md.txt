Tema do exercicio: Matriz

L3 - Campo @minado

Motivação
Robert Donner, em 1989, criou um jogo cujo objetivo seria revelar a localização de minas em um campo sem que nenhuma seja detonada.
Para isso o tabuleiro é formado de minas, números e espaços vazios.
As regras são simples :
- Se um bloco é um número, ele informará quantas minas estão escondidas nos oito quadrados que o cercam.
- Se um bloco é vazio, é porque não há nenhuma mina ao seu redor.
- Um bloco pode ser uma mina, nesse caso ele é representado por um símbolo.

O jogador deve usar essas informações para deduzir em que quadrados próximos é seguro clicar.
Dada uma matriz com a posição de cada mina, seu o programa deve preencher o resto do campo (matriz) com números ou com vazios;

As minas são simbolizadas com asteriscos * e os campos vazios são simbolizados com sinal de menos -

Ação
Leia uma matriz com n linhas e m colunas com a posição das minas. Preencha o restante da matriz seguindo as regras citadas.
Considere ( 1 <=  n, m<= 50).

Entrada
O número n(linhas)e m(colunas) .

Cada elemento da matriz: * ou -

Saída
Campo preenchido com minas, vazios e números.

Exemplos
>>>>>>>>
3 3
***
--*
--*
========
***
25*
-2*
<<<<<<<<

>>>>>>>>
3 3
---
-*-
---
========
111
1*1
111
<<<<<<<<

>>>>>>>>
3 5
*----
----*
---**
========
*1-11
1113*
--1**
<<<<<<<<

>>>>>>>>
1 1
*
========
*
<<<<<<<<