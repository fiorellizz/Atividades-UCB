//Faça um programa em C que leia o nome o endereço e o telefone de um cliente e ao final, imprima esses dados.

#include <stdio.h>

int main() {
        char nome[100];
        char endereco[200];
        char telefone[20];

        printf("Digite o nome do cliente: ");
        gets(nome);

        printf("Digite o endereço do cliente: ");
        gets(endereco);

        printf("Digite o telefone do cliente: ");
        gets(telefone);

        printf("\nDados do cliente:\n");
        printf("Nome: %s\n", nome);
        printf("Endereço: %s\n", endereco);
        printf("Telefone: %s\n", telefone);

        return 0;
}