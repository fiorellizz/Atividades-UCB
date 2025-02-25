//Faça um programa que leia um número e informe se ele é ou não divisível por 5.

#include <stdio.h>
#include <locale.h>

int main(){
        setlocale(LC_ALL,"Portuguese");
        int numero;

        printf("Digite um número: ");
        scanf("%d", &numero);

        if(numero % 5 ==0){
        printf("É divisível por 5");
        } else {
        printf("Não é divisível por 5");
        }
        return 0;
}