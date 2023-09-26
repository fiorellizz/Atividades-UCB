//Um comerciante comprou um produto e quer vendê-lo com um lucro de 45% se o valor da compra for menor que R$20,00, caso contrário, o lucro será de 30%. Faça um programa em C que leia o valor do produto e imprima o valor da venda.

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    float valorCompra, lucro, valorVenda;

    printf("Informe o valor da compra do produto: ");
    scanf("%f", &valorCompra);

    if(valorCompra <= 20){
        lucro = valorCompra * 0.45;
        valorVenda = valorCompra + lucro;
        printf("O valor final para venda do produto é de %.2f reais", valorVenda);
    } else {
        lucro = valorCompra * 0.30;
        valorVenda = valorCompra + lucro;
        printf("O valor final para venda do produto é de %.2f reais", valorVenda);
    }
    
    return 0;
}