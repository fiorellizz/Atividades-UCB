//Faça um programa em C que leia três números inteiros e imprima os três em ordem crescente.

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int numero1, numero2, numero3;

    printf("Digite os 3 numeros que deseja colocar em ordem crescente: \n");
    scanf("%d %d %d", &numero1, &numero2, &numero3);

    if (numero1 < numero2 && numero2 < numero3){
        printf("Ordem cresente é %d, %d, %d", numero1, numero2, numero3);
    } else if(numero1 < numero2 && numero2 > numero3 && numero1 < numero3){
        printf("Ordem cresente é %d, %d, %d", numero1, numero3, numero2);
    } else if(numero1 > numero2 && numero1 < numero3){
        printf("Ordem cresente é %d, %d, %d", numero2, numero1, numero3);
    } else if(numero1 < numero2 && numero1 > numero3 && numero2 > numero3){
        printf("Ordem cresente é %d, %d, %d", numero3, numero1, numero2);
    } else if(numero1 > numero2 && numero2 < numero3){
        printf("Ordem cresente é %d, %d, %d", numero2, numero3, numero1);
    } else if(numero1 > numero2 && numero2 > numero3){
        printf("Ordem cresente é %d, %d, %d", numero3, numero2, numero1);
    } else{
        printf("DEU MUITO RUIM");
    }
    return 0;
}