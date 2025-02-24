/*A biblioteca de uma Universidade Católica de Brasília deseja fazer um programa que leia o nome do livro que será emprestado, o tipo de usuário (professor ou aluno) e possa imprimir um recibo conforme mostrado a seguir. Considerar que o professor tem dez dias para devolver o livro e o aluno só três dias.

• Nome do livro:
• Tipo de usuário:
• Total de dias:
*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");

    char nome[50];
    int usuario;

    printf("Digite o nome do livro que foi emprestado: ");
    gets(nome);

    printf("Digite quem pegou o livro: \n1 - ALUNO\n2 - PROFESSOR\n");
    scanf("%d", &usuario);

    if (usuario == 1)
    {
        printf("Nome do livro emprestado: %s\nTipo de usuario: ALUNO\nTotal de dias para devolução: 3 dias.", nome);
    } else if (usuario == 2)
    {
        printf("Nome do livro emprestado: %s\nTipo de usuario: PROFESSOR\nTotal de dias para devolução: 10 dias.", nome);
    } else 
    {
        printf("Dados inválidos!");
    }
    
    return 0;
}