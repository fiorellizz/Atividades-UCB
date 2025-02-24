//Faça um programa em C que leia um número inteiro e imprima o seu antecessor e o seu sucessor.

#include <stdio.h>

int main()
{
        float numero, antecessor, sucessor;
        printf("Digite um numero: ");
        scanf("%f", &numero);
        antecessor = numero - 1;
        sucessor = numero + 1;
        printf("O numero digitado foi %.1f, seu antecessor e %.1f e seu sucessor e %.1f", numero, antecessor, sucessor);
        return 0;
}
