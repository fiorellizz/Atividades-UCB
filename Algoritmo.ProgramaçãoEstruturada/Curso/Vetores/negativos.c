/*Problema "negativos"
Faça um programa que leia um número inteiro positivo N (máximo = 10) e depois N números inteiros
e armazene-os em um vetor. Em seguida, mostrar na tela todos os números negativos lidos.*/

#include <stdio.h>

int main(){

    int numero[10], count;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &count);

    for (int i = 0; i < count; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &numero[i]);
    }

    printf("NUMEROS NEGATIVOS:\n");

    for (int i = 0; i < count; i++)
    {
        if (numero[i] < 0)
        {
            printf("%d\n", numero[i]);
        }
        
    }
    
    return 0;
}