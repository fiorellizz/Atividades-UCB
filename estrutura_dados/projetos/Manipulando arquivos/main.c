#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
#include "funcoes.c"

int main() {

    FILE *arquivo;
    int i;

    arquivo = fopen("DadosEntrada.csv", "r");

    int linhas = contarLinhas(arquivo);
    struct Aluno X[linhas];

    if(arquivo == NULL) {
        printf("Erro ao abrir o arquivo!");
        exit(ERRO);
    }

    fscanf(arquivo, "%*[^\n]\n");
    system("cls");

    lerArquivo(arquivo, X, &i);
    
    fclose(arquivo);

    arquivo = fopen("SituacaoFinal.csv", "w");

    if(arquivo == NULL) {
        printf("Erro ao criar o arquivo!");
        exit(ERRO);
    }

    escreveArquivo(arquivo, X, &i);
    
    printf("Executado com sucesso");

    fclose(arquivo);

    return 0; 
}