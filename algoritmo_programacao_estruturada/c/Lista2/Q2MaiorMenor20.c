//Faça um programa em C que leia dois valores inteiros e efetue a adição. Caso o valor somado seja maior que 20, este deverá ser apresentado somando-se a ele mais 8, caso o valor somado seja menor ou igual a 20, este deverá ser apresentado subtraindo-se 5.

#include <stdio.h>
#include <locale.h>

int main(){
        setlocale(LC_ALL,"Portuguese");
        int numero1, numero2, resultado;

        printf("Digite o primeiro número: ");
        scanf("%d", &numero1);

        printf("Digite o segundo número: ");
        scanf("%d", &numero2);

        resultado = numero1 + numero2;

        if(resultado > 20){
        resultado = resultado + 8;
        printf("O resultado da adição +8 é igual a %d", resultado);
        } else{
        resultado = resultado - 5;
        printf("O resultado da adição -5 é igual a %d", resultado);
        }
        return 0;
}