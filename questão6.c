/*6. Faça um programa que leia um valor do tipo double e depois o imprima na forma de notação científica.*/ 

#include <stdio.h>  
int main(void) { //main function e paradigma vazio para não precisar usar return 0;  
  double num;
  printf("Digite sua altura em metros:\n"); 
  scanf("%lf",&num); //%lf para double
  printf("Sua altura em notação é %e",num); 
} 


//Matheus Garcia 2023010191 
//Ranier Sales 2023011223
