//O GDF abriu uma linha de crédito para os funcionários estatutários. O valor máximo da prestação não poderá ultrapassar 30% do salário bruto. Faça um programa em linguagem C que permita entrar com o salário bruto e o valor da prestação e informar se o empréstimo pode ou não ser concedido.

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    
    float salario, emprestimo, emprestimoMaximo;

    printf("Digite o valor do salario: ");
    scanf("%f", &salario);

    printf("Digite o valor do emprestimo que deseja: ");
    scanf("%f", &emprestimo);

    emprestimoMaximo = salario * 0.3;

    if(emprestimoMaximo >= emprestimo){
        printf("Seu emprestimo sera concedido!");
    } else {
        printf("Seu emprestimo nao sera concedido!");
    }

    return 0;
}