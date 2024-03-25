/* 

Questão 13: Faça um programa que leia um caractere do tipo char e depois o imprima entre
aspas duplas. Assim, se o caractere lido for a letra A, deverá ser impresso “A”.


Alunos: 
Matheus Garcia 2023010191 
Ranier Sales 2023011223

*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

  char caractere;

  printf("Digite um caractere: ");
  scanf("%c", &caractere);

  printf("O caractere lido é: \"%c\"",caractere);

  system("pause");
  return 0;
}
