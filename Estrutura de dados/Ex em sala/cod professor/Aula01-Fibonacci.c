#include <stdio.h>
#include <stdlib.h>

#define ERRO 0

int Fibonacci(int N);

int main() {
    system("cls");
    int x;
    printf("Digite um inteiro: ");
    scanf("%d", &x);
    int F = Fibonacci(x);
    if(F != ERRO) printf("Resposta: %d", F);
}

int Fibonacci (int N) {
    if (N == 1 || N == 2) return (1);
    else if (N > 2) return (Fibonacci(N - 1) + Fibonacci(N - 2));
    else return(ERRO);
}






