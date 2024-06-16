#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "calculadora.h"

void executarTeste(char *posFixa, int numeroTeste) {
    FILE *arquivo = fopen("Resultado.txt", "a");
    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        exit(1);
    }

    fprintf(arquivo, "TESTE %d:\n", numeroTeste);
    char *inFixa = getFormaInFixa(posFixa);
    fprintf(arquivo, "Forma infixa: %s\n", inFixa);
    float valor = getValor(posFixa);
    fprintf(arquivo, "Valor da expressão: %.2f\n\n", valor);

    fclose(arquivo);
}

int main() {
    char posFixa01[] = "3 4 + 5 *";
    executarTeste(posFixa01, 1);

    char posFixa02[] = "7 2 * 4 +";
    executarTeste(posFixa02, 2);

    char posFixa03[] = "8 5 2 4 + * +";
    executarTeste(posFixa03, 3);

    char posFixa04[] = "6 2 / 3 + 4 *";
    executarTeste(posFixa04, 4);

    char posFixa05[] = "9 5 2 8 * 4 + * +";
    executarTeste(posFixa05, 5);

    char posFixa06[] = "2 3 + log 5 /";
    executarTeste(posFixa06, 6);

    char posFixa07[] = "10 log 3 ^ 2 +";
    executarTeste(posFixa07, 7);

    char posFixa08[] = "45 60 + 30 cos *";
    executarTeste(posFixa08, 8);

    char posFixa09[] = "0.5 45 sen 2 ^ +";
    executarTeste(posFixa09, 9);

    return 0;
}