/* Questão 15: Faça um programa para ler um número inteiro positivo de três dígitos. Em
seguida, calcule e mostre o número formado pelos dígitos invertidos do número
lido. Exemplo: Número lido = 123 Número gerado = 321

Alunos:
Matheus Garcia 2023010191 
Ranier Sales 2023011223

*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int numero; 

  printf("Digite um numero: ");
  scanf("%d", &numero); //leitura do numero

/* 
aqui usaremos o principio de que para inverter um numero sempre pegaremos o quociente + o resto da divisão multiplicado por 10 elevado a posição dele
*/
  int divisor = 100;
  int numero_final = 0;
  
  numero_final = numero/divisor;
  numero = numero%divisor;
  
  divisor = 10;
  numero_final += (numero/divisor)*10;
  numero = numero%divisor;

  numero_final += numero*100;
  
  printf("%d",numero_final);
  

  system("pause");
  return 0;
}