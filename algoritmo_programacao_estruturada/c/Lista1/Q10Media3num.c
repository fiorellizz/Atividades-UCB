//Faça um programa em C que leia três números reais e calcule a média aritmética destes números. Ao final, o programa deve imprimir o resultado do cálculo.

#include <stdio.h>

int main() {

        float numero1, numero2, numero3, resultado;

        printf("Digite os 3 números que você deseja fazer a média: \n");
        scanf("%f %f %f" ,&numero1, &numero2, &numero3);

        resultado = (numero1 + numero2 + numero3) / 3;

        printf("A média de (%.2f + %.2f + %.2f) / 3 = %.2f" , numero1, numero2, numero3, resultado);

        return 0;
}