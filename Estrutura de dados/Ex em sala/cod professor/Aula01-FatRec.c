#include <stdio.h>
#include <stdlib.h>

#define ERRO 0

int Fatorial(int N);

int main() {
    system("cls");
    int x;
    printf("Digite um inteiro: ");
    scanf("%d", &x);
    int Fat = Fatorial(x);
    if(Fat != ERRO)
        printf("O fatorial de %d e igual a %d.\n", x, Fat);
}

int Fatorial (int N) {
    if (N == 0) return (1);
    else if (N == 1) return(1);
    else if (N >= 2) return (N * Fatorial(N - 1));
    else return(ERRO);
}






