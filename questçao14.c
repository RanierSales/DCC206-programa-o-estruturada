/*14. Faça um programa que leia três caracteres do tipo char e depois os imprima um em cada linha. Use um único comando printf() para isso.*/ 


#include <stdio.h> 
int main(void) { //paradigma vazio para não precisar usar return 0;  
  char letra1;
  char letra2;
  char letra3;
  printf("Digite 3 caracteres:\n"); 
  scanf("%c %c %c",&letra1,&letra2,&letra3); 
  printf("Os caracteres digitados foram:\n%c\n%c\n%c",letra1,letra2,letra3);
}  

//Matheus Garcia 2023010191 
//Ranier Sales 2023011223
  
