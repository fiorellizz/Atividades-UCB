/*Problema "soma_vetor"
Faça um programa que leia N números reais e armazene-os em um vetor. Em seguida:
- Imprimir todos os elementos do vetor
- Mostrar na tela a soma e a média dos elementos do vetor */

#include <stdio.h>

int main(){

    int count;
    float numero[10], soma, media;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &count);

    for (int i = 0; i < count; i++)
    {
        printf("Digite um numero: ");
        scanf("%f", &numero[i]);
    }

    printf("\nVALORES = ");

    for (int i = 0; i < count; i++)
    {
        printf("%.1f ", numero[i]);
    }

    for (int i = 0; i < count; i++)
    {
        soma += numero[i];
    }

    media = soma / count;

    printf("\nSOMA = %.2f\n", soma);
    printf("MEDIA = %.2f", media);
    
    return 0;
}