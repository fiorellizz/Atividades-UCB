#include <stdio.h>
#include <stdlib.h>
#include "cidades.h"

int main() {
  Estrada *estrada = getEstrada("Entrada.txt");
  /*if (estrada) {
    double menorVizinhanca = calcularMenorVizinhanca("estrada.txt");
    char *cidadeMenor = cidadeMenorVizinhanca("estrada.txt");

    printf("Menor vizinhanca: %.2f\n", menorVizinhanca);
    printf("Cidade com menor vizinhanca: %s\n", cidadeMenor);

    free(estrada->C);
    free(estrada);
  }*/

 printf("Teste 01, mostrando Tamanho estrada: %d\n", estrada->T);
 printf("Teste 02, mostrando Quantidade de cidades: %d\n", estrada->N);

  return 0;
}