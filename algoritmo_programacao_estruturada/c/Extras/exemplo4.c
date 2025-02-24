#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>

int main(){

    char nome[99];
    int i, j;

    printf("Digite um nome: ");
    gets(nome);

    int lenght = strlen(nome);

    for (i = 0; i < lenght; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%c", nome[j]);
        }
        printf("\n");
    }

    return 0;
}