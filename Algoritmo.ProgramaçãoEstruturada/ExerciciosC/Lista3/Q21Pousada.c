/*Uma pousada estipulou o preço para a diária em R$30,00 e mais uma taxa de serviços diários de:

• R$15,00, se o número de dias for menor que 10;
• R$8,00, se o número de dias for maior ou igual a 10;

Faça um programa que imprima o nome, a conta e o número da conta de cada cliente e ao final o total faturado pela pousada. O programa deverá ler novos clientes até que o usuário digite 0 (zero) como número da conta.*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(){

    int dias, numeroConta;
    float totalDiaria = 0, totalFaturado = 0;
    char nome[50];

    printf("Digite o numero da conta: ");
    scanf("%d", &numeroConta);
    
    while (numeroConta != 0)
    {
        printf("Digite o nome do cliente: ");
        scanf("%s", nome);

        printf("Digite quantos dias o cliente ficou hospedado: ");
        scanf("%d", &dias);

        if (dias < 10)
        {
            totalDiaria = (30 * dias) + (15 * dias); 
        } else
        {
            totalDiaria = (30 * dias) + (8 * dias);
        }

        totalFaturado = totalFaturado + totalDiaria;

        system("cls");
        printf("RELATARIO DA CONTA\nNome do cliente: %s\nValor da conta: R$%.2f\nNumero da conta: %d\n", nome, totalDiaria, numeroConta);
        printf("Digite qualquer tecla para continuar...");
        getch();
        system("cls");
        printf("Digite o numero do proximo cliente: ");
        scanf("%d", &numeroConta);
    }

    printf("Total faturado pela pousada com todos os clientes: R$%.2f", totalFaturado);

    return 0;
}