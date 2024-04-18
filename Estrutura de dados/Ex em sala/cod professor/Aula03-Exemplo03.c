#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

#define ERRO 1

int main() {

    FILE * arquivo; //Declarando um ponteiro para arquivo
    int numero;
    char palavra[50];

    arquivo = fopen("arquivo.txt", "r");  // r: abrir o arquivo para leitura

    if(arquivo == NULL) {
        printf("Erro ao abrir o arquivo!");
        exit(ERRO);
    }

    fscanf(arquivo, "%d %s", &numero, palavra);
    printf("Numero: %d - Palavra: %s\n", numero, palavra);
    fscanf(arquivo, "%d %s", &numero, palavra);
    printf("Numero: %d - Palavra: %s\n", numero, palavra);
    fscanf(arquivo, "%d %s", &numero, palavra);
    printf("Numero: %d - Palavra: %s\n", numero, palavra);

    fclose(arquivo);
   return 0; 
}


