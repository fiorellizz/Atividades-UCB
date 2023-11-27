/*Construa uma função que, recebendo como parâmetros quatro números inteiros, devolva ao módulo que o chamou os dois maiores números dentre os quatro recebidos. Faça um programa que leia tantos conjuntos de quatro valores quantos o usuário deseje e que acione a função para cada conjunto de valores, apresentando a cada vez os dois maiores números. Se preferir, utilize vetor para armazenar o conjunto de valores.*/

#include <stdio.h>

void encontrarDoisMaiores(int conjunto[], int *maior1, int *maior2)
{
    *maior1 = *maior2 = conjunto[0];

    for (int i = 1; i < 4; i++)
    {
        if (conjunto[i] > *maior1)
        {
            *maior2 = *maior1;
            *maior1 = conjunto[i];
        }
        else if (conjunto[i] > *maior2 && conjunto[i] != *maior1)
        {
            *maior2 = conjunto[i];
        }
    }
}

int main()
{
    int conjunto[4];
    int maior1, maior2;
    int continuar;

    do
    {
        printf("Digite os quatro valores do conjunto: \n");
        for (int i = 0; i < 4; i++)
        {
            scanf("%d", &conjunto[i]);
        }

        encontrarDoisMaiores(conjunto, &maior1, &maior2);

        printf("Os dois maiores números do conjunto são: %d e %d\n", maior1, maior2);

        printf("Digite 0 para sair: ");
        scanf("%d", &continuar);

    } while (continuar != 0);

    return 0;
}