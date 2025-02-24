#include <stdio.h>
#include <string.h>

int main(){

    char nome[99];
    int contador, i;

    printf("Digite um nome: ");
    gets(nome);

    contador = strlen(nome);

    for (i = 0; i < contador; i++)
    {
        printf("%c\n", nome[i]);
    }

    return 0;
}