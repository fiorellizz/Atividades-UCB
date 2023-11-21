/*Faça um programa que calcule e imprima o fatorial de um número, usando uma função que receba um valor e retorne o fatorial desse valor.*/

#include <stdio.h>

int calcularFatorial(int numero) {
    int fatorial = 1;

    for (int i = 1; i <= numero; i++) {
        fatorial *= i;
    }

    return fatorial;
}

int main() {
    int numero;

    printf("Digite um número para calcular o fatorial: ");
    scanf("%d", &numero);

    int fatorial = calcularFatorial(numero);
    printf("O fatorial de %d é: %d\n", numero, fatorial);

    return 0;
}