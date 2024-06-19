
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ERRO 0

int Mystrlen(char *str);

int main() {
    system("cls");
    char nome[20] = "MATEMATICA";
    printf("O tamanho da string %s e %d.\n", nome, Mystrlen(nome));
    printf("O tamanho da string %s e %d.\n", nome, strlen(nome));
}

//Implementando função para calcular o tamanho de uma string

int Mystrlen(char *str) {
    int tamanho = 0;
    for (tamanho = 0; str[tamanho] != '\0'; tamanho++);
    return(tamanho);
};




