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

  fscanf(arquivo, "%d\n%d", &E->T, &E->N);

  E->C = (Cidade *) malloc(E->N * sizeof(Cidade));
    
  if (E->C == NULL){
      printf("ERRO: Falha ao alocar memória para a Cidade!\n");
      exit(ERRO);
  }

  for (int i = 0; i < E->N; i++){
    fscanf(file, "%d %255[^\n]", &E->C[i].Posicao, &E->C[i].Nome);
  }

  fclose(arquivo);
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