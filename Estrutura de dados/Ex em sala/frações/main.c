#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fracoes.h"
#include "fracoes.c"

int main(){

    Fracao F1 = criarFracao(5,6);
    Fracao F2 = criarFracao(4,9);
    Fracao F3 = somarFracao(F1, F2);
    Fracao F4 = subtrairFracao(F1, F2);
    exibirFracao(F1);
    exibirFracao(F2);
    exibirFracao(F3);
    exibirFracao(F4);

    system("pause");

    return 0;
}