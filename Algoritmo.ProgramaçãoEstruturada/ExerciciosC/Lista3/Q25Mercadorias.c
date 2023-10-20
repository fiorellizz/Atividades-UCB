/*Construa um programa que receba o valor e o código de várias mercadorias vendidas em um determinado dia. Os códigos obedecem a lista a seguir:

L-limpeza
A-Alimentação
H-Higiene

Calcule e imprima:

• o total vendido naquele dia, com todos os códigos juntos;
• o total vendido naquele dia em cada um dos códigos.

Obs.: Para encerrar a entrada de dados, digite o valor da mercadoria zero.*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{

    char codigo;
    float valorProduto[3] = {0}, valor;
    int quantidade[3] = {0};

    system("cls");

    printf("Digite o valor da mercadoria: ");
    scanf("%f", &valor);

    while (valor != 0)
    {
        printf("Digite o codigo da merdadora: ");
        scanf("%s", &codigo);

        codigo = toupper(codigo);

        switch (codigo)
        {
        case 'L':
            quantidade[0]++;
            valorProduto[0] += valor;
            break;

        case 'A':
            quantidade[1]++;
            valorProduto[1] += valor;
            break;

        case 'H':
            quantidade[2]++;
            valorProduto[2] += valor;
            break;

        default:
            break;
        }

        printf("Dados armazenados!\n");
        printf("Digite qualquer tecla para continuar...");
        getch();
        system("cls");
        printf("Digite o valor proxima mercadoria: ");
        scanf("%f", &valor);
    }

    system("cls");
    printf("RELATORIO FINAL\n");
    printf("Foram vendidas %d mercadorias no dia e o total arrecadado foi de R$%.2f\n", quantidade[0] + quantidade[1] + quantidade[2], valorProduto[0] + valorProduto[1] + valorProduto[2]);
    printf("Foram vendidas %d mercadoria de Limpeza, totalizando R$%.2f\n", quantidade[0], valorProduto[0]);
    printf("Foram vendidas %d mercadoria de Alimentação, totalizando R$%.2f\n", quantidade[1], valorProduto[1]);
    printf("Foram vendidas %d mercadoria de Higiene, totalizando R$%.2f\n", quantidade[2], valorProduto[2]);

    return 0;
}