#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ERRO 0

soma(struct PRODUTOS, int total);

struct produtos{

    char nome[20];
    int qtd;
    float valor;
};


int main(){

    system("cls");

    struct produtos PRODUTOS[3];
    int total = 0;
    
    FILE *arquivo;

    arquivo = fopen("dados.txt", "r");

    if(arquivo == NULL) {
        printf("Erro ao abrir o arquivo!");
        exit(ERRO);
    }

    for (int i = 0; i < 3; i++)
        fscanf(arquivo, "%s %d %f", PRODUTOS[i].nome, &PRODUTOS[i].qtd, &PRODUTOS[i].valor);
    
    for (int i = 0; i < 3; i++)
        printf("%s %d %.2f\n", PRODUTOS[i].nome, PRODUTOS[i].qtd, PRODUTOS[i].valor);
    
    fclose(arquivo);

    soma(&PRODUTOS, &total);
    
    return 0;
}

soma(struct *PRODUTOS, int *total) {
    
    
    for (int i = 0; i < 3; i++)
    {
        &total += (*PRODUTOS[i]->soma);
    }
    
};