#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

#define ERRO 1

int main() {

    FILE * arquivo; //Declarando um ponteiro para arquivo
    int numero = 431;
    char palavra[] = "Rsrsrsrs";

    arquivo = fopen("saida.txt", "a");  // a: escrita no final do arquivo

    if(arquivo == NULL) {
        printf("Erro ao abrir o arquivo!");
        exit(ERRO);
    }

    fprintf( arquivo, "Número: %d Palavra: %s\n", numero, palavra);
    fclose(arquivo);

   return 0; 
}


