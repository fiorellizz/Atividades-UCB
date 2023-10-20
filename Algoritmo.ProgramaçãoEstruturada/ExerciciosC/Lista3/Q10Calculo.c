/*Sabendo-se que a unidade lógica e aritmética calcula o produto através de somas sucessivas, crie um programa que calcule o produto de dois números inteiros lidos. Suponha que os números lidos sejam positivos e que o multiplicando seja menor do que o multiplicador.*/

#include <stdio.h>

int main() {

    int numero1, numero2;
    int produto = 0;

    printf("Digite o primeiro número: ");
    scanf("%d", &numero1);
    printf("Digite o segundo número: ");
    scanf("%d", &numero2);

    if (numero1 < 0 || numero2 < 0) {
        printf("Digite números positivos.\n");
    } else {

        while (numero1 > 0) {
            if (numero1 % 2 != 0) {
                produto += numero2;
            }
            numero1 /= 2;
            numero2 *= 2;
        }

        printf("O produto é: %d\n", produto);
    }

    return 0;
}