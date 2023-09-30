#include<stdio.h>

int main(){
    
    float chico = 1.5, ze = 1.1;
    int ano = 0;

    while(ze < chico){
        chico = chico + 0.02;
        ze = ze + 0.03;
        ano++;
        printf("Altura de chico %.2f \t Altura de ze %.2f \t Ano %d\n", chico, ze, ano);
    }

    printf("\nSerão necessarios %d anos para ze ser maior que chico!",ano);

    return 0;
}