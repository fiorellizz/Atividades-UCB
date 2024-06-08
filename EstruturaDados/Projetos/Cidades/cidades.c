#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cidades.h"

#define ERRO 1

Estrada *getEstrada(const char *nomeArquivo){
  Estrada *E = (Estrada *)malloc(sizeof(Estrada));
  if (E == NULL){
    printf("ERRO: Falha ao alocar memória para a estrada!\n");
    exit(ERRO);
  }
  
  FILE *arquivo;

  arquivo = fopen(nomeArquivo, "r");

  if (arquivo == NULL) {
      printf("ERRO: Falha ao abrir o arquivo %s!\n", nomeArquivo);
      exit(ERRO);
  }

  int N;     // Número de cidades
  int T;     // Comprimento da estrada

  fscanf(arquivo, "%d\n%d", &E->T, &E->N);
  //até aqui ok, tamanho e qtd da estrada lidos

  //agora tem que ler as cidades de acordo com a quantidade de já foi lida adicionando "itens"

  //ler nome da cidade e depois criar o item?
  
  for (int i = 0; i < N; i++){
    Cidade *C = (Cidade *) malloc(sizeof(Cidade));
    if (C == NULL){
        printf("ERRO: Falha ao alocar memória para a Cidade!\n");
        exit(ERRO);
    }

  }

  free(arquivo);
  return (E);
} // Inicializa cidades no TAD indicado acima.

double calcularMenorVizinhanca(const char *nomeArquivo){
  
} // Retorna a menor vizinhança.

char *cidadeMenorVizinhanca(const char *nomeArquivo){
  
} // Retorna a cidade que tem menor vizinhança.

/*outros codigos de aulas para auxiliar

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

*/