/*Construa um programa que armazene o código, a quantidade, o valor de compra e o valor de venda de 30 produtos. A listagem pode ser de todos os produtos ou somente de um ao se digitar o código.*/

#include <stdio.h>

int main(){

    int total = 3;
    int codigo[total], quantidade[total];
    float valorCompra[total], valorVenda[total];

    for (int i = 0; i < total; i++)
    {
        printf("Digite o %d codigo: ", i + 1);
        scanf("%d", &codigo[i]);

        printf("Digite o %d quantidade: ", i + 1);
        scanf("%d", &quantidade[i]);

        printf("Digite o %d valor de compra: ", i + 1);
        scanf("%f", &valorCompra[i]);

        printf("Digite o %d valor de venda: ", i + 1);
        scanf("%f", &valorVenda[i]);

        printf("\n");
    }

    for (int i = 0; i < total; i++)
    {
        printf("%d codigo: %d\n", i + 1, codigo[i]);
        printf("%d quantidade: %d\n", i + 1, quantidade[i]);
        printf("%d valor de compra: %.2f\n", i + 1, valorCompra[i]);
        printf("%d valor de venda: %.2f\n", i + 1, valorVenda[i]);
        printf("\n");
    }

    return 0;
}