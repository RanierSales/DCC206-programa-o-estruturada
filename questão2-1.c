/*Questão 1: Faça um programa que leia um número inteiro e retorne seu antecessor e seu
sucessor.

Matheus Garcia 2023010191 
Ranier Sales 2023011223

*/


#include <stdio.h>

int main(void)
{
    int num1; //variavél para armazenar o número inteiro
    printf("Escolha um número :\n");
    scanf("%d",&num1); //lendo o número
    printf("O seu sucessor é %d e seu antecessor é %d",num1+1,num1-1); //dentro do proprio print f, se faz somando +1 e -1 com a variável 
}