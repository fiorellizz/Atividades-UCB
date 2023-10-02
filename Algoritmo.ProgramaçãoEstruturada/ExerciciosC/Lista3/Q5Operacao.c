/*Faça um programa que receba dois números e execute as operações listadas a seguir de acordo com a escolha do usuário:
Se a opção digitada for inválida, mostrar uma mensagem de erro e terminar a execução do programa. */

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int codigo;
    float numero1, numero2, resultado;

    printf("Digite os 2 números:\n");
    scanf("%f %f", &numero1, &numero2);

    printf("Digite o que deseja fazer:\n1 - Média entre os números escolhidos\n2 - Diferença entre os números\n3 - Produto entre os números digitados\n4 - Divisão do primeiro pelo segundo\n");
    scanf("%d", &codigo);

    switch (codigo)
    {
    case 1:
        resultado = (numero1 + numero2) / 2;
        printf("Resultado da operação é %.2f", resultado);
        break;
    case 2:
        resultado = numero1 - numero2;
        printf("Resultado da operação é %.2f", resultado);
        break;
    case 3:
        resultado = numero1 * numero2;
        printf("Resultado da operação é %.2f", resultado);
        break;
    case 4:
        resultado = numero1 / numero2;
        printf("Resultado da operação é %.2f", resultado);
        break;
    default:
        printf("Error404");
        break;
    }

    return 0;
}