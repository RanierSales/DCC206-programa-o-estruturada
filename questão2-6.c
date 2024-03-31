/* Questão 6: Leia uma velocidade em km/h (quilômetros por hora) e apresente convertida em
m/s (metros por segundo). A fórmula de conversão é M = K/36, sendo K a
velocidade em km/h e M em m/s.

Alunos:
Matheus Garcia 2023010191 
Ranier Sales 2023011223

*/

#include <stdio.h>
#include <stdlib.h>

#define valorMS 3.6 
// definido valor de transformação de m/s para km/h 

int main(void)
{
  float velocidade, result;
  
  printf("Qual a velocidade que deseja transformar:");
  scanf("%f",&velocidade); //leitura da velocidade
  
  result=velocidade/valorMS; //transformação em Km/h para m/s
  printf("A velocidade em metros por segundo é %.2f",result);

  system("pause");
  return 0;
}