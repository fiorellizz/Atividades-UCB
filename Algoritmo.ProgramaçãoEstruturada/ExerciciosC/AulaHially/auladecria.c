#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define MAX 3

typedef struct
{
    char nome[20];
    int idade, id;
} Aluno;

void cadastrar(Aluno a[], int indice)
{
    printf("Digite o nome do aluno: ");
    fflush(stdin);
    fgets(a[indice].nome, sizeof(a[indice].nome), stdin);
    fflush(stdin);
    printf("Digite a idade do aluno: ");
    fflush(stdin);
    scanf("%d", &a[indice].idade);
    printf("Digite o id do aluno: ");
    fflush(stdin);
    scanf("%d", &a[indice].id);
}

void listarAlunos(Aluno a[], int indice)
{
    if (indice == 0)
    {
        printf("Não existem registros na lista!\n\n");
    }
    else
    {
        for (int i = 0; i < indice; i++)
        {
            printf("Nome: %s", a[i].nome);
            printf("Idade: %d\n", a[i].idade);
            printf("Id: %d\n", a[i].id);
            printf("\n");
        }
    }
}

void buscar(Aluno a[], int indice, int idbusca)
{
    int encontrado = 0;
    for (int i = 0; i < indice; i++)
    {
        if (idbusca == a[i].id)
        {
            printf("\nNome: %s", a[i].nome);
            printf("Idade: %d\n", a[i].idade);
            printf("\n");
            encontrado++;
        }
    }
    if (encontrado == 0)
    {
        printf("\nRegistro não escontrado!\n\n");
    }
}

int main()
{
    Aluno a[MAX];
    int count = 0, opcao, idbusca;
    do
    {
        printf("Digite 1 para cadastrar");
        printf("\nDigite 2 para listar");
        printf("\nDigite 3 para buscar");
        printf("\nDigite 0 para sair");
        printf("\nDigite a opcao escolhida: ");
        scanf("%d", &opcao);
        system("cls");

        switch (opcao)
        {
        case 1:
            if (count < MAX)
            {
                cadastrar(a, count);
                count++;
                printf("Cadastro realizado com sucesso!\n");
                printf("Digite qualquer tecla para voltar ao menu...");
                getch();
                system("cls");
            }
            else
            {
                printf("Limite de cadastros atingidos!\n\n");
                printf("Digite qualquer tecla para voltar ao menu...");
                getch();
                system("cls");
                // opcao = 0;
            }
            break;

        case 2:
            listarAlunos(a, count);
            break;

        case 3:
            printf("Digite o id do aluno que quer buscar: ");
            fflush(stdin);
            scanf("%d", &idbusca);
            buscar(a, count, idbusca);
            break;

        default:
            if (opcao != 0)
            {
                printf("Valor inválido!\n");
            }
            break;
        }

    } while (opcao != 0);

    return 0;
}