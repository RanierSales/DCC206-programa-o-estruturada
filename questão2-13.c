/* Questão 13: Sejam a e b os catetos de um triângulo cuja hipotenusa h é obtida pela equação:
Faça um programa que leia os valores de a e b, e calcule o valor da hipotenusa
através da fórmula dada. Imprima o resultado

Alunos:
Matheus Garcia 2023010191 
Ranier Sales 2023011223

*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int hipotenusa,catetoA,catetoB; 
  
  printf("Qual o cateto A : "); 
  scanf("%d",&catetoA);
  
  printf("Qual o cateto B : "); 
  scanf("%d",&catetoB); 
  
  hipotenusa= sqrt((catetoA*catetoA)+(catetoB*catetoB));  //calculo da hipotenusa usando a formula
  printf("A hipotenusa é igual a %d",hipotenusa);

  system("pause");
  return 0;
}