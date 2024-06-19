#include <stdio.h>
#include <stdlib.h>
#include "cidades.h"

int main() {
  Estrada *estrada = getEstrada("Entrada.txt");
  /*
  double menorVizinhanca = calcularMenorVizinhanca("Entrada.txt");
  printf("Menor vizinhanca: %.2f\n", menorVizinhanca);
  
  char *cidadeMenor = cidadeMenorVizinhanca("Entrada.txt");
  printf("Cidade com menor vizinhanca: %s\n", cidadeMenor);
  */
  free(estrada->C);
  free(estrada);
  return 0;
}