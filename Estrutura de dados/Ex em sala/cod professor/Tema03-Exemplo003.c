#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/time.h>

#define TAMANHO 100000

int main() {

    system("cls");
    struct timeval Inicio, Fim;
    double TempoCPU;

    int Array[TAMANHO];

    srand(time(NULL));

    for(int i = 0; i < TAMANHO; i++) Array[i] = rand() % 100; //Resto da divisão por 100

    gettimeofday(&Inicio, NULL);       // Início do trecho a ser medido...
    printf("Exibindo vetor: \n");
    for(int i = 0; i < TAMANHO; i++) printf("%d\n", Array[i]);
    printf("\n");
    gettimeofday(&Fim, NULL);      // Fim do trecho a ser medido...

    TempoCPU = (Fim.tv_sec - Inicio.tv_sec) + (Fim.tv_usec - Inicio.tv_usec)/1000000;
    printf("Tempo: %lf segundos\n", TempoCPU);

    return 0;
}