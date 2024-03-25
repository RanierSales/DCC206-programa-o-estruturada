/*
  Questão 4: Faça um programa que leia um número inteiro e depois o imprima usando o
operador “%f”. Veja o que aconteceu. 

Matheus Garcia 2023010191 
Ranier Sales 2023011223

*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int numero; //cosntante para armazenar o numero inteiro

  printf("Digite um numero: ");
  scanf("%d", &numero); //recebimento do numero inteiro digitado na constante

  float numeroFloat = numero; //passagem de inteiro para float

  printf("Valor lido: %f", numeroFloat); //print do numero lido em float

  system("pause");
  return 0;
}
