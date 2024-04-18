#include <stdio.h>
#include <stdlib.h>

#define ERRO -1

int Fatorial(int N) {
    if( N >= 0) {
        int Resposta = 1;
        for (int i = 1; i <= N; i++) Resposta = Resposta * i;
        return (Resposta);
    }
    else return (ERRO);
}

int main() {
    printf("Resposta: %d", Fatorial('A'-65));
}