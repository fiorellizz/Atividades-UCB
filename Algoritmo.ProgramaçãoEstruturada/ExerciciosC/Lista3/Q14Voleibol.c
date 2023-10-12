/*Em um campeonato internacional de Voleibol, se inscreveram 30 países. Sabendo-se que na lista oficial de cada país consta, além de outros dados, peso e idade de 12 jogadores, crie um programa que apresente as seguintes informações:

• O peso médio e a idade média de cada um dos times;
• O atleta mais pesado de cada time;
• O atleta mais jovem de cada time;
• O peso médio e a idade média de todos os participantes.*/

#include <stdio.h>

int main(){

    float peso, idade, pesoMedioTime = 0, idadeMediaTime = 0, pesado = 0, jovem, pesoMedioTotal, idadeMediaTotal;
    int i, j, count = 12;

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < count; j++)
        {
            printf("Digite o peso do %d° jogador: ", j + 1);
            scanf("%f", &peso);
            printf("Digite a idade do %d° jogador: ", j + 1);
            scanf("%f", &idade);
            pesoMedioTime = pesoMedioTime + peso;
            idadeMediaTime = idadeMediaTime + idade;

            if (peso > pesado)
            {
                pesado = peso;
            }
            
            
        }
        
        
        
    }
    
}