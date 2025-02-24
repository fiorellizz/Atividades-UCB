#include <stdio.h>

int main()
{

    int count, i;
    float numeros[9];

    printf("Digite a quantidade de valores que deseja ler (0 até 10): ");
    scanf("%d", &count);

    if (count >= 0 && count <= 10)
    {
        for (i = 0; i < count; i++)
        {
            printf("Digite um número: ");
            scanf("%f", &numeros[i]);
        }
    }
    else
    {
        printf("Valor invalido!");
    }

    printf("NUMEROS DIGITADOS:\n");

    for (i = 0; i < count; i++)
    {
        printf("%.1f\n", numeros[i]);
    }

    return 0;
}