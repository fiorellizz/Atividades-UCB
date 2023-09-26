//Faça um programa em C que leia um número e indique se o número está compreendido entre 20 e 50 ou não.

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");

    float numero;

    printf("Digite um numero: ");
    scanf("%f", &numero);

    if(numero >= 20 && numero <= 50){
        printf("O numero esta entre 20 e 50!");
    } else {
        printf("O numero nao esta entre 20 e 50!");
    }
    
    return 0;
}