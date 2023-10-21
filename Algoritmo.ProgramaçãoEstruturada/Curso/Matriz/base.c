#include <stdio.h>

int matriz[5][5], linha, coluna;

void ColetarElementos()
{
    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            printf("Elemento [%d, %d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void EscreverElementos()
{
    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main()
{

    printf("Quantas linhas vai ter a matriz? ");
    scanf("%d", &linha);

    printf("Quantas colunas vai ter a matriz? ");
    scanf("%d", &coluna);

    ColetarElementos();
    EscreverElementos();

    return 0;
}