/*Em um campeonato internacional de Voleibol, se inscreveram 30 países. Sabendo-se que na lista oficial de cada país consta, além de outros dados, peso e idade de 12 jogadores, crie um programa que apresente as seguintes informações:

• O peso médio e a idade média de cada um dos times;
• O atleta mais pesado de cada time;
• O atleta mais jovem de cada time;
• O peso médio e a idade média de todos os participantes.*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int jogadores = 12, times = 30;
float peso[12], idade[12], pesado = 0, jovem = 200, pesoMedioTime = 0, idadeMediaTime = 0, pesoTotal = 0, idadeTotal = 0;

void ColetarIdadesPeso()
{
    for (int i = 0; i < jogadores; i++) // coletar idades e peso de cada time
    {
        printf("Digite o peso do %d° jogador: ", i + 1);
        scanf("%f", &peso[i]);
        printf("Digite a idade do %d° jogador: ", i + 1);
        scanf("%f", &idade[i]);
        pesoMedioTime += peso[i];
        idadeMediaTime += idade[i];
        pesoTotal += peso[i];
        idadeTotal += idade[i];
    }
}

void Pesado(){
    for (int i = 0; i < jogadores; i++) // passar por todos os vetores e pegar o maior peso
        {
            if (peso[i] > pesado)
            {
                pesado = peso[i];
            }
        }
}

void Novo(){
    for (int i = 0; i < jogadores; i++) // passar por todos os vetores e pegar a menor idade
        {
            if (idade[i] < jovem)
            {
                jovem = idade[i];
            }
        }
}

void ZerarDados(){
    for (int i = 0; i < jogadores; i++) // zerando os dados para usar para outros jogadores
        {
            peso[i] = 0;
            idade[i] = 0;
        }
        pesado = 0;
        jovem = 200;
        pesoMedioTime = 0;
        idadeMediaTime = 0;
}

void TodosTimes(){
    for (int i = 0; i < times; i++) // rodar para os 30 times
    {
        printf("DIGITE OS DADOS DO %d° TIME\n", i + 1);
        ColetarIdadesPeso();
        Pesado();
        Novo();
        pesoMedioTime /= jogadores;
        idadeMediaTime /= jogadores;
        system("cls");
        printf("RELATORIO DO %d° TIME\n", i + 1);
        printf("A média de peso do time é de: %.2f kilos\n", pesoMedioTime);
        printf("A média de idade do time é de: %.1f anos\n", idadeMediaTime);
        printf("O atleta mais pesado do time tem: %.2f kilos\n", pesado);
        printf("O atleta mais novo do time tem: %.0f anos\n", jovem);
        ZerarDados();
        printf("Digite qualquer tecla para continuar...");
        getch();
        system("cls");
    }
}

int main()
{
    system("cls");
    TodosTimes();
    /*peso e idade media total*/
    pesoTotal = pesoTotal / (jogadores * times);
    idadeTotal = idadeTotal / (jogadores * times);
    printf("RELATORIO FINAL\n");
    printf("O peso médio de todos os atletas envolvidos é de: %.2f kilos\n", pesoTotal);
    printf("A idade média de todos os atletas envolvidos é de: %.0f anos", pesoTotal);

    return 0;
}