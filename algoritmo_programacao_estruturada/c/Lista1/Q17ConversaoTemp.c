//Faça um programa em C que calcule a conversão entre graus centígrados e Fahrenheit. Para isso, leia o valor em centígrados e calcule com base na fórmula a seguir. Após calcular o programa deve imprimir o resultado da conversão.

#include <stdio.h>

int main()
{
        float centigrados, fahrenheit;

        printf("Digite a temperatura em graus centígrados: ");
        scanf("%f", &centigrados);
        fahrenheit = (9 * centigrados + 160) / 5;
        printf("A temperatura em fahrenheit será de %.1f", fahrenheit);

        return 0;
}