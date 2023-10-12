/*Crie um programa que calcule a taxa de natalidade e a taxa de mortalidade utilizando o comando switch.

A taxa de natalidade é calculada pela seguinte fórmula: taxa de natalidade = (número de crianças nascidas x 1000) / número de habitantes;

A taxa de mortalidade é calculada pela seguinte fórmula: (números de óbitos x 1000) /número de habitantes.*/

#include <stdio.h>

int main()
{

    float taxaDeNatalidade, taxaDeMortalidade, criancas, obitos, habitantes;
    int seletor;

    printf("Escolha qual deseja calcular:\n1 - taxa de natalidade\n2 - taxa de mortalidade\n");
    scanf("%d", &seletor);

    switch (seletor)
    {
    case 1:
        printf("Digite a quantidade de crianças nascidas: ");
        scanf("%f", &criancas);
        printf("Digite a quantidade de habitantes: ");
        scanf("%f", &habitantes);
        taxaDeNatalidade = (criancas * 1000) / habitantes;
        printf("A taxa de natalidade é de %.2f%%", taxaDeNatalidade);
        break;

    case 2:
        printf("Digite a quantidade de obitos: ");
        scanf("%f", &obitos);
        printf("Digite a quantidade de habitantes: ");
        scanf("%f", &habitantes);
        taxaDeMortalidade = (obitos * 1000) / habitantes;
        printf("A taxa de mortalidade é de %.2f%%", taxaDeMortalidade);
        break;

    default:
        printf("Valor INVALIDO!");
        break;
    }

    return 0;
}