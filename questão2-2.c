/* Questão 2: Faça um programa que leia um número real e imprima a quinta parte desse
número.

Alunos:
Matheus Garcia 2023010191 
Ranier Sales 2023011223

*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float num1; 
    printf("Escolha um número :\n");
    scanf("%f",&num1); //leitura do numero 
  
    printf("A quinta parte desse número é %.2f",num1/5.0); //dentro do print é feita a operação de divisão

    system("pause");
    return 0;
}