/*Escreva um programa em linguagem C que leia um peso na Terra e o número de um planeta e imprima o valor correspondente do peso neste planeta. A relação de planetas é dada a seguir juntamente com o valor das gravidades relativas à Terra.

Para calcular o peso no planeta use a fórmula:

PP = (PT/10) ×G

Em que:
• PP = Peso no planeta
• PT = Peso na Terra
• G = Gravidade relativa*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char seletor;
    float pesoTerra, pesoPlaneta, gravidade;

    printf("\nDigite qual planeta deseja saber o peso correspondente: \n1 - Mércurio\n2 - Vênus\n3 - Marte\n4 - Júpiter\n5 - Saturno\n6 - Urano\n");
    scanf("%c", &seletor);

    printf("Digite o peso correspondente na terra: ");
    scanf("%f", &pesoTerra);

    switch (seletor)
    {
    case 1:
        gravidade = 0.37;
        pesoPlaneta = (pesoTerra / 10) * gravidade;
        printf("O peso corresponde no planeta é %.2f", pesoPlaneta);
        break;
    case 2:
        gravidade = 0.88;
        pesoPlaneta = (pesoTerra / 10) * gravidade;
        printf("O peso corresponde no planeta é %.2f", pesoPlaneta);
        break;
    case 3:
        gravidade = 0.38;
        pesoPlaneta = (pesoTerra / 10) * gravidade;
        printf("O peso corresponde no planeta é %.2f", pesoPlaneta);
        break;
    case 4:
        gravidade = 2.64;
        pesoPlaneta = (pesoTerra / 10) * gravidade;
        printf("O peso corresponde no planeta é %.2f", pesoPlaneta);
        break;
    case 5:
        gravidade = 1.15;
        pesoPlaneta = (pesoTerra / 10) * gravidade;
        printf("O peso corresponde no planeta é %.2f", pesoPlaneta);
        break;
    case 6:
        gravidade = 1.17;
        pesoPlaneta = (pesoTerra / 10) * gravidade;
        printf("O peso corresponde no planeta é %.2f", pesoPlaneta);
        break;
    default:
        printf("\nOPÇÃO INVÁLIDA!.");
        break;
    }

    return 0;
}