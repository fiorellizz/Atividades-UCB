//o jeito que esta pedindo no enunciado

#include <stdio.h>
#include <string.h>

struct aluno
{
    int idade;
    char *nome[30];
};

typedef struct aluno pessoa;

int main(){
    
    pessoa aluno;

    aluno.nome = "João Batista";
    aluno.idade = 27;
    printf("%s tem %d anos de idade.", aluno.nome, aluno.idade);
    
    return 0;
}

//jeito que esse codigo funciona!!
/*
#include <stdio.h>
#include <string.h>

struct aluno
{
    int idade;
    char nome[30];
    char *ponteiro_nome;
};

typedef struct aluno pessoa;

int main(){
    
    pessoa aluno;

    aluno.ponteiro_nome = aluno.nome;
    strcpy(aluno.ponteiro_nome, "João Batista");
    aluno.idade = 27;
    printf("%s tem %d anos de idade.", aluno.nome, aluno.idade);
    
    return 0;
}
*/