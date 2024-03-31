/* Questão 10: A importância de R$ 780.000,00 será dividida entre três ganhadores de um
concurso, sendo que:
i. O primeiro ganhador receberá 46% do total.
ii. O segundo receberá 32% do total.
iii. O terceiro receberá o restante.
Calcule e imprima a quantia recebida por cada um dos ganhadores.

Alunos:
Matheus Garcia 2023010191 
Ranier Sales 2023011223

*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float premio=780000;
  
    printf("O ganhador 1 vai ganhar R$%.2f, o segundo ganhar ganhará R$%.2f e o ultimo receberá R$%.2f",  (premio*46)/100,(premio*32)/100,(premio*22)/100); 

  system("pause");
  return 0;
}