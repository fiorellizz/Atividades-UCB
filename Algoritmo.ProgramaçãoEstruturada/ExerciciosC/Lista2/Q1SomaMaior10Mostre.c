//Faça um programa em C que leia dois valores numéricos inteiros e efetue a adição, caso o resultado seja maior que 10, apresentá-lo.

#include <stdio.h>
#include <locale.h>

int main(){
        setlocale(LC_ALL,"Portuguese");
        float numero1, numero2, resultado;

        printf("Digite o primeiro número: ");
        scanf("%f", &numero1);

        printf("Digite o segundo número: ");
        scanf("%f", &numero2);

        resultado = numero1 + numero2;

        if(resultado < 10){
        printf("O resultado da adição é menor que 10");
        } else {
        printf("O resultado da adição é %.2f",resultado);
        }
        return 0;
}