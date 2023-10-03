/*Construa um programa em C que leia vários números e informe quantos números entre 100 e 200 foram digitados. Quando o valor 0 (zero) for lido, o algoritmo deverá cessar sua execução.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    float numero;
    int somaEntre = 0;

    do
    {
        printf("Digite um número: ");
        scanf("%f", &numero);
        if (numero >= 100 && numero <= 200)
        {
            somaEntre++;
        }
        system("cls");
    } while (numero != 0);

    printf("A quantidade de valores entre 100 e 200 foi de %d", somaEntre);
    return 0;
}