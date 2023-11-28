#include <stdio.h>

int main(){
    int linha = 2, coluna = 3;
    int matriz[linha][coluna];

    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < coluna; i++)
    {
        for (int j = 0; j < linha; j++)
        {
            printf("%d", matriz[j][i]);
        }
        printf("\n");
    }
    
    return 0;
}