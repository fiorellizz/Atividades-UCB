#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

#define ERRO 1

int main() {

    FILE * arquivo; //Declarando um ponteiro para arquivo
    int numero = 125;
    char palavra[] = "Quanto está o placar do jogo do Vasco pela Libertadores da América (contém ironia)?";


    arquivo = fopen("../saida.txt", "w");  // w: escrita

    if(arquivo == NULL) {
        printf("Erro ao abrir o arquivo!");
        exit(ERRO);
    }

    fprintf( arquivo, "Número: %d Palavra: %s\n", numero, palavra);
    fclose(arquivo);

   return 0; 
}


