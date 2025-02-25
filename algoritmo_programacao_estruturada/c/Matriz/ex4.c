/*Construa um programa que armazene dados em uma matriz de ordem 4 e imprima: Todos os elementos com números ímpares.*/

#include <stdio.h>

int main()
{

    int tamanho;

    printf("Digite o tamanho da matriz quadrada: ");
    scanf("%d", &tamanho);

    int matriz[tamanho][tamanho];

    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            printf("Elemento [%d, %d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            if ((matriz[i][j] % 2) != 0)
            {
                printf("%d ", matriz[i][j]);
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