// Faça um programa em C que permita entrar com o nome, a idade e o sexo de 20 pessoas. O programa deve imprimir o nome da pessoa se ela for do sexo masculino e tiver mais de 21 anos.

#include <stdio.h>

int main()
{

    char nome[50];
    int idade, sexo;

    for (int i = 0; i < 5; i++)
    {
        printf("Pessoa %d\n", i + 1);

        printf("Digite o nome da pessoa: ");
        scanf("%s", &nome);

        printf("Digite a idade da pessoa: ");
        scanf("%d", &idade);

        printf("Digite o sexo da pessoa :\n1 - MASCULINO\n2 - FEMININO\n");
        scanf("%d", &sexo);

        if (idade >= 21 && sexo == 1)
        {
            printf("%s tem mais de 21 anos e é do sexo MASCULINO\n", nome);
        }
    }

    return 0;
}