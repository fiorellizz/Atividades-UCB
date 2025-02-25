/*Faça um programa de conversão de base numérica. O programa deverá apresentar uma tela de entrada com as seguintes opções:

<Conversão de base>
1: decimal para hexadecimal
2: hexadecimal para decimal
3: decimal para octal
4: octal para decimal
5: Encerra*/

#include <stdio.h>

int main()
{

    int seletor, numeroDec, numeroHexa, numeroOctal;

    printf("Qual conversão deseja fazer:\n1: decimal para hexadecimal\n2: hexadecimal para decimal\n3: decimal para octal\n4: octal para decimal\n5: Encerra\n");
    scanf("%d", &seletor);

    switch (seletor)
    {
    case 1:
        printf("Digite o numero em DECIMAL: ");
        scanf("%i", &numeroDec);
        printf("A conversão de decimal para hexadecimal é %x", numeroDec);
        break;

    case 2:
        printf("Digite o numero em HEXADECIMAL: ");
        scanf("%x", &numeroHexa);
        printf("A conversão de hexadecimal para decimal é de %d", numeroHexa);
        break;

    case 3:
        printf("Digite o numero em DECIMAL: ");
        scanf("%i", &numeroDec);
        printf("A conversão de decimal para hexadecimal é %o", numeroDec);
        break;

    case 4:
        printf("Digite o numero em OCTAL: ");
        scanf("%o", &numeroOctal);
        printf("A conversão de decimal para hexadecimal é %d", numeroOctal);
        break;

    default:
        printf("Encerra");
        break;
    }

    return 0;
}