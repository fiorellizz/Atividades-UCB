//Faça um programa em C que permita entrar com o ano de nascimento da pessoa e com o ano atual. O programa deve imprimir a idade da pessoa. Não se esqueça de verificar se o ano de nascimento informado é válido.

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int anoNascimento, anoAtual, idade;

    printf("Digite o ano de nascimento: ");
    scanf("%d", &anoNascimento);
    
    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);

    if(anoNascimento <= anoAtual){
        idade = anoAtual - anoNascimento;
        printf("Idade igual a %d", idade);
    } else {
        printf("Ano de nascimento invalido!");
    }
    return 0;
}