#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct disciplina
{
    int matricula;
    char nome[30];
    float nota1, nota2, nota3, media;
};

typedef struct disciplina FIORELLI;

int main()
{

    FIORELLI alunos[5];
    float maior = 0;
    int y;

    for (int i = 0; i < 5; i++)
    {
        printf("Digite o nome do %d° aluno: ", i + 1);
        fflush(stdin);
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);
        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0';

        printf("Informe a matricula do do %d° aluno: ", i + 1);
        scanf("%d", &alunos[i].matricula);
        
        printf("Digite a %d nota: ", i + 1);
        scanf("%f", &alunos[i].nota1);

        printf("Digite a %d nota: ", i + 2);
        scanf("%f", &alunos[i].nota2);

        printf("Digite a %d nota: ", i + 3);
        scanf("%f", &alunos[i].nota3);

        alunos[i].media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3;

        if (alunos[i].media > maior)
        {
            maior = alunos[i].media;
            y = i;
        }
        
    }

    printf("Aluno com maior media %s, com notas %d %d %d e media %f", alunos[y].nome, alunos[y].nota1, alunos[y].nota2, alunos[y].nota3, alunos[y].media);
    

    return 0;
}