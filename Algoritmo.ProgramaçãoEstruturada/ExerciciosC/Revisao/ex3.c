#include <stdio.h>

int main(){
    
    int ints[3], *trocaInt[3];
    float dec[3], *trocaDec[3];
    char let[3], *trocaLet[3];

    printf("Inteiros:\n");
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &ints[i]);
        trocaInt[i] = &ints[i];
    }
    
    printf("Decimais:\n");
    for (int i = 0; i < 3; i++)
    {
        scanf("%f", &dec[i]);
        trocaDec[i] = &dec[i];
    }
    
    printf("Letras:\n");
    for (int i = 0; i < 3; i++)
    {
        scanf(" %c", &let[i]);
        trocaLet[i] = &let[i];
    }
    
    for (int i = 0; i < 3; i++)
    {
        *trocaInt[i] = 2014;
    }
    for (int i = 0; i < 3; i++)
    {
        *trocaDec[i] = 9.99;
    }
    for (int i = 0; i < 3; i++)
    {
        *trocaLet[i] = 'Y';
    }
    
    printf("Inteiros:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", ints[i]);
    }
    printf("\n");
    printf("Decimais:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%.2f ", dec[i]);
    }
    printf("\n");
    printf("Letras:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%c ", let[i]);
    }
    
    return 0;
}