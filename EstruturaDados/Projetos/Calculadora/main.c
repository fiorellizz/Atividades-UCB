#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "calculadora.h"

int main() {

    char posFixa[] = "53 23 + 8 2 - *";
    
    // Convertendo para a forma infixa

    char *inFixa = getFormaInFixa(posFixa);
    
    // Calculando o valor da expressão

    float valor = getValor(posFixa);
    
    return 0;
}