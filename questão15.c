/*15. Escreva um programa que leia três variáveis: char, int e float. Em seguida,
imprima-as de três maneiras diferentes: separadas por espaços, por uma
tabulação horizontal e uma em cada linha. Use um único comando printf()
para cada operação de escrita das três variáveis.*/


#include <stdio.h>
int main (void){ 
  char letra ='a';
  int num =10;
  float num2=2.5;
  printf("Por espaço :\n %c  %d  %.2f\n",letra,num,num2);
  printf("tabulação horizontal : \n %c\t %d\t %.2f\t\n",letra,num,num2); 
  printf("por quebra de linha : \n %c\n %d\n %.2f\n",letra,num,num2);
} 

//Matheus Garcia 2023010191 
//Ranier Sales 2023011223
