#include <stdio.h>

int main()
{

    float numero[9];
    int count, i;

    printf("Digite quantos valores ira digitar: ");
    scanf("%d", &count);

    if (count >= 0 && count <= 10)
    {
        for (i = 0; i < count; i++)
        {
            printf("Digite um numero: ");
            scanf("%f", &numero[i]);
        }
    }
    else
    {
        printf("Valor invalido!");
    }

    printf("Valores NEGATIVOS:\n");

    for (i = 0; i < count; i++)
    {
        if (numero[i] < 0)
        {
            printf("%.2f\n", numero[i]);
        }
    }
}