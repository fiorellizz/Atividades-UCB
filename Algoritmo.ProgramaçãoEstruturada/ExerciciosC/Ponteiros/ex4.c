/*Elabore um programa que leia um valor do tipo inteiro e, por meio de função, atualize todas as posições de um vetor com o número inteiro lido, depois imprima os valores. Utilize ponteiros para as operações.*/

#include <stdio.h>

int trocaValores(int vetor[], int *ponteiro, int tamanho)
{

    printf("Digite os novos %d valores:\n", tamanho);
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d° valor: ", i + 1);
        scanf("%d", &ponteiro[i]);
    }
}

int main()
{
    int tamanho = 5, vetor[tamanho], *ponteiro[tamanho];

    for (int i = 0; i < tamanho; i++)
    {
        ponteiro[i] = &vetor[i];
    }

    printf("Digite 5 valores inteiros:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", ponteiro[i]);
    }

    trocaValores(vetor, *ponteiro, tamanho);

    printf("\nOs novos valores lido são:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", vetor[i]);
    }

    return 0;
}