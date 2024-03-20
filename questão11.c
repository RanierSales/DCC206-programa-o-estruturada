/*11. Elabore um programa que contenha uma constante qualquer do tipo float. Use ocomando #define. Imprima essa constante.*/ 

#include <stdio.h> 
#define PI 3.14
int main(void) { //paradigma vazio para não precisar usar return 0;  
  printf("%.2f",PI); //Usa-se 2f para imprimir apenas dois números depois do ponto.
} 
