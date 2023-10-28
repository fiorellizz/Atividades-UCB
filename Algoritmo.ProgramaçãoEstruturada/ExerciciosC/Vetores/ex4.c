/*Faça um programa que armazene 8 números em um vetor e imprima todos os números. Ao final, imprima o total de números múltiplos de seis.*/

#include <stdio.h>

int main()
{
    int count = 8, numeros[count];

    for (int i = 0; i < count; i++)
    {
        printf("Digite o %d° numero: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    for (int i = 0; i < count; i++)
    {
        if (numeros[i] % 6 == 0)
        {
            printf("\n%d \t | \t Numero MULTIPLO DE 6", numeros[i]);
        }
        else
        {
            printf("\n%d \t | \t Numero NÃO MULTIPLO DE 6", numeros[i]);
        }
    }

    return 0;
}