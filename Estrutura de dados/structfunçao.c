#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ERRO 0

struct Pessoa criarPessoa(struct Pessoa);
//void calculaIMC();

struct Pessoa
{
    char nome[20];
    int idade;
    float altura, peso;
};

void main (){
    struct Pessoa X = criarPessoa(Pessoa);
    
}

criarPessoa(struct Pessoa){
    printf("Nome: ");
    gets(Pessoa.nome);
    printf("Idade: ");
    scanf("%d", &Pessoa.idade);
    printf("Altura: ");
    scanf("%f", &Pessoa.altura);
    printf("Peso: ");
    scanf("%f", &Pessoa.peso);

    return Pessoa;
}