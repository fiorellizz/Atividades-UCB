//Faça um programa em C que efetue a apresentação do valor da conversão em real (R$) de um valor lido em dólar (US$). Para isso, será necessário também ler o valor da cotação do dólar.

#include <stdio.h>

int main()
{
        float reais, dolar, cotacao;

        printf("Digite um valor em dólar: ");
        scanf("%f", &dolar);
        printf("Digite a cotação do dólar: ");
        scanf("%f", &cotacao);
        reais = dolar * cotacao;
        printf("O total de reias é de %.2f", reais);

        return 0;
}