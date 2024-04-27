#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    FILE *arquivo;
    char linha [100];
    arquivo = fopen("dados.txt", "r");
    if (arquivo == NULL) {
    printf("Erro ao abrir o arquivo.\n");
    exit(1);
    }
    while (fgets (linha, sizeof(linha), arquivo) != NULL) {
    printf("%s", linha);
    }
    fclose(arquivo);

    return 0;
}