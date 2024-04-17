#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define ERRO 0

void exibir (int array[], int tamanho);

void main (){

    int meuArray[] = {6, 4, 9, 1, 3};
    int tamanho = sizeof(meuArray)/sizeof(int);
    exibir(meuArray, tamanho);
}

void exibir (int array[], int tamanho){

    for (int i = 0; i < tamanho; i++) printf("%d ", array[i]);
    
}