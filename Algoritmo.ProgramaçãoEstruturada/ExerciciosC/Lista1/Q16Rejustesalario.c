//Faça um programa em C que calcule o reajuste do salário de um funcionário. Para isso, o programa deverá ler o salário atual do funcionário e ler o percentual de reajuste. Ao final imprimir o valor do novo salário.

#include <stdio.h>

int main()
{
        float salario, salariofinal, reajuste;

        printf("Digite o salário inicial: ");
        scanf("%f", &salario);
        printf("Digite o reajuste em porcentagem: ");
        scanf("%f", &reajuste);
        salariofinal = salario + (salario * (reajuste / 100));
        printf("O salário com reajuste será de %.2f", salariofinal);

        return 0;
}