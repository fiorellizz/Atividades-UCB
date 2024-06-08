#include <stdio.h>
#include <stdlib.h>

#define ERRO    -1

int Area (int Lado) {
    if (Lado == 2) return(4);
    else if (Lado == 3) return (9);
    else if (Lado == 4) return (16);
    else if (Lado == 5) return (25);
    return ERRO;
}

int main() {
    float teste = Area(5);
    printf("Resposta: %f", teste);
}