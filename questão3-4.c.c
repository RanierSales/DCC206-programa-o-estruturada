/* Questão 4: Faça um programa que leia o salário de um trabalhador e o valor da prestação de um empréstimo. Se a prestação:
• For maior que 20% do salário, imprima: “Empréstimo não concedido.”
• Caso contrário, imprima: “Empréstimo concedido.”

Alunos:
Matheus Garcia 2023010191 
Ranier Sales 2023011223

*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

  float salario, prestacao;

  printf("Digite o salário e a prestacão: ");
  scanf("%f %f", &salario, &prestacao); //leitura do salario e prestação

  if (prestacao > (salario*0.2)) { //verificação se a prestação é maior que 20% do salário
    printf("Empréstimo não concedido.");
  }
  else { //caso negativo
    printf("Empréstimo concedido");
  }

  system("pause");
  return 0;
}
