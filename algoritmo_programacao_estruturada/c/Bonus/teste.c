#include <stdio.h>
#include <string.h>

void arve(int escolha){
    for(int a = 1; a <= escolha; a += 2) {
        for(int i = 0; i < (escolha - a)/2; i++){
            printf(" ");
        }
        for(int i = 1; i <= a; i++) {
            printf("*");
        }
        printf("\n");
    }
    for(int i = 0; i < escolha/2 ; i++){
            printf(" ");
    }
    printf("*");
    printf("\n");
    for(int i = 0; i < (escolha - 3)/2 ; i++){
        printf(" ");
    }
    printf("***");
}

int main(){
    int layers;
    scanf("%d", &layers);
    arve(layers);

    return 0;
}