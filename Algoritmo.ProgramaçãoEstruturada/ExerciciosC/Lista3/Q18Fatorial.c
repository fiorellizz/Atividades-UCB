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