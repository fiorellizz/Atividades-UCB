/*Faça um programa que permita entrar com valores em uma matriz A de tamanho 3 X 4. Gerar e imprimir uma matriz B que é o triplo da matriz A.*/

#include <stdio.h>

int main(){

    int A[3][4];
    int B[3][4];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Informe o numero %d da linha %d: ", j+1, i+1);
            scanf("%d", &A[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            B[i][j] = A[i][j] * 3;
        }
    }
    
    printf("A ");
    for (int i = 0; i < 4; i++)
    {
        printf("COL %d\t", i + 1);
    }
    printf("\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }
    

    printf("\n\n");
    
    printf("B ");
    for (int i = 0; i < 4; i++)
    {
        printf("COL %d\t", i + 1);
    }
    printf("\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d\t", B[i][j]);
        }
        printf("\n");
    }

    return 0;
}