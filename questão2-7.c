/* Questão 7: Faça um programa que leia um valor em reais e a cotação do dólar. Em seguida,
imprima o valor correspondente em dólares.

Alunos:
Matheus Garcia 2023010191 
Ranier Sales 2023011223

*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  float ValorReal, cotacaoUSD, result;
  
  printf("Qual o valor em Real para transformar em dólar: ");
  scanf("%f",&ValorReal);  //leitura do valor em reais
  
  printf("Qual a cotação atual: ");
  scanf("%f",&cotacaoUSD); //leitura da cotação do dolar
  
  result=ValorReal/cotacaoUSD; //transformação de reais em doláres pela cotação informada
  printf("O valor ficou em $%.2f dolares",result);

  system("pause");
  return 0;
}