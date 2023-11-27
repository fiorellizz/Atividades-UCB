/*Faça um programa que receba dois valores inteiros, após receber esses dois valores, uma função deve calcular e retornar para o programa o resultado da soma e da subtração dos valores. Obs.: Apenas uma função deve realizar esta operação, desta forma, faça uso de ponteiros.*/

#include <stdio.h>

void calcularOperacoes(int a, int b, int *soma, int *subtracao)
{
    *soma = a + b;
    *subtracao = a - b;
}

int main()
{
    int valor1, valor2, resultadoSoma, resultadoSubtracao;

    printf("Digite o primeiro valor inteiro: ");
    scanf("%d", &valor1);

    printf("Digite o segundo valor inteiro: ");
    scanf("%d", &valor2);

    calcularOperacoes(valor1, valor2, &resultadoSoma, &resultadoSubtracao);

    printf("Soma: %d\n", resultadoSoma);
    printf("Subtração: %d\n", resultadoSubtracao);

    return 0;
}
