#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 1000

int main() {
    system("cls");

    int Array[TAMANHO];

    srand(time(NULL));

    for(int i = 0; i < TAMANHO; i++) Array[i] = rand() % 100; //Resto da divisão por 100

    printf("Exibindo vetor: \n");
    for(int i = 0; i < TAMANHO; i++) printf("%d\n", Array[i]);
    printf("\n");

    return 0;
}