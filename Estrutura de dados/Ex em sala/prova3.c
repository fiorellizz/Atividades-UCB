#include <stdio.h>

typedef struct Pessoa {
    char nome[1024];
    int idade;
    float altura;
    float peso;
} Pessoa; // Adicionando um alias "Pessoa" para a struct

// IMC = peso / (altura x altura)
float calcularIMC(Pessoa *X) {
    float IMC = X->peso / (X->altura * X->altura);
    return IMC;
}

int main() {
    Pessoa X;
    X.altura = 1.75;
    X.peso = 70;

    float imc = calcularIMC(&X);
    printf("%f", imc);

    return 0;
}
