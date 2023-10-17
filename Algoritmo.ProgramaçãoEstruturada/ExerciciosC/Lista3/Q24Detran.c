/*Crie um programa que ajude o DETRAN a saber o total de recursos que foram arrecadados com a aplicação de multas de trânsito. O algoritmo deve ler as seguintes informações para cada motorista:

• número da carteira de motorista (de 1 a 4327);
• número de multas;
• valor de cada uma das multas.

Deve ser impresso o valor da dívida para cada motorista e ao final da leitura o total de recursos arrecadados (somatório de todas as multas). O programa deverá imprimir também o número da carteira do motorista que obteve o maior número de multas.

Obs.: O programa encerra ao ler a carteira de motorista de valor 0.*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{

    int numeroCarteira, qntMultas;
    float totalMotorista = 0, totalDentran = 0, valorMulta;

    printf("Digite o numero da carteira do motorista: ");
    scanf("%d", &numeroCarteira);

    while (numeroCarteira < 1 || numeroCarteira > 4327)
    {
        system("cls");
        printf("Valor inválido!\n");
        printf("Digite o numero da carteira do motorista: ");
        scanf("%d", &numeroCarteira);
        system("cls");
    }

    while (numeroCarteira != 0)
    {
        printf("Digite a quantidade de multa: ");
        scanf("%d", &qntMultas);

        for (int i = 1; i <= qntMultas; i++)
        {
            printf("Digite o valor da %d° multa: ", i);
            scanf("%f", &valorMulta);
            totalDentran += valorMulta;
            totalMotorista += valorMulta;
        }
        printf("Valor total da multa do motorista: R$%.2f\n", totalMotorista);
        totalMotorista = 0;
        printf("Digite qualquer tecla para continuar...");
        getch();
        system("cls");
        printf("Digite o numero do proximo motorista: ");
        scanf("%d", &numeroCarteira);
        while (numeroCarteira < 0 || numeroCarteira > 4327)
        {
            system("cls");
            printf("Valor inválido!\n");
            printf("Digite o numero da carteira do motorista: ");
            scanf("%d", &numeroCarteira);
            system("cls");
        }
    }
    system("cls");
    printf("O detran arrecadou um total de R$%.2f", totalDentran);

    return 0;
}