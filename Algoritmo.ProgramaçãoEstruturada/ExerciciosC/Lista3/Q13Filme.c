/*No dia da estréia do filme "Barbie", uma grande emissora de TV realizou uma pesquisa logo após o encerramento do filme. Cada espectador respondeu a um questionário no qual constava sua idade e a sua opinião em relação ao filme:
excelente - 3;
bom - 2;
regular - 1.
Criar um programa que receba a idade e a opinião de 20 espectadores, calcule e imprima:

• A média das idades das pessoas que responderam excelente;
• A quantidade de pessoas que responderam regular;
• A percentagem de pessoas que responderam bom entre todos os expectadores analisados.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int idade, notaFilme, valorInvalido = 0;
    float somaIdadeEx = 0, quantidadeRegular = 0, totalBom = 0, quantidadePessoas, quantidadePessoasEx;

    printf("Quantas pessoas vao participar da entrevista: ");
    scanf("%f", &quantidadePessoas);
    system("cls");

    for (int i = 0; i < quantidadePessoas; i++)
    {
        printf("Digite a idade da %d° pessoa: ", i + 1);
        scanf("%d", &idade);
        printf("Digite a nota:\nExcelente - 3\nBom - 2\nRegular - 1\n");
        scanf("%d", &notaFilme);
        system("cls");

        switch (notaFilme)
        {
        case 1:
            quantidadeRegular++;
            break;

        case 2:
            totalBom++;
            break;

        case 3:
            quantidadePessoasEx++;
            somaIdadeEx = somaIdadeEx + idade;
            break;

        default:
            valorInvalido++;
            break;
        }
    }

    if (valorInvalido == 0)
    {
        somaIdadeEx = somaIdadeEx / quantidadePessoasEx;
        totalBom = (totalBom / quantidadePessoas) * 100;
        printf("A media das idades que responderam excelente: %.2f\n", somaIdadeEx);
        printf("Quantidade de pessoas que responderam regular: %.2f\n", quantidadeRegular);
        printf("Quantidade de pessoas que responderam bom de acordo com os demais: %.2f porcento", totalBom);
    }
    else
    {
        printf("Valores invalidos!");
    }

    return 0;
}