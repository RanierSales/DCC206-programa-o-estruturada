/* Questão 3: Faça um programa que leia três valores inteiros e mostre sua soma.

Alunos:
Matheus Garcia 2023010191 
Ranier Sales 2023011223

*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num1,num2,num3; 
  
    printf("Escolha três números :\n");
    scanf("%d %d %d",&num1,&num2,&num3);  //leitura dos três valores inteiros
  
    printf("A soma é igual a %d",num1+num2+num3); //soma dos valores dentro do print

    system("pause");
    return 0;
}