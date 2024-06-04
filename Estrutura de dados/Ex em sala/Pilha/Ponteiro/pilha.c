#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

Pilha *criarPilha(){
    Pilha *P = (Pilha)malloc(sizeof(Pilha));
    if (P == NULL){
        printf("ERRO: Falha ao alocar memória para a pilha!\n");
        exit(ERRO);
    }

    P->Tamanho = 0;
    P->Topo = NULL;
    
}