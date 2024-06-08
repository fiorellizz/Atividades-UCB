#ifndef LISTA_H
#define LISTA_H

#define ERRO 1

typedef struct{
    int Chave;
} Item;

typedef struct{
    int Capacidade;
    int Tamanho;
    Item *Array;
} Lista;

Lista *criarLista(int C);
Lista *inverterLista(Lista *L);
float mediaLista(Lista *L);
void inserirItem(Lista *L, Item E);
void exibirLista(Lista *L);
void excluirItem(Lista *L);
void excluirItemV02(Lista *L, int Posicao);

#endif