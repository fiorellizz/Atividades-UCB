/*Crie um programa que armazene dados inteiros em uma matriz de ordem 5 e imprima: Todos os elementos que se encontram em posições cuja linha mais coluna formam um número par.*/

#include <stdio.h>

int main()
{

    int numeros[5][5];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Digite o %d numero da coluna %d: ", i + 1, j + 1);
            scanf("%d", &numeros[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if ((i + j) % 2 == 0)
            {
                printf("%d ", numeros[i][j]);
            }
            else
            {
                printf("* ");
            }
        }
        printf("\n");
    }

    return 0;
}