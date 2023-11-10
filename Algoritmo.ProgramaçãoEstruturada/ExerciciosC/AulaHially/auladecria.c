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

    printf("Digite a quantidade do produto: ");
    fflush(stdin);
    scanf("%d", &a[indice].quantidade);

    printf("Digite o lote do produto: ");
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

void alterar(Produto a[], int indice, int idbusca){
    int mudar;
    for (int i = 0; i < indice; i++)
    {
        if (idbusca == a[i].id){
            printf("\nID: %d", a[i].id);
            printf("\nNome: %s", a[i].nome);
            printf("\nQuantidade: %d", a[i].quantidade);
            printf("\nLote: %d", a[i].lote);
            printf("\n\n");
            printf("1 - Alterar nome \n2 - Alterar quantidade \n3 - Alterar status \n4 - Alterar lote \n5 - Alterar todos \n");
            fflush(stdin);
            printf("Digite a opção desejada: ");
            fflush(stdin);
            scanf("%d", &mudar);
            fflush(stdin);
            if (mudar == 1){
                printf("Digite o novo nome: ");
                fgets(a[i].nome, sizeof(a[i].nome), stdin);
                a[indice].nome[strcspn(a[indice].nome, "\n")] = '\0';
                fflush(stdin);
            }else if(mudar == 2){
                printf("Digite a nova quantidade:");
                scanf("%d", &a[i].quantidade);
                fflush(stdin);
            }else if(mudar == 3){
                printf("Digite o novo status (0 ou 1): ");
                scanf("%d", &a[i].status);
                fflush(stdin);
            }else if(mudar == 4){
                printf("Digite o novo lote: ");
                scanf("%d", &a[i].lote);
                fflush(stdin);
            }else if(mudar == 5){
                printf("Digite o novo nome: ");
                fgets(a[i].nome, sizeof(a[i].nome), stdin);
                a[indice].nome[strcspn(a[indice].nome, "\n")] = '\0';
                printf("Digite a nova quantidade:");
                scanf("%d", &a[i].quantidade);
                printf("Digite o novo status (0 ou 1): ");
                scanf("%d", &a[i].status);
                printf("Digite o novo lote: ");
                scanf("%d", &a[i].lote);
                fflush(stdin);
            }else{
                printf("Opção invalida!");
            }
            return;
        }
        
    }
    
}

void excluir(Produto a[], int indice, int idbusca){
    for(int i = 0; i < indice; i++){
        if (idbusca == a[i].id){
            for(int j = i; j < indice - 1; j++){
                a[j] = a[j + 1];
            }
            printf("Excluido com sucesso!");
            return;
        }
    }
    printf("Registro nao encontrado!");
}

int main()
{
    Produto a[MAX];
    int count = 0, mudar, idbusca;
    char exclui;

    do
    {
        printf("[1] Cadastrar");
        printf("\n[2] Listar");
        printf("\n[3] Buscar");
        printf("\n[4] Alterar");
        printf("\n[5] Excluir");
        printf("\n[0] Sair");
        printf("\nDigite a opção escolhida: ");
        scanf("%d", &mudar);
        system("cls");

        switch (mudar)
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
                // mudar = 0;
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

        case 4:
            printf("Digite o id que deseja alterar: ");
            scanf("%d", &idbusca);
            alterar(a, count, idbusca);
            break;
        
        case 5:
            printf("Digite o id que deseja excluir: ");
            scanf("%d", &idbusca);
            fflush(stdin);
            printf("Deseja realmente excluir (s / n) ?\n");
            scanf("%c", &exclui);
                if (exclui == 's'){
                    excluir(a, count, idbusca);
                    count--;
                    printf("\n--------------------------\n");
                }else{
                    printf("Exclusao Cancelada!");
                    printf("\n--------------------------\n");
                }
            break;

        default:
            break;
        }

    } while (mudar != 0);

    return 0;
}