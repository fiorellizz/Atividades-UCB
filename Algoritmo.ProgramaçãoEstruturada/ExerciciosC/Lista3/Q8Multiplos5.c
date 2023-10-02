//Faça um programa que imprima os múltiplos de 5, no intervalo de 1 até 500.

#include<stdio.h>

int main(){

        int contador = 1, numero = 1;

        while(contador <= 500){
            if(numero % 5 == 0){
            printf("%d\n",numero);
            }
        numero++;
        contador++;
        }

        return 0;
}

/*#include<stdio.h>


int main(){

        int numero = 0;

    while(numero <= 500){
         printf("%d\n",numero);
    numero = numero + 5;
        }

        return 0;
}*/