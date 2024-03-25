/* 

Questão 7: Elabore um programa que leia um caractere e depois o imprima como um valor inteiro.

Matheus Garcia 2023010191 
Ranier Sales 2023011223

*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

  char caractere; //criação de variável para recebimento do caractere

  printf("digite um caractere qualquer: ");
  scanf("%c", &caractere); //recebimento do caractere

  int valorDoCaractere = caractere; //transformação do caractere em valor inteiro

  printf("o valor lido é: %d", valorDoCaractere); //print do valor inteiro do caractere

  system("pause");
  return 0;
}

