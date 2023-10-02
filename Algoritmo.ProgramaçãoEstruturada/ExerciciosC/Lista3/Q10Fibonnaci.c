#include <stdio.h>

int main(){
    int antecessor = 0, numero = 1, proximo;

    for (int i = 0; i < 20; i++){
        printf("%d\n", numero);
        proximo = numero + antecessor;
        antecessor = numero;
        numero = proximo;
    }
}