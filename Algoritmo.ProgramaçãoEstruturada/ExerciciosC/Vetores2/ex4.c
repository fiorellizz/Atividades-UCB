/*Faça um programa em C que leia dois conjuntos de números inteiros, tendo cada um 10 elementos. Ao final o programa deve listar os elementos comuns aos conjuntos.*/

#include <stdio.h>

int main(){
    
    int total = 3;
    int num1[total], num2[total];

    for (int i = 0; i < total; i++)
    {
        printf("Digite os primeiros numeros: ");
        scanf("%d", &num1[i]);
    }

    for (int i = 0; i < total; i++)
    {
        printf("Digite os segundos numeros: ");
        scanf("%d", &num2[i]);
    }

    for (int i = 0; i < total; i++)
    {
        if (num1[i] == num2[i])
        {
            printf("Em ambos os vetores de posição %d tem o numero %d\n", i, num1[i]);
        }
    }
    
    return 0;
}