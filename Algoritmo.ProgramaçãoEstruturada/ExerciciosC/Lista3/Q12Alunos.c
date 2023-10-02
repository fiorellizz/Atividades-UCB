// Crie um programa em linguagem C que permita entrar com o nome, a nota da prova 1 e da prova 2 de 15 alunos. Ao final, imprimir uma listagem, contendo: nome, nota da prova 1, nota da prova 2, e média das notas de cada aluno. Ao final, imprimir a média geral da turma.

#include <stdio.h>

int main()
{
    char nome[20];
    float nota1, nota2, media_aluno = 0, media_turma = 0, qntalunos;

    printf("Quantos alunos tem na turma: ");
    scanf("%f", &qntalunos);

    for (int i = 0; i < qntalunos; i++)
    {
        printf("Digite o nome do %d° aluno: ", i + 1);
        scanf("%s", &nome);

        printf("Digite a nota 1 do aluno: ");
        scanf("%f", &nota1);

        printf("Digite a nota 2 do aluno: ");
        scanf("%f", &nota2);

        media_aluno = (nota1 + nota2) / 2;
        media_turma = media_turma + media_aluno;

        printf("O aluno %s teve nota 1 = %.2f nota 2 = %.2f e ficou com media %.2f\n", nome, nota1, nota2, media_aluno);
    }

    media_turma = media_turma / qntalunos;
    printf("\nA media da turma ficou %.2f", media_turma);

    return 0;
}