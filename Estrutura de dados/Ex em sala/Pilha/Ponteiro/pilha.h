#ifndef PILHA_H
#define PILHA_H

#define ERRO 1

typedef struct Item{
    int Chave;
    struct Item *Next;
} Item;

typedef struct Pilha{
    int Tamanho;
    Item *Topo;
} Pilha;

Pilha *criarPilha();

#endif