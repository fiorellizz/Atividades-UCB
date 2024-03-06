#include <stdio.h>
#include <stdlib.h>
#define ERRO -1

int fatorial (int N) {
    if (N >= 0){
        int resposta = 1;
    for (int i = 1; i <= N; i++) resposta *= i;
    return resposta;
    }
    else return ERRO;
}

int main () {
    
    printf("%d", fatorial(5.4));
}