/*Faça um programa que leia 20 de números inteiros e armazene em um vetor. Após essa leitura, o programa deve ler um novo número inteiro para ser buscado no vetor. Uma função deve verificar se o número lido por último está no vetor e retornar a posição do número no vetor, caso esteja, ou -1, caso não esteja.*/

#include <stdio.h>

int buscarNumero(int vetor[], int tamanho, int numero) {
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == numero) {
            return i;
        }
    }
    return -1;
}

int main() {
    int vetor[20], numeroBusca;

    for (int i = 0; i < 20; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("Digite um número para buscar no vetor: ");
    scanf("%d", &numeroBusca);

    int posicao = buscarNumero(vetor, 20, numeroBusca);
    if (posicao != -1) {
        printf("O número %d está na posição %d do vetor.\n", numeroBusca, posicao);
    } else {
        printf("O número %d não foi encontrado no vetor.\n", numeroBusca);
    }

    return 0;
}