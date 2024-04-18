#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

#define ERRO 1

int main() {

    FILE * arquivo; //Declarando um ponteiro para arquivo
    char Linha[100];

    arquivo = fopen("arquivo.txt", "r");  // r: abrir o arquivo para leitura

    if(arquivo == NULL) {
        printf("Erro ao abrir o arquivo!");
        exit(ERRO);
    }

    system("cls");

    while(fgets(Linha, sizeof(Linha), arquivo) != NULL) {
        printf("%s", Linha);
    }

    fclose(arquivo);
   return 0; 
}


