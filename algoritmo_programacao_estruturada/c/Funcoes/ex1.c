/*Faça um programa em C que leia três números e, para cada um, imprimir o dobro. O cálculo deverá ser realizado por uma função e o resultado impresso ao final do programa.*/

#include <stdio.h>

float calcularDobro(float numeros){
    float calcDobro;

    calcDobro = numeros * 2;

    return calcDobro;
}

int main(){
    
    int total = 3;
    float numeros[total], dobro[total];

    for (int i = 0; i < total; i++)
    {
        printf("Digite o %d° número: ", i + 1);
        scanf("%f", &numeros[i]);
    }
    
    for (int i = 0; i < total; i++)
    {
        dobro[i] = calcularDobro(numeros[i]);
    }
    
    for (int i = 0; i < total; i++)
    {
        printf("O dobro do %d° número é: %.2f\n", i + 1, dobro[i]);
    }
    
    return 0;
}