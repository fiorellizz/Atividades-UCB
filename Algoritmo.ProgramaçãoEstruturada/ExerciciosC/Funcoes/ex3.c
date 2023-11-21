/*Faça um programa em C que leia o valor de um ângulo em graus e o converta, utilizando uma função, para radianos e ao final imprima o resultado. Veja a fórmula de cálculo a seguir.

rad = (ang * pi)/180

Em que:

rad = ângulo em radianos
ang = ângulo em graus
pi = número do pi*/

#include <stdio.h>

float calcularRad( float ang, float pi){
    float rad = (ang * pi)/180;
    return rad;
}

int main(){

    float ang, pi = 3.14, rad;

    printf("Digite o valor do angulo: ");
    scanf("%f", &ang);

    rad = calcularRad(ang, pi);

    printf("O valor em radianos é: %.2f", rad);

    return 0;
}