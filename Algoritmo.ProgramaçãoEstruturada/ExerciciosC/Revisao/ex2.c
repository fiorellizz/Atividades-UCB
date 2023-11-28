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

    for (int i = 0; i < 1; i++)
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
        
        for (int i = 0; i < 1; i++)
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