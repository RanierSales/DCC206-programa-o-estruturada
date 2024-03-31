/* Questão 5: Faça um programa que calcule o ano de nascimento de uma pessoa a partir de
sua idade e do ano atual

Alunos:
Matheus Garcia 2023010191 
Ranier Sales 2023011223

*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int ano,idade;
  
  printf("Qual sua idade e ano atual :");
  scanf("%d %d",&idade,&ano); //leitura dos valores
  
  printf("O ano que você nasceu foi %d",ano-idade); //calculo + print do ano de nascimento
 

  system("pause");
  return 0;
}