//Faça um programa em C que leia um número e informe se ele é divisível por 3 e por 7.

#include <stdio.h>
#include <locale.h>

int main(){
        setlocale(LC_ALL,"Portuguese");
        int numero;

        printf("Digite um número: ");
        scanf("%d", &numero);

        if(numero % 3 == 0 && numero % 7 == 0){
        printf("É divisível por 3 e por 7");
        } else {
        printf("Não é divisível por 3 e por 7");
        }
        return 0;
}