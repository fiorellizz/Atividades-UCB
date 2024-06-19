#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

#define ERRO 1

int main() {

    FILE * arquivo; //Declarando um ponteiro para arquivo
    char Letra;

    arquivo = fopen("arquivo.txt", "r");  // r: abrir o arquivo para leitura

    if(arquivo == NULL) {
        printf("Erro ao abrir o arquivo!");
        exit(ERRO);
    }

    system("cls");

    int x;

    do {
        // EOF: End Of File
        x = fscanf(arquivo, "%c", &Letra);
        printf("%c", Letra);
    } while(x != EOF);

    fclose(arquivo);
   return 0; 
}


