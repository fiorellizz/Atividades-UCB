/*Faça um programa que leia um número entre 0 e 10, e escreva este número por extenso. Use o comando switch.*/

#include <stdio.h>

int main(){

    int numero;

    printf("Digite um número de 0 a 10: ");
    scanf("%d", &numero);

    switch (numero)
    {
    case 0:
        printf("O numero digitado foi Zero");
        break;
    
    case 1:
        printf("O numero digitado foi Um");
        break;
    
    case 2:
        printf("O numero digitado foi Dois");
        break;
    
    case 3:
        printf("O numero digitado foi Três");
        break;
    
    case 4:
        printf("O numero digitado foi Quatro");
        break;
    
    case 5:
        printf("O numero digitado foi Cinco");
        break;
    
    case 6:
        printf("O numero digitado foi Seis");
        break;
    
    case 7:
        printf("O numero digitado foi Sete");
        break;
    
    case 8:
        printf("O numero digitado foi Oito");
        break;
    
    case 9:
        printf("O numero digitado foi Nove");
        break;
    
    case 10:
        printf("O numero digitado foi Dez");
        break;
    
    default:
        printf("Número invalido");
        break;
    }

    return 0;
}