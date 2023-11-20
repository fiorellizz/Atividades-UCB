/*Crie uma estrutura representando um atleta. Essa estrutura deve conter o nome do atleta, seu esporte, idade e altura. Agora, escreva um programa que leia os dados de cinco atletas. Calcule e exiba os nomes do atleta mais alto e do mais velho.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct atletas
{
    int idade;
    char nome[30], esporte[50];
    float altura;
};

typedef struct atletas FIORELLI;

int main()
{

    FIORELLI atletas[5];
    int velho = 0, z, x;
    float alto = 0;

    for (int i = 0; i < 3; i++)
    {
        printf("Digite o nome do %d° atleta: ", i + 1);
        fflush(stdin);
        fgets(atletas[i].nome, sizeof(atletas[i].nome), stdin);

        printf("Digite o esporte do %d° atleta: ", i + 1);
        fflush(stdin);
        fgets(atletas[i].esporte, sizeof(atletas[i].esporte), stdin);

        printf("Informe idade do %d° atleta: ", i + 1);
        fflush(stdin);
        scanf("%d", &atletas[i].idade);

        printf("Informe altura do %d° atleta: ", i + 1);
        fflush(stdin);
        scanf("%f", &atletas[i].altura);

        if (atletas[i].idade > velho)
        {
            z = i;
        } else {

        }
        if (atletas[i].altura > alto)
        {
            x = i;
        } else {

        }
        printf("\n");
    }

    printf("\n");
    printf("O atleta com maior altura: %s, com %.2f de altura\n", atletas[x].nome, atletas[x].altura);
    printf("O atleta com maior idade: %s, com %d de idade\n", atletas[z].nome, atletas[z].idade);
    
    return 0;
}