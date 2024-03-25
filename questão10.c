/*10. Elabore um programa que solicite ao usuário entrar com o valor do dia, mês e ano
(inteiros). Em seguida, imprima os valores lidos separados por uma barra (\).*/ 


#include <stdio.h>
int main(void){ //funtion void (sem retorno).
  //variaveis com as informações do dia, mês e ano.
  int day;
  int month; 
  int year;
  printf("Digite o dia, mês e ano que você nasceu:\n"); 
  scanf("%d/%d/%d",&day,&month,&year); //usamos "/" para separar o input 
  printf("A data é %d/%d/%d", day,month,year);
}


//Matheus Garcia 2023010191 
//Ranier Sales 2023011223
