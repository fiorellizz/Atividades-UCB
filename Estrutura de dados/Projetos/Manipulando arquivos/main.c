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
};

int main() {

    FILE *arquivo; //PONTEIRO QUE VAI RECEBER O ARQUIVO.
    struct Aluno X[100]; 

    arquivo = fopen("DadosEntrada.csv", "r"); //PONTEIRO "ABRIU" O ARQUIVO RECEBEU DADOSENTRADA.CSV NO MODO DE "R" DE READY (APENAS LEITURA).

    if(arquivo == NULL) {
        printf("Erro ao abrir o arquivo!"); //CASO O ARQUIVO DADOSENTRADA.CSV NÃO ESTEJA JUNTO COM O .EXE DO CODIGO RETORNARA ESSE ERRO.
        exit(ERRO);
    }

    fscanf(arquivo, "%*[^\n]\n"); //LE TODA A PRIMEIRA LINHA DO ARQUIVO E IGNORA, POIS ELA NÃO SERÁ NECESSÁRIA.

    system("cls");

    int i; //DECLARAÇÃO DO I FORA DO FOR POIS O VALOR SERÁ REUTILIZADO PARA PRINTAR

    //LEITURA DE TODO O ARQUIVO DE ENTRADA E GUARDADA NA STRUCT
    for (i = 0; fscanf(arquivo, "%[^,],%[^,],%[^,],%f,%f", X[i].Nome, X[i].Telefone, X[i].Curso, &X[i].Nota1, &X[i].Nota2) != EOF; i++);

    //FECHAMENTO DO ARQUIVO, PONTEIRO "ARQUIVO" VAZIO
    fclose(arquivo);

    //PONTEIRO "CRIOU" O ARQUIVO SITUACAOFINAL.CSV NO MODO DE "W" DE WRITE (APAGA TUDO NO ARQUIVO SE TIVER).
    arquivo = fopen("SituacaoFinal.cvs", "w");

    if(arquivo == NULL) {
        printf("Erro ao criar o arquivo!"); //CASO O ARQUIVO SITUAÇÃOFINAL.CSV NÃO SEJA CRIADO JUNTO COM O .EXE DO CODIGO RETORNARA ESSE ERRO.
        exit(ERRO);
    }

    //ESCREVE TODOS OS DADOS ARMAZENADOS NA STRUCT NO NOVO ARQUIVO NA FORMATAÇÃO PEDIDA
    for (int j = 0; j < i; j++) {
        fprintf(arquivo, "%s, %.2f, ", X[j].Nome, ((X[j].Nota1 + X[j].Nota2) / 2));
        if ((X[j].Nota1 + X[j].Nota2) / 2 >= 7.0){
            fprintf(arquivo, "APROVADO");
        } else {
            fprintf(arquivo, "REPROVADO");
        }
    }
    
    //FECHAMENTO DO ARQUIVO, PONTEIRO "ARQUIVO" VAZIO
    fclose(arquivo);

    return 0; 
}