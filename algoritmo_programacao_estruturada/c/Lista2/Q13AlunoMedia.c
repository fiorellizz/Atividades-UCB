//Faça um programa que permita entrar com o nome, a nota da prova 1 e a nota da prova 2 de um aluno. O programa deve imprimir o nome, a nota da prova 1, a nota da prova 2, a média das notas e uma das mensagens: "Aprovado", "Reprovado" ou "em Prova Final"(a média é 7 para aprovação, menor que 3 para reprovação e as demais em prova final).

#include <stdio.h>
#include <locale.h>

int main(){
    char nome[50];
    float nota1, nota2, media;

    printf("Digite o nome do aluno: ");
    gets(nome);

    printf("Digite a nota da prova1 e a nota da prova2 do aluno: \n");
    scanf("%f %f", &nota1, &nota2);

    media = (nota1 + nota2) / 2;

    if(media <= 3){
        printf("O aluno %s com as notas %.2f, %.2f ficou com media %.2f foi REPROVADO!", nome, nota1, nota2, media);
    } else if(media > 3 && media < 7){
        printf("O aluno %s com as notas %.2f, %.2f ficou com media %.2f ficou em PROVA FINAL", nome, nota1, nota2, media);
    } else {
        printf("O aluno %s com as notas %.2f, %.2f ficou com media %.2f foi APROVADO", nome, nota1, nota2, media);
    }
    
    return 0;
}