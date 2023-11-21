/*Construa um programa que permita armazenar o salário de 20 pessoas. Calcular e armazenar o novo salário sabendo-se que o reajuste foi de 8%. Imprimir uma listagem numerada com o salário e o novo salário. Declare quantos vetores forem necessários.*/

#include <stdio.h>

int main(){

    float salario[20];

    for (int i = 0; i < 20; i++)
    {
        printf("Digite o %d salario: ", i + 1);
        scanf("%f", &salario[i]);
    }

    for (int i = 0; i < 20; i++)
    {
        printf("%d\t|\t%.2f\n", i + 1, salario[i] += salario[i] * 0.08);
    }
    
    return 0;
}