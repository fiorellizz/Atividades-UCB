//Faça um programa em C que calcule a quantidade de litros de combustível consumidos em uma viagem, sabendo-se que o carro tem autonomia de 14 km por litro de combustível. O programa deverá ler o tempo decorrido na viagem e a velocidade média e aplicar as fórmulas:

// D = T x V        L = D /12(coloquei 14 aqui, pois é a média por litro do carro!)

//D = Distância percorrida em horas
//T = Tempo decorrido
//V = Velocidade média
//L = Litros de combustível consumidos
//Ao final, o programa deverá imprimir a distância percorrida e a quantidade de litros consumidos na viagem.

#include <stdio.h>

int main(){

    float distanciaHoras, tempoDecorrido, velocidadeMedia, litrosCombustivel;

    printf("Digite o tempo decorrido da viagem: ");
    scanf("%f", &tempoDecorrido);

    printf("Digite a velocidade média da viagem: ");
    scanf("%f", &velocidadeMedia);

    distanciaHoras = tempoDecorrido * velocidadeMedia;
    litrosCombustivel = distanciaHoras / 14;
    printf("A quantidade de litros de combustivel consumida pelo automovel foi de %.2f litros",litrosCombustivel);

    return 0;
}