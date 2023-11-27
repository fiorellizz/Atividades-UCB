/*Crie um programa que leia números reais em um vetor de tamanho 10. Imprima o endereço de cada posição desse vetor.*/

#include <stdio.h>

int main()
{

    int total = 10, valores[total];

    for (int i = 0; i < total; i++){
        printf("Digite o valor %d do vetor: ", i + 1);
        scanf("%d", &valores[i]);
    }
        printf("\n");

    for (int i = 0; i < total; i++){
        printf("%p", &valores[i]);
        printf("\n");
    }

    return 0;
}