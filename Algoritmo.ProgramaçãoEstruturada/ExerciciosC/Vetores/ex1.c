/*Faça um programa em C que armazene 15 números inteiros em um vetor e depois permita que o usuário digite um número inteiro para ser buscado no vetor, se for encontrado o programa deve imprimir a posição desse número no vetor, caso contrário, deve imprimir a mensagem: "Não encontrado!".*/

#include <stdio.h>

int main()
{

    int numeros[15], num, encontrado = 0, count = 15;

    for (int i = 0; i < count; i++)
    {
        printf("Digite um número: ");
        scanf("%d", &numeros[i]);
    }

    printf("Digite o número que deseja procurar: ");
    scanf("%d", &num);

    for (int i = 0; i < count; i++)
    {
        if (numeros[i] == num)
        {
            printf("O número está na posição %d°", i);
            encontrado++;
            break;
        }
    }
    if (encontrado == 0)
    {
        printf("Não encontrado!");
    }

    return 0;
}