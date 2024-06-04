#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main(){

    Pilha *MinhaPilha = criarPilha();

    printf("Teste 01: Criando pilha vazia!\n");
    printf("Tamanho: %d\n", MinhaPilha->Tamanho);
    printf("\n");

    return 0;
}