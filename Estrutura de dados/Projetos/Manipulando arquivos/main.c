#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ERRO 1

struct Aluno{
    char Nome[100];
    char Telefone[100];
    char Curso[20];
    float Nota1;
    float Nota2;
    float Media;
};

int main() {
    FILE *arquivo;
    struct Aluno X[100];

    arquivo = fopen("DadosEntrada.csv", "r");

    if(arquivo == NULL) {
        printf("Erro ao abrir o arquivo!");
        exit(ERRO);
    }

    fscanf(arquivo, "%*[^\n]\n");

    system("cls");

    int i;
    for (i = 0; fscanf(arquivo, "%[^,],%[^,],%[^,],%f,%f", X[i].Nome, X[i].Telefone, X[i].Curso, &X[i].Nota1, &X[i].Nota2) != EOF; i++);

    fclose(arquivo);

    arquivo = fopen("SituacaoFinal.cvs", "w");

    if(arquivo == NULL) {
        printf("Erro ao abrir o arquivo!");
        exit(ERRO);
    }

    for (int j = 0; j < i; j++) {
        fprintf(arquivo, "%s, %.2f, ", X[j].Nome, ((X[j].Nota1 + X[j].Nota2) / 2));
        if ((X[j].Nota1 + X[j].Nota2) / 2 >= 7.0){
            fprintf(arquivo, "APROVADO");
        } else {
            fprintf(arquivo, "REPROVADO");
        }
    }
    
    fclose(arquivo);

    return 0; 
}