//Faça um programa em C que leia o saldo de uma conta poupança e imprima o novo saldo, considerando um reajuste de 1.5%.

#include <stdio.h>

int main()
{
        float saldo, saldofinal, reajuste;

        printf("Digite seu saldo da conta: ");
        scanf("%f", &saldo);
        reajuste = 0.015 * saldo;
        saldofinal = reajuste + saldo;
        printf("Seu saldo com o reajuste é de %.2f",saldofinal);

        return 0;

}