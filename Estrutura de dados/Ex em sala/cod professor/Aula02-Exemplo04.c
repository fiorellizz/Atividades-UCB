
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ERRO 0

void exibirArray (int array[], int tamanho);

void main() {
    int meuArray[] = {6, 4, 9, 1, 3};
    int tamanho = sizeof(meuArray)/sizeof(int);
    exibirArray(meuArray, tamanho);
    printf("Tamanho (em main()): %d.\n", tamanho);
}

void exibirArray (int array[], int tamanho) {
    system("cls");
    for (int i = 0; i < tamanho; i++) printf("%d  ", array[i]);

    // Verificando passagem de parâmetro por valor!!!

    tamanho = tamanho + 15;
    printf("Tamanho (em exibirArray()): %d.\n", tamanho);
}

