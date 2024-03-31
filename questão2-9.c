/* Questão 9: Leia um ângulo em graus e apresente-o convertido em radianos. A fórmula de
conversão é R = G * π/180, sendo G o ângulo em graus e R em radianos e π =
3.141592.


Alunos:
Matheus Garcia 2023010191 
Ranier Sales 2023011223

*/

#include <stdio.h>
#include <stdlib.h>

#define pi 3.141592
int main(void)
{
  float grau,formulaR;
  
  printf("Qual o ângulo em graus : "); 
  scanf("%f",&grau); //leitura do angulo em graus
  
  formulaR=(grau*pi)/180; //transformação em radianos
  printf("O ângulo em radianos é %.2f ou podemos escrever %.2fπ",formulaR,grau/180); //mostragem nas duas formas de radianos

  system("pause");
  return 0;
}