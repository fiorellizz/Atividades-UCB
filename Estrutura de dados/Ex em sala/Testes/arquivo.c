#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ERRO 0

struct produtos {
    char nome[20];
    int qtd;
    float valor;
};

void soma(struct produtos *P, int *total);

int main() {
    system("cls");

    struct produtos P[3];
    int total = 0;

    FILE *arquivo;
    arquivo = fopen("dados.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!");
        exit(ERRO);
    }

    for (int i = 0; i < 3; i++)
        fscanf(arquivo, "%s %d %f", P[i].nome, &P[i].qtd, &P[i].valor);

    for (int i = 0; i < 3; i++)
        printf("%s %d %.2f\n", P[i].nome, P[i].qtd, P[i].valor);

    fclose(arquivo);

    soma(P, &total);

    printf("Total: %d\n", total);

    return 0;
}

void soma(struct produtos *P, int *total) {
    for (int i = 0; i < 3; i++) {
        *total += P[i].valor;
    }
}
