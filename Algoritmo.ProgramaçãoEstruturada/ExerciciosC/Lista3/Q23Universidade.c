/*Em uma universidade cada aluno possui os seguintes dados:

• Renda pessoal;
• Renda familiar;
• Total gasto com alimentação;
• Total gasto com outras despesas;

Faça um programa que imprima:
A porcentagem dos alunos que gasta acima de R$200,00 com outras despesas. 
O número de alunos com renda pessoal maior que a renda familiar. 
A porcentagem gasta com alimentação e outras despesas em relação às rendas pessoal e familiar.

Obs.: O programa encerra quando se digita 0 para a renda pessoal.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    float rendaPessoal, rendaFamiliar, gastosAlimentacao, gastosOutros, acima200 = 0, pessoalMaiorFamiliar = 0, totalAlunos = 0, somaRenda = 0, somaGastos = 0, ultima;

    printf("Digite a renda mensal do primeiro aluno: ");
    scanf("%f", &rendaPessoal);

    while (rendaPessoal != 0)
    {
        printf("Digite a renda familar do aluno: ");
        scanf("%f", &rendaFamiliar);

        printf("Digite o total gasto com alimentação: ");
        scanf("%f", &gastosAlimentacao);

        printf("Digite o total gasto com outras dispesas: ");
        scanf("%f", &gastosOutros);
        somaGastos = somaGastos + gastosAlimentacao + gastosOutros;
        somaRenda = somaRenda + rendaFamiliar + rendaPessoal;

        totalAlunos++;

        if (gastosOutros > 200)
        {
            acima200++;
        }

        if (rendaPessoal > rendaFamiliar)
        {
            pessoalMaiorFamiliar++;
        }

        printf("Dados armazenados.\n");
        printf("Digite qualquer tecla para continuar...");
        getch();
        system("cls");

        printf("Digite a renda mensal do proximo aluno: ");
        scanf("%f", &rendaPessoal);

    }

    acima200 = (acima200 / totalAlunos) * 100;
    printf("%.2f%% alunos gastam mais que R$200,00 com outras despesas.\n", acima200);
    printf("%.0f alunos tem renda pessoal maior que a renda familiar.\n", pessoalMaiorFamiliar);
    ultima = (somaGastos / somaRenda) * 100;
    printf("%.2f%% porcentagem gasta com alimentação e outras despesas em relação às rendas pessoal e familiar.", ultima);

    return 0;
}