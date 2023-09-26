//Faça um programa em C que leia um número real e calcule o quadrado deste número. Ao final, o programa deve imprimir o resultado do cálculo.

#include <stdio.h>

int main() {
        int numero1, resultado;

        printf("Digite o número que você deseja saber o quadrado: ");
        scanf("%d", &numero1);

        resultado = (numero1 * numero1);

        printf("O resultado é %d ^ 2 = %d", numero1, resultado);

        return 0;
}