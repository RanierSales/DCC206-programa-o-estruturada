/* Questão 8: Leia um valor que represente uma temperatura em graus Celsius e apresente-a
convertida em graus Fahrenheit. A fórmula de conversão é: F = C * (9.0/5.0) +
32.0, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.


Alunos:
Matheus Garcia 2023010191 
Ranier Sales 2023011223

*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  float tempCel,formula; 
  
  printf("Qual a temperatuda que deseja converter: "); 
  scanf("%f",&tempCel); //leitura da temperatura Celsius
  
  formula= (tempCel*(9.0/5.0))+32.0;  //transformação para Fahrenheit usando a formula
  printf("A temperatuda em Fahrenheit é %.2f °F",formula);


  system("pause");
  return 0;
}