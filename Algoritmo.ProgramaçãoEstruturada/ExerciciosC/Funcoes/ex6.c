/*Construa um programa em C que leia um caractere (letra) e, por meio de uma função, retorne se este caractere é uma consoante ou uma vogal. Ao final imprima o resultado.*/

#include <stdio.h>

int verificar(char caractere) {
    int vogal = 0;
    if (caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u' || caractere == 'A' || caractere == 'E' || caractere == 'I' || caractere == 'O' || caractere == 'U') {
        vogal++;
    }

    return vogal;
}

int main() {
    char caractere;
    int vogal = 0;

    printf("Digite um caractere: ");
    scanf(" %c", &caractere);

    vogal = verificar(caractere);

    if (vogal != 0) {
        printf("O caractere '%c' é uma vogal.\n", caractere);
    } else {
        printf("O caractere '%c' é uma consoante.\n", caractere);
    }

    return 0;
}