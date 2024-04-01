/* Questão 8: Escreva um programa que, dada a idade de um nadador, classifique-o em uma das seguintes categorias:

Alunos:
Matheus Garcia 2023010191 
Ranier Sales 2023011223

*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int idade;

  printf("Digite sua idade em anos: ");
  scanf("%d", &idade); //leitura da idade
//verificação a apartir de um intervalo de valores, qual categoria de acordo com a idade
  if (idade>=5 && idade<=7) { 
    printf("Sua categoria é Infantil A");
  }
    
  else if (idade>=8 && idade<=10) {
    printf("Sua categoria é Infantil B");
  }
    
  else if (idade>=11 && idade<=13) {
    printf("Sua categoria é Juvenil A");
  }
    
  else if (idade>=14 && idade<=17) {
    printf("Sua categoria é Juvenil B");
  }

  else if (idade>=18) {
    printf("Sua categoria é Sênior");
  }

  system ("pause");
  return 0;
}
