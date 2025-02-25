//Faça um programa em C que leia dois números reais e calcule as quatro operações básicas entre estes dois números, adição, subtração, multiplicação e divisão. Ao final, o programa deve imprimir os resultados dos cálculos.

#include <stdio.h>

int main() {

        float numero1, numero2, soma, subtracao, multiplicacao, divisao;

        printf("Digite os 2 números que você deseja fazer as 4 operações matematicas: \n");
        scanf("%f %f" ,&numero1, &numero2);

        soma = numero1 + numero2;
        subtracao = numero1 - numero2;
        multiplicacao = numero1 * numero2;
        divisao = numero1 / numero2;

        printf("Soma dos 2 números: %.2f \nSubtração dos 2 números: %.2f \nMultiplicação dos 2 números: %.2f \nDivisão dos 2 números: %.2f", soma, subtracao, multiplicacao, divisao);
        
        return 0;
}