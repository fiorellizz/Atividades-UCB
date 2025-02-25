/*Faça um programa em c que solicite dois operandos e o tipo de operação aritmética que desejar, conforme opções abaixo:
1 - Soma
2 - Subtração
3 - Multiplicação
4 - Divisão
5 - Exponenciação

Caso o usuário selecione a opção 4 (divisão), verificar se o denominador é diferente de zero. Na exponenciação, utilizar a função pow(base, expoente) em #include<math.h>. Caso o usuário digitar uma opção inválida emitir mensagem.*/

#include <stdio.h>
#include <math.h>

int main()
{

    float numero1, numero2, resultado;
    int seletor;

    printf("Digite o primeiro número: ");
    scanf("%f", &numero1);

    printf("Digite o segundo número: ");
    scanf("%f", &numero2);

    printf("Escolha qual operação deseja fazer:\n1 - Soma\n2 - Subtração\n3 - Multiplicação\n4 - Divisão\n5 - Exponenciação\n");
    scanf("%d", &seletor);

    switch (seletor)
    {
    case 1:
        resultado = numero1 + numero2;
        printf("Resultado da operação = %.2f", resultado);
        break;

    case 2:
        resultado = numero1 - numero2;
        printf("Resultado da operação = %.2f", resultado);
        break;

    case 3:
        resultado = numero1 * numero2;
        printf("Resultado da operação = %.2f", resultado);
        break;

    case 4:
        if (numero2 != 0)
        {
            resultado = numero1 / numero2;
            printf("Resultado da operação = %.2f", resultado);
        }
        else
        {
            printf("O denominador é igual a zero!");
        }
        break;

    case 5:
        resultado = pow(numero1, numero2);
        printf("Resultado da operação = %.2f", resultado);
        break;

    default:
        printf("Valor invalido!");
        break;
    }

    return 0;
}