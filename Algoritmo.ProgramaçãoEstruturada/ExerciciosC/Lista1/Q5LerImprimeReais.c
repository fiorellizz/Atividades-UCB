//Faça um programa em C que leia dois números reais e os imprima.

#include <stdio.h>

int main()
{
        float numero1, numero2;

        printf("Digite os dois números: \n");
        scanf("%f %f", &numero1, &numero2);
        printf("Os números digitados foram %.2f e %.2f", numero1, numero2);
        return 0;
}