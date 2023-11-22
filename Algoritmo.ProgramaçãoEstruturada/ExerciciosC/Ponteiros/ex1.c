/*Escreva um programa que contenha duas variáveis inteiras. Compare seus enderços e exiba o maior endereço.*/

#include <stdio.h>

int main(){

    int var, var2;

    if (&var > &var2)
    {
        printf("O endereço de VAR é maior!");
    } else {
        printf("O endereço de VAR2 é maior!");
    }
    
    return 0;
}