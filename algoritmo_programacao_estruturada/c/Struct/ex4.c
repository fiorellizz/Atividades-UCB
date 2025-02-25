/*Crie um programa com uma estrutura para simular uma agenda de telefone celular, com até 100 registros. Nessa agenda deve constar o nome, sobrenome, número de telefone móvel, número de telefone fixo e e-mail. O programa deverá fazer a leitura e, após isso, mostrar os dados na tela.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct agenda
{
    char nome[30], sobrenome[30], gmail[30];
    int movel, fixo;
};

typedef struct agenda FIORELLI;

int main()
{

    FIORELLI agenda[100];

    for (int i = 0; i < 100; i++)
    {
        printf("%d° nome: ", i + 1);
        fflush(stdin);
        fgets(agenda[i].nome, sizeof(agenda[i].nome), stdin);
        
        printf("%d° sobrenome: ", i + 1);
        fflush(stdin);
        fgets(agenda[i].sobrenome, sizeof(agenda[i].sobrenome), stdin);

        printf("%d° numero movel: ", i + 1);
        fflush(stdin);
        scanf("%d", &agenda[i].movel);

        printf("%d° numero fixo: ", i + 1);
        fflush(stdin);
        scanf("%d", &agenda[i].fixo);

        printf("%d° gmail: ", i + 1);
        fflush(stdin);
        fgets(agenda[i].gmail, sizeof(agenda[i].gmail), stdin);

        printf("\n");
    }
        
        for (int i = 0; i < 100; i++)
        {
            printf("%d° nome: %s", i + 1, agenda[i].nome);
        
            printf("%d° sobrenome: %s", i + 1, agenda[i].sobrenome);

            printf("%d° numero movel: %d", i + 1, agenda[i].movel);

            printf("\n%d° numero fixo: %d", i + 1, agenda[i].fixo);

            printf("\n%d° gmail: %s", i + 1, agenda[i].gmail);

            printf("\n");
        }
        
    
    return 0;
}