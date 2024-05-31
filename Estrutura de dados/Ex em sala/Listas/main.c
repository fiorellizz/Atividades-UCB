#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main(){

    Lista *A = criarLista(27);
    printf("Capacidade: %d\n", A->Capacidade);
    printf("Tamanho: %d\n", A->Tamanho);
    Item E1 = {5};
    inserirItem(A, E1);
    printf("Tamanho: %d\n", A->Tamanho);

    Item E2 = {20};
    inserirItem(A, E2);
    printf("Tamanho: %d\n", A->Tamanho);

    Item E3 = {13};
    inserirItem(A, E3);
    printf("Tamanho: %d\n", A->Tamanho);

    exibirLista(A);
    float media = mediaLista(A);
    printf("Média da lista: %f\n", media);

    excluirItem(A);
    exibirLista(A);
    inserirItem(A, E3);
    excluirItemV02(A, 1);
    inserirItem(A, E2);
    exibirLista(A);

    Lista *B = criarLista(A->Tamanho);
    B = inverterLista(B);

    return 0;
}