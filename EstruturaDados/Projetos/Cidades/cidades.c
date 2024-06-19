#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cidades.h"
#define ERRO 1

Estrada *getEstrada(const char *nomeArquivo) {
    Estrada *E = (Estrada *)malloc(sizeof(Estrada));
    if (E == NULL) {
        printf("ERRO: Falha ao alocar memória para a Estrada!\n");
        exit(ERRO);
    }

    FILE *arquivo = fopen(nomeArquivo, "r");
    if (arquivo == NULL) {
        printf("ERRO: Falha ao abrir o arquivo %s!\n", nomeArquivo);
        free(E);
        exit(ERRO);
    }

    fscanf(arquivo, "%d\n%d", &E->T, &E->N);

    E->C = (Cidade *)malloc(E->N * sizeof(Cidade));
    if (E->C == NULL) {
        printf("ERRO: Falha ao alocar memória para a Cidade!\n");
        fclose(arquivo);
        free(E);
        exit(ERRO);
    }

    for (int i = 0; i < E->N; i++) fscanf(arquivo, "%d %255[^\n]", &E->C[i].Posicao, E->C[i].Nome);

    fclose(arquivo);

    for (int i = 0; i < E->N - 1; i++) {
        for (int j = 0; j < E->N - i - 1; j++) {
            if (E->C[j].Posicao > E->C[j + 1].Posicao) {
                Cidade temp = E->C[j];
                E->C[j] = E->C[j + 1];
                E->C[j + 1] = temp;
            }
        }
    }

    return E;
}

void calcularVizinhanca(Estrada *E, double *vizinhanca) {
    double pontosMedios[E->N - 1];
    for (int i = 0; i < E->N - 1; i++) pontosMedios[i] = ((double)E->C[i].Posicao + E->C[i + 1].Posicao) / 2;

    for (int i = 0; i < E->N; i++) {
        if (i == 0) {
            vizinhanca[i] = pontosMedios[i];
        } else if (i == E->N - 1) {
            vizinhanca[i] = E->T - pontosMedios[i - 1];
        } else {
            vizinhanca[i] = pontosMedios[i] - pontosMedios[i - 1];
        }
    }
}

double calcularMenorVizinhanca(const char *nomeArquivo) {
    Estrada *E = getEstrada(nomeArquivo);
    double vizinhanca[E->N];
    calcularVizinhanca(E, vizinhanca);

    double MenorVizinhanca = (double)E->T;
    for (int i = 0; i < E->N; i++) {
        if (vizinhanca[i] < MenorVizinhanca) {
            MenorVizinhanca = vizinhanca[i];
        }
    }

    return MenorVizinhanca;
}

char *cidadeMenorVizinhanca(const char *nomeArquivo) {
    Estrada *E = getEstrada(nomeArquivo);
    double vizinhanca[E->N];
    calcularVizinhanca(E, vizinhanca);

    double MenorVizinhanca = (double)E->T;
    int indiceMenorVizinhanca = 0;
    for (int i = 0; i < E->N; i++) {
        if (vizinhanca[i] < MenorVizinhanca) {
            MenorVizinhanca = vizinhanca[i];
            indiceMenorVizinhanca = i;
        }
    }

    char *nomeCidade = E->C[indiceMenorVizinhanca].Nome;
    
    return nomeCidade;
}