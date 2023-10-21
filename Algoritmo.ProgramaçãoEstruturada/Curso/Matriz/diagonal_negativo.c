#include <stdio.h>

int main(){

    int tamanho, negativos = 0;

    printf("Digite o tamanho da matriz quadrada: ");
    scanf("%d", &tamanho);

    int matriz[tamanho][tamanho];

    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            printf("Elemento [%d, %d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            if (i == j)
            {
                printf("%d ", matriz[i][j]);
            }
            if (matriz[i][j] < 0)
            {
                negativos++;
            }
            
        }
        
    }
    
    printf("\nQuantidade de negativos: %d", negativos);

    return 0;    
}