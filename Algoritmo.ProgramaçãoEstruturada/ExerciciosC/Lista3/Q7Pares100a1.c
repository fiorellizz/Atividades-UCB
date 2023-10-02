// Faça um programa que imprima todos os números pares de 100 até 1.

#include <stdio.h>

int main()
{

    int contador = 100, numero = 100;

    while (contador > 1)
    {
        if (numero % 2 == 0)
        {
            printf("%d\n", numero);
        }
        numero--;
        contador--;
    }

    return 0;
}