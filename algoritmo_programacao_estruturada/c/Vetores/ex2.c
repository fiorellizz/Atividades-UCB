/*Faça um programa que armazene 10 letras em um vetor e imprima uma listagem numerada.*/

#include <stdio.h>

int main()
{

    char letras[10];
    int count = 10;

    for (int i = 0; i < count; i++)
    {
        printf("Digite a %d° letra: ", i + 1);
        scanf(" %c", &letras[i]);
    }

    for (int i = 0; i < count; i++)
    {
        printf("\n%d° letra \t | \t %c", i + 1, letras[i]);
    }

    return 0;
}