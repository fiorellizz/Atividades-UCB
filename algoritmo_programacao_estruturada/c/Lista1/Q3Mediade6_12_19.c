//Faça um programa em C que imprima a média aritmética entre os números 6, 12, 19.

#include <stdio.h>

int main()
{
        float num1 = 6, num2 = 12, num3 = 19, result;
        result = (num1 + num2 + num3)/3;
        printf("O média de %.0f, %.0f, %.0f é %.2f", num1, num2, num3, result);
        return 0;
}