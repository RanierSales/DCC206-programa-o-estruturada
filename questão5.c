/*5. Faça um programa que leia um valor do tipo float e depois o imprima usando o
operador “%d”. Veja o que aconteceu.*/

#include <stdio.h>  
int main(void) { //main function e paradigma vazio para não precisar usar return 0;  
  float num;
  printf("Digite um numero inteiro:\n"); 
  scanf("%f",&num);
  printf("O numero digitado foi %d",num); 
} 

//Vai dar erro no programa por conta de colocar um tipo de variavel diferente no segundo printf

//Matheus Garcia 2023010191 
//Ranier Sales 2023011223
