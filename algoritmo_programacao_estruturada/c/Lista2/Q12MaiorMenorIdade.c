//Faça um programa que leia a idade de uma pessoa e informe:
//• Se é maior de idade
//• Se é menor de idade
//• Se é maior de 65 anos

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int idade;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    if(idade < 18){
        printf("Menor de idade!");
    } else if (idade >= 18 && idade <= 65){
        printf("Maior de idade!");
    } else {
        printf("Maior de 65 anos!");
    }

    return 0;
}