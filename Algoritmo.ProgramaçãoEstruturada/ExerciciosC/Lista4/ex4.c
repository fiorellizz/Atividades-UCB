/*Escreva um programa que indique o número de dias existentes em um mês.*/

#include <stdio.h>

int main()
{

    int mes;

    printf("Digite qual mês você quer saber quantos dias tem: ");
    scanf("%d", &mes);

    switch (mes)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("O mês escolhido tem 31 dias");
        break;

    case 2:
        printf("O mês escolhido tem 28 dias");
        break;

    case 4:
    case 6:
    case 9:
    case 11:
        printf("O mês escolhindo tem 30 dias");

    default:
        printf("VALOR INVALIDO");
        break;
    }

    return 0;
}