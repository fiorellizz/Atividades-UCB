#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ERRO 0

struct Pessoa {
    char nome[1024];
    float altura;
    float peso;
    int idade;
};

struct  Pessoa criarPessoa();
void imprimirPessoa(struct  Pessoa X);
float calcularIMC (struct Pessoa X);
void modificarPessoa(struct Pessoa *X);


void main() {
    system("cls");
    struct  Pessoa Fulano = criarPessoa();
    imprimirPessoa(Fulano);
    modificarPessoa(&Fulano);
    imprimirPessoa(Fulano);
    printf("%.3f", calcularIMC(Fulano));

}

struct  Pessoa criarPessoa() {
    struct  Pessoa X;
    printf("Nome: ");
    gets(X.nome);
    printf("Idade: ");
    scanf("%d", &X.idade);
    printf("Altura: ");
    scanf("%f", &X.altura);
    printf("Peso: ");
    scanf("%f", &X.peso);
    return(X);
};

void imprimirPessoa(struct  Pessoa X){
    printf("%s \t %d \t %.2f m \t %.2f kg \n", 
        X.nome, X.idade, X.altura, X.peso);    
}

float calcularIMC (struct Pessoa X){
    float IMC = X.peso / (X.altura * X.altura);
    return(IMC);    
}

void modificarPessoa(struct Pessoa *X){
    printf("A pessoa fez aniversario...\n");
    X->idade = X->idade + 1;
}
