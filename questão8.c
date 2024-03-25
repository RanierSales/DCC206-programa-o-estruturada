/*8. Faça um programa que leia dois números inteiros e depois os imprima na ordem inversa em que eles foram lidos.*/ 

#include <stdio.h> 

int main(void) { //paradigma vazio para não precisar usar return  
  int num1;
  int num2;
  printf("Digite um número : "); 
  scanf("%d",&num1);  
  printf("Digite outro número : "); 
  scanf("%d",&num2); 
  printf("Os números digitados na ordem inversa foi %d e %d",num2,num1);
}

//Matheus Garcia 2023010191 
//Ranier Sales 2023011223
