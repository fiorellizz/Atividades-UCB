//Depois da liberação do governo para as mensalidades dos planos de saúde, as pessoas começaram a fazer pesquisas para descobrir um bom plano, não muito caro. Um vendedor de um plano de saúde apresentou a tabela a seguir. Faça um programa que entre com o nome e a idade de uma pessoa e imprima o nome e o valor que ela deverá pagar.

// Até 10 nos - R$30,00
// Acima de 10 até 29 anos - R$60,00
// Acima de 29 até 45 anos - R$120,00
// Acima de 45 até 59 anos - R$150,00
// Acima de 59 até 65 anos - R$250,00
// Maior de 65 anos - R$400,00

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int idade;

    printf("Digite a idade da pessoa: ");
    scanf("%d", &idade);

    if(idade < 10){
        printf("O valor do plano de saúde será de R$30,00");
    } else if(idade > 10 && idade <= 29){
        printf("O valor do plano de saúde será de R$60,00");
    } else if(idade > 29 && idade <= 45){
        printf("O valor do plano de saúde será de R$120,00");
    } else if(idade > 45 && idade <= 59){
        printf("O valor do plano de saúde será de R$150,00");
    } else if(idade > 59 && idade <= 65){
        printf("O valor do plano de saúde será de R$250,00");
    } else {
        printf("O valor do plano de saúde será de R$400,00");
    }

    return 0;
}