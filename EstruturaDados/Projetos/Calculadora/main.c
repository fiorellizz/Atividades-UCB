#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "calculadora.h"

int main() {
    Expressao expr1 = {"3 4 + 5 *", "", 0.0};
    executarTeste(&expr1, 1);

    Expressao expr2 = {"7 2 * 4 +", "", 0.0};
    executarTeste(&expr2, 2);

    Expressao expr3 = {"8 5 2 4 + * +", "", 0.0};
    executarTeste(&expr3, 3);

    Expressao expr4 = {"6 2 / 3 + 4 *", "", 0.0};
    executarTeste(&expr4, 4);

    Expressao expr5 = {"9 5 2 8 * 4 + * +", "", 0.0};
    executarTeste(&expr5, 5);

    Expressao expr6 = {"2 3 + log 5 /", "", 0.0};
    executarTeste(&expr6, 6);

    Expressao expr7 = {"10 log 3 ^ 2 +", "", 0.0};
    executarTeste(&expr7, 7);

    Expressao expr8 = {"45 60 + 30 cos *", "", 0.0};
    executarTeste(&expr8, 8);

    Expressao expr9 = {"0.5 45 sen 2 ^ +", "", 0.0};
    executarTeste(&expr9, 9);

    return 0;
}