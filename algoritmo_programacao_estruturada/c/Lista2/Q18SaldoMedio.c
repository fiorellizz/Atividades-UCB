//O Banco do Brasil concederá um crédito especial com juros de 1.5% aos seus clientes de acordo com o saldo médio no último ano. Faça um programa que leia o saldo médio de um cliente e calcule o valor do crédito de acordo com a tabela a seguir. O programa deve imprimir uma mensagem informando o saldo médio e o valor de crédito.

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    float saldoMedio, credito;

    printf("Digite o valor do saldo medio: ");
    scanf("%f", &saldoMedio);

    if (saldoMedio > 0 && saldoMedio <= 500)
    {
        printf("Nenhum crédito!");
    } else if (saldoMedio > 500 && saldoMedio <= 1000)
    {
        credito = saldoMedio * 0.3;
        printf("Seu crédito será de R$%.2f", credito);
    } else if (saldoMedio > 1000 && saldoMedio <= 3000)
    {
        credito = saldoMedio * 0.4;
        printf("Seu crédito será de R$%.2f", credito);
    } else
    {
        credito = saldoMedio * 0.5;
        printf("Seu crédito será de R$%.2f", credito);
    } 
    
    return 0;
}