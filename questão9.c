/* 

Questão 9: Faça um programa que leia dois valores do tipo float. Use um único comando de
leitura para isso. Em seguida, imprima os valores lidos na ordem inversa em que
eles foram lidos.

Alunos: 
Matheus Garcia 2023010191 
Ranier Sales 2023011223

*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

  float numero1; //criação de variável para leitura dos valores
  float numero2; 

  printf("digite dois numeros:\n");
  scanf("%f %f", &numero1, &numero2); //recebimento do primeiro e segundo numero

  printf("o segundo numero é: %f\ne o primeiro numero é %f", numero2, numero1); //print do valor inteiro do caractere

  system("pause");
  return 0;
}
