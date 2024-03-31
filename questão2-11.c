/* Questão 11: Leia o valor do raio de um círculo. Calcule e imprima a área do círculo
correspondente. A área do círculo é A = π* raio2, sendo π = 3.141592.

Alunos:
Matheus Garcia 2023010191 
Ranier Sales 2023011223

*/

#include <stdio.h>
#include <stdlib.h>

#define pi 3.141592
int main(void)
{
  float area,raio; 
  
  printf("Qual o raio do circulo : "); 
  scanf("%f",&raio); //leitura do raio
  
  area = pi*(raio*raio);  //calculo da área do círculo
  printf("A área terá valor de %f",area);

  system("pause");
  return 0;
}