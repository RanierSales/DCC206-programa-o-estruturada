/* Questão 16: Escreva um programa que leia um número inteiro e mostre a multiplicação e a
divisão desse número por dois (utilize os operadores de deslocamento de bits).

Alunos:
Matheus Garcia 2023010191 
Ranier Sales 2023011223

*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int numero1;

  printf("Digite dois números:\n");
  scanf("%d", &numero1); //leitura do numero

  unsigned char y;

  y = numero1<<1; //usando deslocamento de uma casa para multplicação
  printf("%d multiplicado por 2 = %d\n",numero1,y);
  y = numero1>>1; //usando deslocamento de uma casa para divisão
  printf("%d dividido por 2 = %d",numero1,y);
  

  system("pause");
  return 0;
}