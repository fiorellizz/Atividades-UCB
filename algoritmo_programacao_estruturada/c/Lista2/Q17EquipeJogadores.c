/*Em um campeonato nacional de arco-e-flecha, tem-se equipes de três jogadores para cada estado. Sabendo-se que os arqueiros de uma equipe não obtiveram o mesmo número de pontos, criar um programa em C que informe se uma equipe foi classificada, de acordo com a seguinte especificação:

• Ler os pontos obtidos por cada jogador da equipe;

• Mostrar esses valores em ordem decrescente;

• Se a soma dos pontos for maior do que 100, imprimir a média aritmética entre eles, caso contrário, imprimir a mensagem "Equipe desclassificada".

*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    float jogador1, jogador2, jogador3, somapontos;

    printf("Digite a pontuação de cada jogador da equipe: \n");
    scanf("%f %f %f", &jogador1, &jogador2, &jogador3);

    if (jogador1 < jogador2 && jogador2 < jogador3){
        printf("Ordem decrescente da pontução: %.2f, %.2f, %.2f\n", jogador3, jogador2, jogador1);
    } else if(jogador1 < jogador2 && jogador2 > jogador3 && jogador1 < jogador3){
        printf("Ordem decrescente da pontução: %.2f, %.2f, %.2f\n", jogador2, jogador3, jogador1);
    } else if(jogador1 > jogador2 && jogador1 < jogador3){
        printf("Ordem decrescente da pontução: %.2f, %.2f, %.2f\n", jogador3, jogador1, jogador2);
    } else if(jogador1 < jogador2 && jogador1 > jogador3 && jogador2 > jogador3){
        printf("Ordem decrescente da pontução: %.2f, %.2f, %.2f\n", jogador2, jogador1, jogador3);
    } else if(jogador1 > jogador2 && jogador2 < jogador3){
        printf("Ordem decrescente da pontução: %.2f, %.2f, %.2f\n", jogador1, jogador3, jogador2);
    } else if(jogador1 > jogador2 && jogador2 > jogador3){
        printf("Ordem decrescente da pontução: %.2f, %.2f, %.2f\n", jogador1, jogador2, jogador3);
    } else{
        printf("Valores inválidos!");
    }

    somapontos = jogador1 + jogador2 + jogador3;

    if (somapontos >= 100){
        printf("A média aritimetica da pontuação da equipe foi %.2f", somapontos);
    } else {
        printf("Equipe desclassificada!");
    }

    return 0;
}
