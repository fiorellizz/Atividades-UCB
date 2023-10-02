// Leia o código de um determinado produto e mostre sua classificação. Utilize a seguinte tabela como referência:

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int codigo;

    printf("Digite o codigo: ");
    scanf("%d", &codigo);

    switch (codigo)
    {
    case 1:
        printf("Alimento não-perecível");
        break;
    case 2 ... 4:
        printf("Alimento perecível");
        break;
    case 5 ... 6:
        printf("Vestuário");
        break;
    case 7:
        printf("Higiene Pessoal");
        break;
    case 8 ... 15:
        printf("Limpeza e Utensílios Domésticos");
        break;
    default:
        printf("Código inválido");
        break;
    }

    return 0;
}