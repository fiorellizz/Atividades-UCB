/* Crie um programa em C que imprima os 20 primeiros termos da série de Fibonacci.
Observação: os dois primeiros termos desta série são 1 e 1 e os demais são gerados a partir da soma dos anteriores.
Exemplo:
• 1 + 1 = 2, terceiro termo;
• 1 + 2 = 3, quarto termo, etc. */

#include <stdio.h>

int main()
{
    int antecessor = 0, numero = 1, proximo;

    for (int i = 0; i < 20; i++)
    {
        printf("%d\n", numero);
        proximo = numero + antecessor;
        antecessor = numero;
        numero = proximo;
    }

    return 0;
}
