#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define ERRO 0

struct Pessoa {
char nome[20];
int idade;
};
struct Pessoa criarPessoa() {
struct Pessoa pessoa;
strcpy(pessoa.nome, "João");
pessoa.idade = 25;
return pessoa;
}
int main() {
struct Pessoa pessoa1 = criarPessoa();
// Usar a struct retornada
printf("Nome: %s\n", pessoa1.nome);
printf("Idade: %d\n", pessoa1.idade);
return 0;
}
