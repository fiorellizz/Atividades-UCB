/*
Uma empresa de fornecimento de energia elétrica faz a leitura mensal dos medidores de consumo. Para cada consumidor, são digitados os seguintes dados:

• número do consumidor
• quantidade de kWh consumidos durante o mês
• tipo (código) do consumidor
    1 - Residencial, preço em reais por kWh = 0,3
    2 - Comercial, preço em reais por kWh = 0,5
    3 - Industrial, preço em reais por kWh = 0,7

Os dados devem ser lidos até que seja encontrado o consumidor com número 0 (zero). O programa deve calcular e imprimir:
• O custo total para cada consumidor (ok)
• O total de consumo para os três tipos de consumidor (ok)
• A média de consumo dos tipos 1 e 2 (ok)
*/ 

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int numero, tipo, valorInvalido = 0;
    float kWh, totalReais, mediaConsumo = 0, totaltipo1 = 0, totaltipo2 = 0, totaltipo3 = 0;

    printf("Digite o numero do cliente: ");
    scanf("%d", &numero);

    while (numero != 0 && valorInvalido == 0)
    {
        printf("Digite a quantidade de kWh consumida: ");
        scanf("%f", &kWh);

        printf("Escolha o tipo de cliente:\n1 - Residencial\n2 - Comercial\n3 - Industrial\n");
        scanf("%d", &tipo);

        switch (tipo)
        {
        case 1:
            totalReais = kWh * 0.3;
            mediaConsumo = mediaConsumo + kWh;
            totaltipo1 = totaltipo1 + kWh;
            break;

        case 2:
            totalReais = kWh * 0.5;
            mediaConsumo = mediaConsumo + kWh;
            totaltipo2 = totaltipo2 + kWh;
            break;

        case 3:
            totalReais = kWh * 0.7;
            totaltipo3 = totaltipo3 + kWh;
            break;

        default:
            printf("Valor invalido!");
            valorInvalido++;
            break;
        }
        if (valorInvalido == 0)
        {
            printf("O total da conta: R$%.2f\n", totalReais);
            printf("Digite qualquer tecla para continuar...");
            getch();
            system("cls");
            printf("Digite o numero do proximo cliente: ");
            scanf("%d", &numero);
        }
    }
    if (valorInvalido == 0)
    {
        mediaConsumo = mediaConsumo / 2;
        system("cls");
        printf("RELATORIO FINAL\n");
        printf("O total de consumo pelo tipo 1 foi de %.2f kWh\nO total de consumo pelo tipo 2 foi de %.2f kWh\nO total de consumo pelo tipo 3 foi de %.2f kWh\nA media total de kWh pelo tipo 1 e tipo 2 foi %.2f", totaltipo1, totaltipo2, totaltipo3, mediaConsumo);
    }
    
    return 0;
}