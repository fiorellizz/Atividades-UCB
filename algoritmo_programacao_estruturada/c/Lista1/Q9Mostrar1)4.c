//Faça um programa em C que leia um número real e imprima ¼ deste número.

#include <stdio.h>

int main() {

        float numero, resultado;

        printf("Digite o número que você deseja saber 1/4: \n");
        scanf("%f", &numero);

        resultado = numero/4;

        printf("1/4 de %.2f é %.2f",numero, resultado);
        
        return 0;
}