/*Faça um programa que receba as notas de três provas e calcule a média. Para o cálculo, escreva uma função. O programa deve imprimir a média ao final.*/

#include <stdio.h>

float calcularMedia(float notas[], int total)
{
    float calcMedia = 0;

    for (int i = 0; i < total; i++)
    {
        calcMedia += notas[i];
    }

    return calcMedia / total;
}

int main()
{
    int total = 3;
    float notas[total], medias;

    for (int i = 0; i < total; i++)
    {
        printf("Digite a %d° nota: ", i + 1);
        scanf("%f", &notas[i]);
    }

    medias = calcularMedia(notas, total);

    printf("A media é: %.2f\n", medias);

    return 0;
}