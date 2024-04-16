#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 30

void selecao (int *vetor, int N);

void main() {
    int V[TAMANHO];
    srand(time(NULL));
    clock_t inicio, fim;
    double tempocpu;
    for (int  i = 0; i < TAMANHO; i++) V[i] = rand() % 50;
    for (int  i = 0; i < TAMANHO; i++) printf("%d ",V[i]);
    
    

}