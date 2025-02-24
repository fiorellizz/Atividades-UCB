#include <stdio.h>

int main(){

    float valores[15], *ponteiros[15];

    for (int i = 0; i < 15; i++)
    {
        scanf("%f", &valores[i]);
        ponteiros[i] = &valores[i];
    }
    
    for (int i = 0; i < 15; i++)
    {
        *ponteiros[i] = *ponteiros[i] + *ponteiros[i] * 0.0478;
    }
    
    for (int i = 0; i < 15; i++)
    {
        printf("%f ", valores[i]);
        printf("\n");
    }
    
    return 0;
}