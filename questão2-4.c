/* Questão 4: Leia quatro valores do tipo float. Calcule e exiba a média aritmética desses
valores.

Alunos:
Matheus Garcia 2023010191 
Ranier Sales 2023011223

*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float num1,num2,num3,num4,media; 
  
    printf("Escolha quatro números :\n");
    scanf("%f %f %f %f",&num1,&num2,&num3,&num4); //leitura dos valores
  
    media =(num1+num2+num3+num4) / 4; //soma e divisão por 4 para obter a média aritmética
    printf("A média é %.2f",media);

    system("pause");
    return 0;
}