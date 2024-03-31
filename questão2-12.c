/* Questão 12: Leia a altura e o raio de um cilindro circular e imprima o volume desse cilindro. O
volume de um cilindro circular é calculado por meio da seguinte fórmula:
em que π = 3.141592

Alunos:
Matheus Garcia 2023010191 
Ranier Sales 2023011223

*/

#include <stdio.h>
#include <stdlib.h>

#define pi 3.141592
int main(void)
{
  float volume,altura,raio; 
  
  printf("Qual a altura do cilindro : "); 
  scanf("%f",&altura); //leitura da altura
  
  printf("Qual o raio do cilindro : "); 
  scanf("%f",&raio); //leitura do raio da base do cilindro
  
  volume=pi*(raio*raio)*altura;  
  printf("A área terá valor de %f",volume);

  system("pause");
  return 0;
}