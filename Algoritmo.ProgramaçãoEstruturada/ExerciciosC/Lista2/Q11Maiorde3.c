//Faça um programa que leia 3 números e imprima o maior deles.

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int numero1, numero2, numero3;

    printf("Digite os 3 numeros que deseja saber o maior: \n");
    scanf("%d %d %d", &numero1, &numero2, &numero3);

    if (numero1 < numero2 && numero2 < numero3){
        printf("O maior número é %d", numero3);
    } else if(numero1 < numero2 && numero2 > numero3 && numero1 < numero3){
        printf("O maior número é %d", numero2);
    } else if(numero1 > numero2 && numero1 < numero3){
        printf("O maior número é %d", numero3);
    } else if(numero1 < numero2 && numero1 > numero3 && numero2 > numero3){
        printf("O maior número é %d", numero2);
    } else if(numero1 > numero2 && numero2 < numero3){
        printf("O maior número é %d", numero1);
    } else if(numero1 > numero2 && numero2 > numero3){
        printf("O maior número é %d", numero1);
    } else{
        printf("DEU MUITO RUIM");
    }
    return 0;
}