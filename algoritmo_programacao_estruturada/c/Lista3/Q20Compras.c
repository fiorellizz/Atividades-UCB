/*Crie um programa em C que possa ler um conjunto de pedidos de compra e calcule o valor total da compra. Cada pedido é composto pelos seguintes campos:

• número de pedido
• data do pedido (dia, mês, ano)
• preço unitário
• quantidade

O programa deverá processar novos pedidos até que o usuário digite 0 (zero) como número do pedido.*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int numero, quantidade, data[3];
    float valorUnitario, valorFinal;

    printf("Digite o numero do pedido: ");
    scanf("%d", &numero);

    while (numero != 0)
    {
        printf("Digite o preço unitario do comprado: ");
        scanf("%f", &valorUnitario);

        printf("Digite a quantidade de produtos comprados: ");
        scanf("%d", &quantidade);

        printf("Digite a data da compra: ex:(dia mes ano) (6 10 2023)\n");
        scanf("%d %d %d", &data[0], &data[1], &data[2]);

        valorFinal = quantidade * valorUnitario;

        printf("\nRELATORIO DA COMPRA\n");
        printf("Numero do pedido: %d\nData do pedido: %d/%d/%d\nPreço unitario: R$%.2f\nQuantidade: %d\n", numero, data[0], data[1], data[2], valorUnitario, quantidade);
        printf("O total da conta: R$%.2f\n", valorFinal);
        printf("Digite qualquer tecla para continuar...");
        getch();
        system("cls");
        printf("Digite o numero do proximo cliente: ");
        scanf("%d", &numero);
    }
    
    return 0;
}