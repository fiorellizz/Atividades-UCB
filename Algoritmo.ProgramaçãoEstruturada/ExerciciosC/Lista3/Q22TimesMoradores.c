/*Uma pesquisa de opinião realizada no Rio de Janeiro, teve as seguintes perguntas:

• Qual o seu time de coração?
1-Fluminense;
2-Botafogo;
3-Vasco;
4-Flamengo;
5-Outros

• Onde você mora?
1-RJ;
2-Niterói;
3-Outros

• Qual o seu salário?

Faça um programa que imprima:
• o número de torcedores por clube;
• a média salarial dos torcedores do Botafogo;
• o número de pessoas moradoras do Rio de Janeiro, torcedores de outros clubes;
• o número de pessoas de Niterói torcedoras do Fluminense

Obs.: O programa encerra quando se digita 0 para o time.*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "Portuguese");

    int time, cidade, moradores[3] = {0}, torcedores[5] = {0}, rioOutros = 0, niteroiFluminense = 0;
    float salario, salarioTotalBotafogo = 0, mediaSalarioBotafogo;

    printf("Qual seu time do coração?\n1 - Fluminense\n2 - Botafogo\n3 - Vasco\n4 - Flamengo\n5 - Outros\n");
    scanf("%d", &time);

    switch (time)
    {
    case 1:
        /*torcedores fluminense*/
        torcedores[0]++;
        break;

    case 2:
        /*torcedores botafogo*/
        torcedores[1]++;
        break;

    case 3:
        /*torcedores vasco*/
        torcedores[2]++;
        break;

    case 4:
        /*torcedores flamengo*/
        torcedores[3]++;
        break;

    case 5:
        /*torcedores outros*/
        torcedores[4]++;
        break;

    default:
        break;
    }

    while (time != 0)
    {
        printf("Onde você mora?\n1 - RJ\n2 - Niteroi\n3 - Outros\n");
        scanf("%d", &cidade);

        switch (cidade)
        {
        case 1:
            /*moradores do rio*/
            moradores[0]++;
            break;

        case 2:
            /*moradores niteroi*/
            moradores[1]++;
            break;

        case 3:
            /*moradores outros*/
            moradores[2]++;
            break;

        default:
            break;
        }

        printf("Qual o seu salário: ");
        scanf("%f", &salario);

        if (time == 2)
        {
            salarioTotalBotafogo = salarioTotalBotafogo + salario;
        }

        if (cidade == 1 && time == 5)
        {
            rioOutros++;
        }

        if (cidade == 2 && time == 1)
        {
            niteroiFluminense++;
        }

        system("cls");
        printf("Dados do entrevistado armazenado\n");
        printf("Digite qualquer tecla para ir para o proximo entrevistado...");
        getch();
        system("cls");

        printf("Qual seu time do coração?\n1 - Fluminense\n2 - Botafogo\n3 - Vasco\n4 - Flamengo\n5 - Outros\n");
        scanf("%d", &time);

        switch (time)
        {
        case 1:
            /*torcedores fluminense*/
            torcedores[0]++;
            break;

        case 2:
            /*torcedores botafogo*/
            torcedores[1]++;
            break;

        case 3:
            /*torcedores vasco*/
            torcedores[2]++;
            break;

        case 4:
            /*torcedores flamengo*/
            torcedores[3]++;
            break;

        case 5:
            /*torcedores outros*/
            torcedores[4]++;
            break;

        default:
            break;
        }
    }

    if (salarioTotalBotafogo == 0)
    {
        mediaSalarioBotafogo = 0;
    }
    else
    {
        mediaSalarioBotafogo = salarioTotalBotafogo / torcedores[1];
    }

    system("cls");
    printf("TOTAL DE TORCEDORES POR CLUBE\n");
    printf("Torcedores do Fluminense: %d\n", torcedores[0]);
    printf("Torcedores do Botafogo: %d\n", torcedores[1]);
    printf("Torcedores do Vasco: %d\n", torcedores[2]);
    printf("Torcedores do Flamengo: %d\n", torcedores[3]);
    printf("Torcedores de Outros: %d\n", torcedores[4]);
    printf("Média dos salários dos torcedores do Botafogo R$%.2f\n", mediaSalarioBotafogo);
    printf("Número de moradores do RJ e torcedores de Outros: %d\n", rioOutros);
    printf("Número de moradores de Niteroi torcedores do Fluminense: %d", niteroiFluminense);

    return 0;
}