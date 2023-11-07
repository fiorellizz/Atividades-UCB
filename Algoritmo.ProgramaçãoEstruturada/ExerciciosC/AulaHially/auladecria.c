#include <stdio.h>
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
        printf("Não existem registros na lista!");
    }
    else
    {
        for (int i = 0; i < indice; i++)
        {
            printf("\nNome: %s", a[i].nome);
            printf("Idade: %d\n", a[i].idade);
        }
    }
}

void buscar(Aluno a[], int indice, int id){
    int idbusca;
    printf("Digite o id do aluno que quer buscar: ");
    fflush(stdin);
    scanf("%d", &idbusca);
    for (int i = 0; i < indice; i++)
    {
        if (idbusca == a[i].id)
        {
            printf("DEU BOM!");
        }
    }
    
}

int main()
{

    Aluno a[MAX];
    int count = 0, opcao;

    do
    {
        printf("\nDigite 1 para cadastrar");
        printf("\nDigite 2 para listar");
        printf("\nDigite 3 para buscar");
        printf("\nDigite 0 para sair");
        printf("\nDigite a opcao escolhida: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            if (count < MAX)
            {
                cadastrar(a, count);
                count++;
                printf("Cadastro realizado com sucesso!");
                printf("\n");
            }
            else
            {
                printf("Não foi possivel realizar o cadastro!");
                printf("\n");
                // opcao = 0;
            }
            break;
        case 2:
            listarAlunos(a, count);
            break;
        case 3:
            buscar(a, count, id);
            break;
        default:
            break;
        }

    } while (opcao != 0);
}