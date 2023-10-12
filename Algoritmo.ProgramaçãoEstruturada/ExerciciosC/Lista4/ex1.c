/*Uma loja fornece 30% de desconto para funcionários e 10% de desconto para clientes vips. Faça um programa que calcule o valor total a ser pago por uma pessoa.

O programa deverá ler o valor total da compra efetuada e um código que identifique se o comprador é um cliente comum (1), funcionário (2) ou vip (3).*/

#include <stdio.h>


int main(){


        int cliente;
        float valor, valorFinal;


        printf("Digite o valor total da compra: ");
        scanf("%f", &valor);


        printf("Digite o codigo do cliente:\n1 - Cliente comum\n2 - Funcionário\n3 - Vip\n");
        scanf("%d", &cliente);


        switch (cliente)
        {
        case 1:
        valorFinal = valor;
        printf("Esse cliente é comum não possui desconto!\nValor final da compra é igual a R$%.2f", valorFinal);
        break;

        case 2:
        valorFinal = valor - (valor * 0.3);
        printf("Esse cliente é um funcionario e possui desconto de 30%%!\nValor final da compra é igual a R$%.2f", valorFinal);
        break;

        case 3:
        valorFinal = valor - (valor * 0.1);
        printf("Esse cliente é um funcionario e possui desconto de 10%%!\nValor final da compra é igual a R$%.2f", valorFinal);
        break;

        default:
        printf("Valor INVALIDO");
        break;
        }

        return 0;
}