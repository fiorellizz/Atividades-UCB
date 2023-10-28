/*Construa uma programa em C que armazene 15 números em um vetor e imprima uma listagem numerada contendo o número e uma das mensagens: par ou ímpar.*/

#include <stdio.h>

int main()
{
    int count = 15, numeros[count];

    for (int i = 0; i < count; i++)
    {
        printf("Digite o %d° numero: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    for (int i = 0; i < count; i++)
    {
        if (numeros[i] % 2 == 0)
        {
            printf("\n%d° numero \t | \t %d \t | \t Numero PAR", i + 1, numeros[i]);
        }
        else
        {
            printf("\n%d° numero \t | \t %d \t | \t Numero IMPAR", i + 1, numeros[i]);
        }
    }

    return 0;
}