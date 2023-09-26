//Faça um programa em C que leia o valor de um produto, o percentual do desconto desejado e imprima o valor do desconto e o valor do produto subtraindo o desconto.

#include <stdio.h>

int main()
{
        float valorProduto, desconto, valorFinal;

        printf("Digite o valor do produto: ");
        scanf("%f", &valorProduto);
        printf("Digite quantos porcento será descontado: ");
        scanf("%f", &desconto);
        valorFinal = valorProduto - (valorProduto * (desconto / 100));
        printf("O valor do desconto é de %.0f porcento e o valor final do produto é de %.2f", desconto, valorFinal);

        return 0;
}