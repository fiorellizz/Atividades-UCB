
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ERRO 0

struct Pessoa {
    char nome[20];
    int idade;
    float altura;
};

int main() {

    system("cls");

    struct Pessoa X;  // X ocupará pelo menos) 28 bytes na memória)

    printf("Digite um nome: ");
    //scanf("%s", X.nome); tem limitação: espaço é considerado fim da string
    gets(X.nome);
    printf("Digite a idade: ");
    scanf("%d", &X.idade);
    printf("Digite a altura: ");
    scanf("%f", &X.altura);

    // Imprimindo resultados ...

    printf("%s.\n", X.nome);
    printf("%d.\n", X.idade);
    printf("%.2f.\n", X.altura);

    return 0;








}







