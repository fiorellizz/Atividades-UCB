//Faça um programa em C que calcule o valor de uma prestação em atraso. Para isso, o programa deve ler o valor da prestação vencida, a taxa periódica de juros e o período de atraso. Ao final, o programa deve imprimir o valor da prestação atrasada, o período de atraso, os juros que serão cobrados pelo período de atraso, o valor da prestação acrescido dos juros. Considere juros simples. 
//A fórmula do juro simples é J = C ∙ i ∙ t, em que J é o juro, C é o capital, i é a taxa de juro e t é o tempo.

#include <stdio.h>

int main(){

        float prestacao, taxaJuros, tempo, juros, prestacaoJuros;

        printf("Digite o valor da prestação: ");
        scanf("%f", &prestacao);

        printf("Digite o valor da taxa de juros que será cobrada: ");
        scanf("%f", &taxaJuros);

        printf("Digite o tempo que será usado para calcular o juros: ");
        scanf("%f", &tempo);

        juros = prestacao * taxaJuros * tempo;

        prestacaoJuros = prestacao + juros;

        printf("O valor da prestação atrasada: %.2f \nPeriodo de atraso: %.2f \nO valor de juros da prestação: %.2f \nO valor da prestação com juros: %.2f", prestacao, tempo, juros, prestacaoJuros);

        return 0;

}