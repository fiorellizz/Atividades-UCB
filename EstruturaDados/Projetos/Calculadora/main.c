#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "calculadora.h"

int main() {

    char posFixa[] = "53 23 + 8 2 - *";
    printf("Teste professor, forma posFixa: %s\n", posFixa);
    
    // Convertendo para a forma infixa
    char *inFixa = getFormaInFixa(posFixa);
    printf("Teste professor: %s\n", inFixa);
    
    // Calculando o valor da expressão
    float valor = getValor(posFixa);
    printf("Teste professor: %.2f\n", valor);
    
    char posFixa01[] = "3 4 + 5 *";
    executarTeste(posFixa01, 2);

    char posFixa02[] = "7 2 * 4 +";
    executarTeste(posFixa02, 3);

    char posFixa03[] = "8 5 2 4 + * +";
    executarTeste(posFixa03, 4);

    char posFixa04[] = "6 2 / 3 + 4 *";
    executarTeste(posFixa04, 5);

    char posFixa05[] = "9 5 2 8 * 4 + * +";
    executarTeste(posFixa05, 6);

    char posFixa06[] = "2 3 + log 5 /";
    executarTeste(posFixa06, 7);

    char posFixa07[] = "10 log 3 ^ 2 +";
    executarTeste(posFixa07, 8);

    char posFixa08[] = "45 60 + 30 cos *";
    executarTeste(posFixa08, 9);

    char posFixa09[] = "0.5 45 sen 2 ^ +";
    executarTeste(posFixa09, 10);

    return 0;
}