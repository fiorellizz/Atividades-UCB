#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>

int main(){

    float valorCarro;

    printf("Digite o valor do carro: ");
    scanf("%f", &valorCarro);

    printf("PARCELAS\t|\tVALOR TOTAL\t|\t%% DE ACRESCIMO\t|\tVALOR DA PARCELA\n");
    printf("A VISTA\t\t|\tR$%.2f\t|\t0\t\t|\tR$%.2f\n", valorCarro - valorCarro * 0.2, valorCarro - valorCarro * 0.2);
    printf("6\t\t|\tR$%.2f\t|\t3%%\t\t|\tR$%.2f\n", valorCarro + valorCarro * 0.03, (valorCarro + valorCarro * 0.3) / 6);
    printf("12\t\t|\tR$%.2f\t|\t6%%\t\t|\tR$%.2f\n", valorCarro + valorCarro * 0.06, (valorCarro + valorCarro * 0.6) / 12);
    printf("18\t\t|\tR$%.2f\t|\t9%%\t\t|\tR$%.2f\n", valorCarro + valorCarro * 0.09, (valorCarro + valorCarro * 0.9) / 18);
    printf("24\t\t|\tR$%.2f\t|\t12%%\t\t|\tR$%.2f\n", valorCarro + valorCarro * 0.12, (valorCarro + valorCarro * 0.12) / 24);
    printf("30\t\t|\tR$%.2f\t|\t15%%\t\t|\tR$%.2f\n", valorCarro + valorCarro * 0.15, (valorCarro + valorCarro * 0.15) / 30);
    printf("36\t\t|\tR$%.2f\t|\t18%%\t\t|\tR$%.2f\n", valorCarro + valorCarro * 0.18, (valorCarro + valorCarro * 0.18) / 36);
    printf("42\t\t|\tR$%.2f\t|\t21%%\t\t|\tR$%.2f\n", valorCarro + valorCarro * 0.21, (valorCarro + valorCarro * 0.21) / 42);
    printf("48\t\t|\tR$%.2f\t|\t24%%\t\t|\tR$%.2f\n", valorCarro + valorCarro * 0.24, (valorCarro + valorCarro * 0.24) / 48);
    printf("54\t\t|\tR$%.2f\t|\t27%%\t\t|\tR$%.2f\n", valorCarro + valorCarro * 0.27, (valorCarro + valorCarro * 0.27) / 54);
    printf("60\t\t|\tR$%.2f\t|\t30%%\t\t|\tR$%.2f\n", valorCarro + valorCarro * 0.30, (valorCarro + valorCarro * 0.30) / 60);

    return 0;
}