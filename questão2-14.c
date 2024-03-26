/* Questão 14: Faça um programa que converta uma letra maiúscula em letra minúscula. Use a
tabela ASCII para isso. 

Alunos:
Matheus Garcia 2023010191 
Ranier Sales 2023011223

*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

  char letra; //variavel para armazenar a letrea

  printf("Digite a letra em maísculo: ");
  scanf("%c", &letra); //recebimento da letra maiscula

  int valor = letra; //cada caractere possui um valor, logo estamos criando uma variavel inteira para aumentar esse valor e assim transformar de maiscula para minuscula
  valor = valor + 32; 

  char letra_minuscula = valor; //variavel recebendo o valor maior correspondente ao caractere minusculo 

  printf("A letra é %c", letra_minuscula);

  system("pause");
  return 0;
}