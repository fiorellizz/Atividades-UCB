//Faça um programa que leia um número e imprima uma das duas mensagens: "É múltiplo de 3"ou "Não é múltiplo de 3".

#include <stdio.h>
#include <locale.h>

int main(){
        setlocale(LC_ALL,"Portuguese");
        int numero;

        printf("Digite um número: ");
        scanf("%d", &numero);

        if(numero % 3 == 0){
        printf("É múltiplo de 3");
        } else {
        printf("Não é múltiplo de 3");
        }
        return 0;
}