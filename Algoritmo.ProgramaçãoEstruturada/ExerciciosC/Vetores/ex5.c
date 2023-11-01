/*Faça um programa que armazene as notas das provas 1 e 2 de 15 alunos. Calcule e armazene a média arredondada. Armazene também a situação do aluno: 1- Aprovado ou 2-Reprovado. Ao final o programa deve imprimir uma listagem contendo as notas, a média e a situação de cada aluno em formato tabulado. Utilize quantos vetores forem necessários para armazenar os dados.*/

#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>
#include <conio.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
    int alunos, situacao;
    
    printf("Quantos alunos você vai calcular a média: ");
    scanf("%d", &alunos);
	
	float provas1[alunos], provas2[alunos], media[alunos];
	char nome[alunos][50];
	
	for(int i = 0; i < alunos; i++)
	{
		printf("Digite o nome do %d° aluno: ", i + 1);
        scanf("%s", nome[i]);

        printf("Digite a nota da prova 1 do aluno: ");
        scanf("%f", &provas1[i]);

        printf("Digite a nota da prova 2 do aluno: ");
        scanf("%f", &provas2[i]);
        
	}
	
	for(int i = 0; i < alunos; i++)
    {
        media[i] = (provas1[i] + provas2[i]) / 2;
	}

    for (int i = 0; i < alunos; i++)
    {
        printf("Média do(a) aluno(a) %s foi de %.0f\n", nome[i], media[i]);
    }
    
	return 0;
}