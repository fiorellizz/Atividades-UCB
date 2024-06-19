#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "prova.h"

Estrada *getEstrada(const char *nomeArquivo){
    FILE *file = fopen(nomeArquivo, "r");
    Estrada *estrada(Estrada *) malloc(sizeof(Estrada));
    fscanf(file, "%d", &estrada->T);
    fscanf(file, "%d", &estrada->N);
    estrada->C = (Cidade *)malloc(estrada->N * sizeof(Cidade));
    for (int i = 0; i < estrada->N; i++){
        fscanf(file, "%d %s", &estrada->C[i].Posicao, estrada->C[i].Nome);
        printf("%s ", estrada->C[i].Nome);
    }
    fclose(file);
    return estrada;
}

int main(){
    Estrada *estrada = getEstrada("Entrada5.txt");

    free(estrada->C);
    free(estrada);
    return 0;
}