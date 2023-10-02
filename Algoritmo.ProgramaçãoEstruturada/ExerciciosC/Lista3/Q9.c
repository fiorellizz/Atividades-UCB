//Faça um programa em C que permita entrar com o nome, a idade e o sexo de 20 pessoas. O programa deve imprimir o nome da pessoa se ela for do sexo masculino e tiver mais de 21 anos.

#include <stdio.h>
#include <ctype.h>

int main() {
    char nome[50];
    int idade;
    char sexo;

    for (int i = 0; i < 5; i++){  
        printf("Pessoa %d\n", i + 1);
        
        printf("Digite o nome da pessoa: ");
        gets(nome); 
        
        printf("Digite a idade da pessoa: ");
        scanf("%d", &idade);

        printf("Digite o sexo da pessoa (M/F): ");
        scanf("%c", &sexo); 

        sexo = toupper(sexo);

        if (idade >= 21 && sexo == 'M') {
            printf("%s tem mais de 21 anos e é do sexo M\n", nome);
        }
    }

    return 0;
}