#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

Pilha *criarPilha(){
    Pilha *P = (Pilha *)malloc(sizeof(Pilha));
    if (P == NULL){
        printf("ERRO: Falha ao alocar memória para a pilha!\n");
        exit(ERRO);
    }

    P->Tamanho = 0;
    P->Topo = NULL;
    
}

Item *criarItem(int X) {
    Item *I = (Item *) malloc(sizeof(Item));
    if (I == NULL){
        printf("ERRO: Falha ao alocar memória para o item!\n");
        exit(ERRO);
    }

    I->Chave = X;
    I->Anterior = NULL;

    return I;
}

void empilhar(Pilha *P, Item *I){
    I->Anterior = P->Topo;
    P->Topo = I;
    P->Tamanho++;
}

int desempilhar(Pilha *P){
    if (P->Tamanho == 0){
        printf("ERRO: A pilha está vazia!\n");
        exit(ERRO);
    }
    
    Item *temp = P->Topo;
    int Ch = temp->Chave;
    P->Topo = temp->Anterior;
    free(temp);
    P->Tamanho--;
    return(Ch);
}