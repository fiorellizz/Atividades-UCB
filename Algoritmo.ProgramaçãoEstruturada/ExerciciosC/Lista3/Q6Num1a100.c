//Faça um programa em C que imprima todos os números de 1 até 100.

#include<stdio.h>


int main(){

        int contador = 1, numero = 1;

        while(contador <= 100){
            printf("%d\n",numero);
            numero++;
            contador++;
        }
        
        return 0;
}