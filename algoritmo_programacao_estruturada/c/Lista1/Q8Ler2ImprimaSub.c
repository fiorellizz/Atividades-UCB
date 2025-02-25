//Faça um programa em C que leia dois números inteiros e imprima a subtração deles.

#include <stdio.h>

int main() {

        int numero1, numero2, resultado;

        printf("Digite dois número que você deseja fazer a subtração: \n");
        scanf("%d %d", &numero1, &numero2);

        resultado = (numero1 - numero2);

        printf("A subtração de %d e %d é igual a %d" ,numero1, numero2, resultado);
return 0;
}