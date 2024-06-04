#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 100000

int main() {

    system("cls");
    clock_t Inicio, Fim;
    double TempoCPU;

    int Array[TAMANHO];

    srand(time(NULL));

    for(int i = 0; i < TAMANHO; i++) Array[i] = rand() % 100; //Resto da divisão por 100

    Inicio = clock();       // Início do trecho a ser medido...
    printf("Exibindo vetor: \n");
    for(int i = 0; i < TAMANHO; i++) printf("%d\n", Array[i]);
    printf("\n");
    Fim = clock();      // Fim do trecho a ser medido...

    TempoCPU = ((double)(Fim - Inicio))/CLOCKS_PER_SEC;
    printf("Clocs per sec: %f\n", CLOCKS_PER_SEC);
    printf("Tempo: %lf segundos\n", TempoCPU);

    return 0;
}