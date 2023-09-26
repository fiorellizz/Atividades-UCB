//Faça um programa que leia um número e imprima uma das mensagens: "Maior do que 20", "Igual a 20"ou "Menor do que 20".

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");

    float numero;
    
    printf("Digite um numero: ");
    scanf("%f", &numero);
    
    if(numero < 20){
        printf("Menor do que 20!");
    } else if(numero == 20){
        printf("Igual a 20!");
    } else {
        printf("Maior do que 20!");
    }
    return 0;
}