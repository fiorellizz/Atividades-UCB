/*Faça um programa em C que leia os elementos de uma matriz do tipo inteiro com tamanho 10 X 10. Ao final, imprima todos os elementos.*/

#include <stdio.h>

int main(){

    int numeros[10][10];

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("Informe o numero %d da linha %d: ", j+1, i+1);
            scanf("%d", &numeros[j][i]);
        }
    }

    for (int i = 0; i < 10; i++)
    {
        printf("COL %d\t", i + 1);
    }
    printf("\n");

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d\t", numeros[j][i]);
        }
        printf("\n");
    }
    
    return 0;
}