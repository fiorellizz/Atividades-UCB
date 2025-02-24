/*Faça um programa que leia os elementos de uma matriz do tipo inteiro com tamanho 3 X 3 e imprima os elementos multiplicando por 2.*/

#include <stdio.h>

int main(){

    int numeros[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Informe o numero %d da linha %d: ", j+1, i+1);
            scanf("%d", &numeros[j][i]);
        }
    }
    
    for (int i = 0; i < 3; i++)
    {
        printf("COL %d\t", i + 1);
    }
    printf("\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", numeros[j][i] * 2);
        }
        printf("\n");
    }

    return 0;
}