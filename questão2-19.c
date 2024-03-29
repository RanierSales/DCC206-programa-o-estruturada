/* Questão 19: Elabore um programa que leia dois números inteiros e exiba o resultado das
operações de “ou exclusivo”, “ou bit a bit” e “e bit a bit” entre eles

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

  unsigned char y; //variável para realização das operações sem depender do sinal

  y = numero1 & numero2;
  printf("A operação \"e bit a bit\" entre esses dois números é: %d\n", y);

  y = numero1 | numero2;
  printf("A operação \"ou bit a bit\" entre esses dois números é: %d\n", y);

  y = numero1 ^ numero2;
  printf("A operação \"ou exclusivo\" entre esses dois números é: %d\n", y);
  
  system("pause");
  return 0;
}