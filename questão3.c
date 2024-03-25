/* 

Questao 3: Escreva um programa que leia um número inteiro e depois imprima a mensagem
  “Valor lido:”, seguido do valor inteiro. Use apenas um comando printf().

*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int numero; //cosntante para armazenar o numero

  printf("Digite um numero: ");
  scanf("%d", &numero); //recebimento do numero inteiro digitado na constante

  printf("Valor lido: %d", numero); //print do numero lido

  system("pause");
  return 0;
} 


//Matheus Garcia 2023010191 
//Ranier Sales 2023011223
