//A confederação brasileira de natação irá promover eliminatórias para o próximo mundial. Faça um programa em C que receba a idade de um nadador e imprima a sua categoria segundo a tabela a seguir:

// INFANTIL A - 5 a 7 anos
// INFANTIL B - 8 a 10 anos
// JUVENIL A - 11 a 13 anos
// JUVENIL B - 14 a 17 anos
// SÊNIOR - MAIORES DE 18

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");

    int idade;

    printf("Digite a idade do nadador: ");
    scanf("%d", &idade);

    if(idade >= 5 && idade <= 7){
        printf("Nadador pertence a categoria INFANTIL A!");
    } else if(idade >= 8 && idade <= 10){
        printf("Nadador pertence a categoria INFANTIL B!");
    } else if(idade >= 11 && idade <= 13){
        printf("Nadador pertence a categoria JUVENIL A!");
    } else if(idade >= 14 && idade <= 17){
        printf("Nadador pertence a categoria JUVENIL B!");
    } else if(idade >= 18){
        printf("Nadador pertence a categoria SÊNIOR!");
    } else {
        printf("O atleta não pertence a nunhuma categoria!");
    }

    return 0;
}
