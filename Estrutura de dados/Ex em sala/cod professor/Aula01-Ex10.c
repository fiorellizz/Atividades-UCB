#include <stdio.h>
#include <stdlib.h>

#define ERRO 0

float SerieHarmonica(int N);

int main() {
    system("cls");
    printf("Digite um numero: ");
    int x;
    scanf("%d", &x);
    printf("Resposta: %f\n\n", SerieHarmonica(x));
}

float SerieHarmonica(int  N) {
    float Soma = 0.0;
    for (int i = 1; i <= N; i++)
        Soma = Soma + 1.0 / i;
    return (Soma);
}

