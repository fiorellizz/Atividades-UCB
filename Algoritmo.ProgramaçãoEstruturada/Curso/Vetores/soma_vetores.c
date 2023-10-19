/*Problema "soma_vetores"
Faça um programa para ler dois vetores A e B, contendo N elementos cada. Em seguida, gere um
terceiro vetor C onde cada elemento de C é a soma dos elementos correspondentes de A e B. Imprima
o vetor C gerado. */

#include <stdio.h>

int main(){

    int a[99], b[99], c[99], count;

    printf("Quantos valores vai ter cada vetor? ");
    scanf("%d", &count);

    //coletar dados A

    for (int i = 0; i < count; i++)
    {
        printf("Digite os valores do vetor A: ");
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < count; i++)
    {
        printf("Digite os valores do vetor B: ");
        scanf("%d", &b[i]);
    }

    for (int i = 0; i < count; i++)
    {
        c[i] = a[i] + b[i];
    }

    printf("VETOR RESULTANTE: ");

    for (int i = 0; i < count; i++)
    {
        printf("%d\n", c[i]);
    }
    
    

    return 0;
}