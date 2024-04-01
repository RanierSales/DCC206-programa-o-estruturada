/* Questão 2: Faça um programa que leia dois números e mostre o maior deles. Se, por acaso, os dois números forem iguais, imprima a mensagem “Números iguais”.

Alunos:
Matheus Garcia 2023010191 
Ranier Sales 2023011223

*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int numero1, numero2;

  printf("Digite dois numeros: ");
  scanf("%d %d", &numero1, &numero2); //leitura dos numeros

  if (numero1 > numero2) { //checagem se o primeiro é maior
    printf("O maior é %d", numero1);
  }
    
  else {
    
    if (numero1 < numero2) { //caso não, checagem se o segundo é maior
      printf("O maior é %d", numero2);
    }
      
    else {
      printf("Numeros iguais");
    }
    
  }

  system("pause");
  return 0;
}
