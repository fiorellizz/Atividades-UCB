#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 500000

void Selecao (int *Vetor, int N);

void main() {
    int V[TAMANHO];
    srand(time(NULL));
    clock_t Inicio, Fim;
    double TempoCPU;
    for (int i = 0; i < TAMANHO; i++) V[i] = rand() % 50;
    printf("\n\n Vetor original: \n");
    for (int i = 0; i < TAMANHO; i++) printf("%d ", V[i]);

    Inicio = clock();
    Selecao(V, TAMANHO);
    Fim = clock();
    TempoCPU = ((double) (Fim - Inicio)) / CLOCKS_PER_SEC;
    
    printf("\n\n Vetor ordenado: \n");
    for (int i = 0; i < TAMANHO; i++) printf("%d ", V[i]);
    printf("\n\n Tempo %lf: \n", TempoCPU);
}

void Selecao (int *Vetor, int N){
    for(int i = 0; i < N - 1; i++) {
        int indiceMenorElemento = i;
        for(int j = i + 1; j < N; j++) {
            if (Vetor[j] < Vetor[indiceMenorElemento]) {
                indiceMenorElemento = j;
            }
        }
        int temp = Vetor[indiceMenorElemento];
        Vetor[indiceMenorElemento] = Vetor[i];
        Vetor[i] = temp;
    }
}
