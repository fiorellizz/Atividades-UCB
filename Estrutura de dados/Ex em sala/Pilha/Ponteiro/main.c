#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main(){

    Pilha *MinhaPilha = criarPilha();

    printf("Teste 01: Criando pilha vazia!\n");
    printf("Tamanho: %d\n", MinhaPilha->Tamanho);

    Item *I1 = criarItem(12);
    Item *I2 = criarItem(15);
    Item *I3 = criarItem(13);
    Item *I4 = criarItem(19);

    empilhar(MinhaPilha, I1);
    empilhar(MinhaPilha, I2);
    empilhar(MinhaPilha, I3);
    empilhar(MinhaPilha, I4);
    

    printf("Teste 02: Criando itens!\n");
    printf("%d\n", MinhaPilha->Topo->Chave);
    printf("%d\n", MinhaPilha->Tamanho);

    int X = desempilhar(MinhaPilha);
    printf("Teste 03: Desempilhando!\n");
    printf("%d\n", MinhaPilha->Topo->Chave);
    printf("%d\n", MinhaPilha->Tamanho);

    return 0;
}