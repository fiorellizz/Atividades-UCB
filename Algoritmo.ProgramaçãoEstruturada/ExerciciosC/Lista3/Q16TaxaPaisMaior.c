/*Dado um país A, com 5 milhões de habitantes e uma taxa de natalidade de 3% ao ano, e um país B com 7 milhões de habitantes e uma taxa de natalidade de 2% ao ano, fazer um programa que calcule e imprima o tempo necessário para que a população do país A ultrapasse a população do país B.*/

#include <stdio.h>

int main()
{

    int ano = 0, paisA = 5000000, paisB = 7000000;

    while (paisA <= paisB)
    {
        paisA = paisA + 150000;
        paisB = paisB + 140000;
        ano++;
        printf("Pais A = %d\tPais B = %d\tAno = %d\n", paisA, paisB, ano);
    }
    printf("Será preciso de %d ano para Pais A passar o Pais B", ano);

    return 0;
}