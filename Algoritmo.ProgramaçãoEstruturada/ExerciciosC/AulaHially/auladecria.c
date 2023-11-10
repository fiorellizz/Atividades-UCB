#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 3

typedef struct
{
    char nome[20];
    int quantidade, lote, id, status;
} Produto;

void cadastrar(Produto a[], int indice)
{   
    a[indice].id = indice + 1; //id automatico de 1 até o limite de cadastros
    a[indice].status = 1;
    printf("Digite o nome do produto: ");
    fflush(stdin);
    fgets(a[indice].nome, sizeof(a[indice].nome), stdin);
    a[indice].nome[strcspn(a[indice].nome, "\n")] = '\0';

    printf("Digite a quantidade de produto que serão armazenadas no estoque: ");
    fflush(stdin);
    scanf("%d", &a[indice].quantidade);

    printf("Digite o lote do produto que será armazenada no estoque: ");
    fflush(stdin);
    scanf("%d", &a[indice].lote);
}

void listarProdutos(Produto a[], int indice)
{
    if (indice == 0)
    {
        printf("Não existe produtos no estoque!\n\n");
    }
    else
    {
        
        for (int i = 0; i < indice; i++)
        {
            printf("Nome: %s \t|\t Quantidade: %d \t|\t Lote: %d \t|\t Id: %d\n\n", a[i].nome, a[i].quantidade, a[i].lote, a[i].id);
        }
    }
}

void buscar(Produto a[], int indice, int idbusca)
{
    int encontrado = 0;
    for (int i = 0; i < indice; i++)
    {
        if (idbusca == a[i].id)
        {
            printf("Nome: %s \t|\t Quantidade: %d \t|\t Lote: %d \t|\t Id: %d\n", a[i].nome, a[i].quantidade, a[i].lote, a[i].id);
            printf("\n");
            encontrado++;
        }
    }
    if (encontrado == 0)
    {
        printf("\nNenhum produto encontrado no estoque!\n\n");
    }
}

int main()
{
    Produto a[MAX];
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
            listarProdutos(a, count);
            break;

        case 3:
            printf("Digite o id do produto que quer buscar: ");
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