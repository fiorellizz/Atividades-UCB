/*Um clube social com 37 associados deseja que você faça um programa para armazenar os dados cadastrais desses associados. Os dados são: nome, dia, mês e ano de nascimento, valor da mensalidade e quantidade de dependentes. O programa deverá ler os dados e imprimir depois na tela. Deverá também informar o associado (ou os associados) com o maior número de dependentes.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct associados
{
    char nome[30];
    int dia, mes, ano, dependentes;
    float mensalidade;
};

typedef struct associados FIORELLI;

int main()
{

    FIORELLI associados[37];
    int maioresDependentes = 0;

    for (int i = 0; i < 37; i++)
    {
        printf("Digite o nome do %d° associado: ", i + 1);
        fflush(stdin);
        fgets(associados[i].nome, sizeof(associados[i].nome), stdin);

        printf("Informe dia do %d° associado: ", i + 1);
        fflush(stdin);
        scanf("%d", &associados[i].dia);

        printf("Informe mes do %d° associado: ", i + 1);
        fflush(stdin);
        scanf("%d", &associados[i].mes);

        printf("Informe ano do %d° associado: ", i + 1);
        fflush(stdin);
        scanf("%d", &associados[i].ano);

        printf("Informe mensalidade do %d° associado: ", i + 1);
        fflush(stdin);
        scanf("%f", &associados[i].mensalidade);

        printf("Informe quantidade de dependentes do %d° associado: ", i + 1);
        fflush(stdin);
        scanf("%d", &associados[i].dependentes);

        if (associados[i].dependentes > maioresDependentes)
        {
            maioresDependentes = associados[i].dependentes;
        }
        printf("\n");
    }
        
        printf("O associados com mais dependentes tem : %d\n", maioresDependentes);
    
    return 0;
}