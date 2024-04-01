/* Questão 6: Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso ideal, utilizando as seguintes fórmulas (em que “h” corresponde à altura):
• Homens: (72,7 * h) – 58
• Mulheres: (62,1 * h) – 44,7

Alunos:
Matheus Garcia 2023010191 
Ranier Sales 2023011223

*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

  float altura;
  int sexo;

  printf("Digite sua altura: ");
  scanf("%f", &altura); //leitura da altura

  printf("Digite qual seu sexo:\n1-Homem\n2-Mulher\n");
  scanf("%d", &sexo); //leitura do sexo

  switch (sexo) {
    case 1: { //caso de ser homem
      float peso = (72.7*altura)-58;
      printf("Seu peso ideal é: %.2fKg", peso);
    }
      break;
    case 2: { //caso de ser mulher
      float peso = (62.1*altura)-44.7;
      printf("Seu peso ideal é: %.2fKg", peso);
    }
      break;
  }

  system ("pause");
  return 0;
}
