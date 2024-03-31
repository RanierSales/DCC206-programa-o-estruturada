/* Questão 18: Elabore um programa que leia dois números inteiros e exiba o deslocamento, à
esquerda e à direita, do primeiro número pelo segundo

Alunos:
Matheus Garcia 2023010191 
Ranier Sales 2023011223

*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int numero1;
  int numero2;

  printf("Digite dois números:\n");
  scanf("%d %d", &numero1, &numero2); //leitura dos dois numeros

  unsigned char y,x; //variável para realização das operações sem depender do sinal

  y = numero1<<numero2;
  x = numero1>>numero1;
  
  printf("deslocamento a esquerda: %d\ndeslocamento a direita: %d", y, x);

  system("pause");
  return 0;
}