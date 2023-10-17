/*Faça um programa que leia vários números inteiros e apresente o fatorial de cada número. O algoritmo encerra quando se digita um número menor do que 1.*/

#include <stdio.h>

int main()
{
    int numero, fatorial = 1;

    while (1)
    {
        printf("Digite um número inteiro para saber o fatorial: ");
        scanf("%d", &numero);

        if (numero < 1)
        {
            break;
        }

        for (int i = 1; i <= numero; i++)
        {
            fatorial *= i;
        }

        printf("O fatorial de %d é %d\n", numero, fatorial);
        fatorial = 1;
    }

    return 0;
}