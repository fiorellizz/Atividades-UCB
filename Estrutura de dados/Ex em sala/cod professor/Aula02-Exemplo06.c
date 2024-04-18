#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ERRO 0

void modificarArray(int *array, int tamanho);
void imprimirArray(int *array, int tamanho);

// Função principal

void main() {
    system("cls");
    int meuVetor[] = {1, 5, 2, 8, 9, -1};
    int tamanho = sizeof(meuVetor)/sizeof(meuVetor[0]);

    imprimirArray(meuVetor, tamanho);
    modificarArray(meuVetor, tamanho);
    imprimirArray(meuVetor, tamanho);
}

// Implementando funções auxiliares

void modificarArray(int *array, int tamanho) {
    for(int i = 0; i < tamanho; i++) array[i] = array[i] * 2;
}

void imprimirArray(int *array, int tamanho) {

    printf("Endereco: %d\n", array); // Imprime o endereco de memoria do array
    printf("...: %d\n", &array[0]); // Endereço da posicao 0
    printf("...: %d\n", &array[1]); // Endereço da posicao 1
    printf("...: %d\n", &array[2]); // Endereço da posicao 2
    printf("...: %d\n", &array[3]); // Endereço da posicao 3
    printf("...: %d\n", &array[4]); // Endereço da posicao 4
    printf("...: %d\n", &array[5]); // Endereço da posicao 5
    
    for(int i = 0; i < tamanho; i++) printf("%d\t", array[i]);
    printf("\n");
}