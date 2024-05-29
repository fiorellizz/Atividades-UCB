#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

Lista *criarLista(int C){
    Lista *L = (Lista *)malloc(sizeof(Lista));
    if (L == NULL){
        printf("ERRO: Não foi possível alocar memória!\n");
        exit(ERRO);
    }
    L->Array = (Item *)malloc(C*sizeof(Item));
    if (L->Array == NULL){
        printf("ERRO: Não foi possível alocar memória para o vetor!\n");
        free(L);
        exit(ERRO);
    }
    L->Capacidade = C;
    L->Tamanho = 0;

    return L;
}

void inserirItem(Lista *L, Item E){
    if (L->Tamanho >= L->Capacidade){
        printf("ERRO: Lista cheia!\n");
        return;
    }
    
    L->Array[L->Tamanho] = E;
    L->Tamanho++;
}

void exibirLista(Lista *L){
    if (L->Tamanho == 0){
        printf("ERRO: Lista Vazia!\n");
        return;
    }
    
    for (int i = 0; i < L->Tamanho; i++){
        printf("%d ", L->Array[i].Chave);
    }
    
    printf("\n");
}

float mediaLista(Lista *L){
    float soma = 0.0;
    for (int i = 0; i < L->Tamanho; i++){
        soma += L->Array[i].Chave;
    }
    
    return (soma / L->Tamanho);
}

void excluirItem(Lista *L){
    if (L->Tamanho == 0){
        printf("ERRO: Lista Vazia!\n");
        return;
    }
    
    L->Tamanho--;
}

void excluirItemV02(Lista *L, int Posicao){

    if (Posicao < 0 || Posicao >= L->Tamanho){
        printf("ERRO: Não Existe posicao indicada para exclusão!\n");
        return;
    }
    
    for (int i = Posicao; i < L->Tamanho; i++) L->Array[i].Chave = L->Array[i+1].Chave;

    L->Tamanho--;
}

Lista *inverterLista(Lista *L){
    Lista *ListaInvertida = criarLista(L->Tamanho);
    for (int i = L->Tamanho; i >= 0; i--) inserirItem(ListaInvertida, L->Array[i]);
    
    return ListaInvertida;
}