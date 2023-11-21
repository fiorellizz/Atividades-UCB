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

typedef struct
{
    char usuario[50], senha[50], bancoUsuario[50], bancoSenha[50];
} Usuario;


void cadastrar(Produto a[], int indice)
{
    a[indice].status = 1;
    a[indice].id = indice + 1;
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

/*void gerarid(Produto a[], int indice)
{
    int verificar = 1;
    a[indice].id = 1;


        if (verificar == a[indice].id)
        {
            verificar++;
        }
        else
        {
            a[indice].id = verificar;
        }

}*/

void listarTodos(Produto a[], int indice)
{

    if (indice == 0)
    {
        printf("\nNenhum registro encontrado!");
    }
    else
    {
        for (int i = 0; i < indice; i++)
        {
            printf("Id: %d", a[i].id);
            printf("\nNome: %s", a[i].nome);
            printf("\nIdade: %d", a[i].quantidade);
            printf("\nLote: %d", a[i].lote);
            if (a[i].status == 1)
            {
                printf("\nStatus: Ativado\n");
            }
            else
            {
                printf("\nStatus: Desativado\n");
            }
            printf("\n");
        }
    }
}

void listarProdutos(Produto a[], int indice)
{
    int escolha;

    if (indice == 0)
    {
        printf("\nNenhum registro encontrado!");
    }
    else
    {
        printf("1 - Ativados \n2 - Desativados \n3 - Todos \n");
        fflush(stdin);
        printf("Digite opção desejada: ");
        fflush(stdin);
        scanf("%d", &escolha);
        fflush(stdin);
        switch (escolha)
        {
        case 1:
            for (int i = 0; i < indice; i++)
            {
                if (a[i].status == 1)
                {
                    printf("Id: %d", a[i].id);
                    printf("\nNome: %s", a[i].nome);
                    printf("\nQuantidade: %d", a[i].quantidade);
                    printf("\nLote: %d", a[i].lote);
                    printf("\nStatus: %d\n", a[i].status);
                    printf("\n");
                }
            }
            break;
        case 2:
            for (int i = 0; i < indice; i++)
            {
                if (a[i].status == 0)
                {
                    printf("Id: %d", a[i].id);
                    printf("\nNome: %s", a[i].nome);
                    printf("\nQuantidade: %d", a[i].quantidade);
                    printf("\nLote: %d", a[i].lote);
                    printf("\nStatus: %d\n", a[i].status);
                    printf("\n");
                }
            }
            break;
        case 3:
            listarTodos(a, indice);
            break;
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
            printf("Id: %d", a[i].id);
            printf("\nNome: %s", a[i].nome);
            printf("\nIdade: %d", a[i].quantidade);
            printf("\nLote: %d\n", a[i].lote);
            printf("\n");
            encontrado++;
        }
    }
    if (encontrado == 0)
    {
        printf("\nNenhum produto encontrado no estoque!\n\n");
    }
}

void alterar(Produto a[], int indice, int idbusca)
{
    int mudar;
    for (int i = 0; i < indice; i++)
    {
        if (idbusca == a[i].id)
        {
            printf("Id: %d", a[i].id);
            printf("\nNome: %s", a[i].nome);
            printf("\nQuantidade: %d", a[i].quantidade);
            printf("\nLote: %d", a[i].lote);
            if (a[i].status == 1)
            {
                printf("\nStatus: Ativado");
            }
            else
            {
                printf("\nStatus: Desativado");
            }
            printf("\n\n");
            printf("1 - Alterar Nome \n2 - Alterar Quantidade \n3 - Alterar Status \n4 - Alterar Lote \n5 - Alterar Todos \n");
            fflush(stdin);
            printf("Digite a opção desejada: ");
            fflush(stdin);
            scanf("%d", &mudar);
            fflush(stdin);
            if (mudar == 1)
            {
                printf("Digite o novo nome: ");
                fgets(a[i].nome, sizeof(a[i].nome), stdin);
                a[indice].nome[strcspn(a[indice].nome, "\n")] = '\0';
                fflush(stdin);
            }
            else if (mudar == 2)
            {
                printf("Digite a nova quantidade:");
                scanf("%d", &a[i].quantidade);
                fflush(stdin);
            }
            else if (mudar == 3)
            {
                printf("Digite o novo status (0 ou 1): ");
                scanf("%d", &a[i].status);
                fflush(stdin);
            }
            else if (mudar == 4)
            {
                printf("Digite o novo lote: ");
                scanf("%d", &a[i].lote);
                fflush(stdin);
            }
            else if (mudar == 5)
            {
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
            }
            else
            {
                printf("Opção invalida!\n");
            }
            printf("Digite qualquer tecla para voltar ao menu...");
            getch();
            system("cls");
            return;
        }
    }
}

void excluir(Produto a[], int indice, int idbusca)
{
    for (int i = 0; i < indice; i++)
    {
        if (idbusca == a[i].id)
        {
            for (int j = i; j < indice - 1; j++)
            {
                a[j] = a[j + 1];
            }
            printf("\nExcluido com sucesso!\n");
            printf("Digite qualquer tecla para voltar ao menu...");
            getch();
            system("cls");
            return;
        }
    }
    printf("Registro não encontrado!\n");
}

void entrarConta(Usuario b[], int indice, int login){
    printf("Digite seu usuario: ");
    fflush(stdin);
    fgets(b[indice].usuario, sizeof(b[indice].usuario), stdin);

    printf("Digite sua senha: ");
    fflush(stdin);
    fgets(b[indice].senha, sizeof(b[indice].senha), stdin);

    //https://wagnergaspar.com/como-comparar-duas-strings-com-a-funcao-strcmp-na-linguagem-de-programacao-c/
    if (strcmp(b[indice].usuario, b[indice].bancoUsuario) == 0 && strcmp(b[indice].senha, b[indice].bancoSenha) == 0)
    {
        login++;
    }
    
}

void criarConta(Usuario b[], int indice){
    printf("Digite um nome de usuario para sua conta: ");
    fflush(stdin);
    fgets(b[indice].bancoUsuario, sizeof(b[indice].bancoUsuario), stdin);

    printf("Digite uma senha para sua conta: ");
    fflush(stdin);
    fgets(b[indice].bancoSenha, sizeof(b[indice].bancoSenha), stdin);
}

int main()
{
    Produto a[MAX];
    Usuario b[MAX];
    int count = 0, mudar, idbusca, login = 0, conta /*acessos*/;
    char excluiDados, alterarDados;

    printf("BEM VINDO AO PAINEL DE CONTROLE DE ESTOQUE!\n");
    printf("Para ter acesso ao painel ENTRE na sua conta ou CRIE uma!\n\n");
        
    do
    {
        printf("[1] Entrar");
        printf("\n[2] Criar");
        printf("\nDigite a opção escolhida: ");
        fflush(stdin);
        scanf("%d", &conta);
        system("cls");

        if (conta == 1)
        {
            entrarConta(b, count, login);
        } else if (conta == 2)
        {
            criarConta(b, count);
            printf("Conta criada com sucesso!\n");
            printf("Digite qualquer tecla para voltar ao menu...");
            getch();
            system("cls");
        }
        
        

    } while (login == 0);
        

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
                // gerarid(a, count);
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
            printf("Digite qualquer tecla para voltar ao menu...");
            getch();
            system("cls");
            break;

        case 3:
            printf("Digite o id do produto que quer buscar: ");
            fflush(stdin);
            scanf("%d", &idbusca);
            buscar(a, count, idbusca);
            break;

        case 4:
            listarTodos(a, count);
            printf("Digite o id que deseja alterar: ");
            fflush(stdin);
            scanf("%d", &idbusca);
            printf("Deseja realmente alterar (s / n)?\n");
            fflush(stdin);
            scanf("%c", &alterarDados);
            system("cls");
            if (alterarDados == 's')
            {
                alterar(a, count, idbusca);
            }
            else
            {
                printf("Alteração Cancelada!");
            }
            
            
            break;

        case 5:
            listarTodos(a, count);
            printf("Digite o id que deseja excluir: ");
            fflush(stdin);
            scanf("%d", &idbusca);
            printf("Deseja realmente excluir (s / n)?\n");
            fflush(stdin);
            scanf("%c", &excluiDados);
            if (excluiDados == 's')
            {
                excluir(a, count, idbusca);
                count--;
            }
            else
            {
                printf("Exclusao Cancelada!");
            }
            // count = idbusca;
            break;

        default:
            break;
        }

    } while (mudar != 0);

    return 0;
}