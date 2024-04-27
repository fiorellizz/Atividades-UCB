#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ERRO 0

//arrumar cod

int myStrlen(char *str);

int main (){
    char nome[99] = "UCB";

    printf("O tamanho da String %s é: %d\n", nome, myStrlen(nome));
    printf("O tamanho da String %s é: %d", nome, strlen(nome));

    return 0;
}

int myStrlen(char *str){

    int tamanho = 0;
    for (int i = 0; str[i] != '\0'; i++){
        tamanho ++;
    }
    
    return tamanho;
}