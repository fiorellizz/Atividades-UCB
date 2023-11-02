/*Faça um programa que armazene as notas das provas 1 e 2 de 15 alunos. Calcule e armazene a média arredondada. Armazene também a situação do aluno: 1- Aprovado ou 2-Reprovado. Ao final o programa deve imprimir uma listagem contendo as notas, a média e a situação de cada aluno em formato tabulado. Utilize quantos vetores forem necessários para armazenar os dados.*/

#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    system("cls");

    int alunos;
    printf("Quantos alunos você vai calcular a média: ");
    scanf("%d", &alunos);

    float provas1[alunos], provas2[alunos], media[alunos];
    char nome[alunos][50], situacao[alunos][10];

    for (int i = 0; i < alunos; i++)
    {
        printf("Digite o nome do %d° aluno: ", i + 1);
        scanf("%s", nome[i]);

        printf("Digite a nota da prova 1 do aluno: ");
        scanf("%f", &provas1[i]);

        printf("Digite a nota da prova 2 do aluno: ");
        scanf("%f", &provas2[i]);

        system("cls");
    }

    for (int i = 0; i < alunos; i++)
    {
        media[i] = (provas1[i] + provas2[i]) / 2;
        if (media[i] < 7)
        {
            strcpy(situacao[i], "Reprovado");
        }
        else
        {
            strcpy(situacao[i], "Aprovado");
        }
    }

    printf("\n-----------------------------------------------------------------\n");
    printf("|\t\t\t TABELA DA SALA \t\t\t|\n");
    printf("-----------------------------------------------------------------\n");
    printf("|\tNOME\t\t|\tMEDIA\t|\tSITUACAO\t|\n");
    printf("-----------------------------------------------------------------\n");
    for (int i = 0; i < alunos; i++)
    {
        printf("|\t%s\t\t|\t%.0f\t|\t%s\t|\n", nome[i], media[i], situacao[i]);
    }
    printf("-----------------------------------------------------------------\n");

    return 0;
}