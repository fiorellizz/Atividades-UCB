/*Crie um programa que contenha um vetor de inteiros com tamanho 5. Utilizando apenas ponteiros, leia valores e armazene neste vetor e após isso, imprima o dobro de cada valor lido.*/

#include <stdio.h>

int main()
{
    int vetor[5], *ponteiro[5];

    for (int i = 0; i < 5; i++)
    {
        ponteiro[i] = &vetor[i];
    }

    printf("Digite 5 valores inteiros:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", ponteiro[i]);
    }

    printf("\nO dobro de cada valor lido é:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", vetor[i] * 2);
    }

    return 0;
}