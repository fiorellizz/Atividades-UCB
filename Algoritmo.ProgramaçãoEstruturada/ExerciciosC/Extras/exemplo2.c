#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>

int main(){

    char nome[99];
    int i, contador;

    printf("Digite um nome: ");
    gets(nome);

    contador = strlen(nome);

    for (i = contador-1; i >= 0; i--)
    {
        printf("%c", toupper(nome[i]));
    }

    return 0;
}