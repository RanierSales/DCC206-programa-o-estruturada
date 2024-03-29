/* Questão 17: Escreva um programa que leia um nÃºmero inteiro e mostre o seu complemento
bit a bit

Alunos:
Matheus Garcia 2023010191 
Ranier Sales 2023011223

*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

  int numero;

  printf("Digite um numero qualquer:");
  scanf("%d", &numero); //leitura do numero

  unsigned char y;
  y = ~numero; //pegando seu complementar em bits usando uma variÃ¡vel sem sinal

  printf("O \"complementar em bits\" desse numero: %d\n", y);

  system("pause");
  return 0;
}