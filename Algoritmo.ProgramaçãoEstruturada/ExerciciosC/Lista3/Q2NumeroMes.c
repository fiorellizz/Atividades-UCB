/*Faça um programa que leia um número inteiro entre 1 e 12 e escreva o mês correspondente. Caso o usuário digite um número fora desse intervalo, deverá aparecer uma mensagem informando que não existe mês com este número.
*/

#include<stdio.h>
#include<locale.h>
#include<conio.h>
#include<ctype.h>


int main(){
        setlocale(LC_ALL, "Portuguese");

        int seletor;

        printf("Digite o número que deseja saber o mês correspondente: ");
        scanf("%d", &seletor);

        switch(seletor){
        case 1:
            printf("O mês correspondente a esse número é Janeiro");
            break;
        case 2:
            printf("O mês correspondente a esse número é Fevereiro");
            break;
        case 3:
            printf("O mês correspondente a esse número é Março");
            break;
        case 4:
            printf("O mês correspondente a esse número é Abril");
            break;
        case 5:
            printf("O mês correspondente a esse número é Maio");
            break;
        case 6:
            printf("O mês correspondente a esse número é Junho");
            break;
        case 7:
            printf("O mês correspondente a esse número é Julho");
            break;
        case 8:
            printf("O mês correspondente a esse número é Agosto");
            break;
        case 9:
            printf("O mês correspondente a esse número é Setembro");
            break;
        case 10:
            printf("O mês correspondente a esse número é Outubro");
            break;
        case 11:
            printf("O mês correspondente a esse número é Novembro");
            break;
        case 12:
            printf("O mês correspondente a esse número é Dezembro");
            break;
        default:
            printf("\nOPÇÃO INVÁLIDA!.");
            break;
        }
}