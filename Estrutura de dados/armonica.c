#include <stdio.h>
#include <stdlib.h>

#define ERRO 0

float serie(int N);

int main(){

    int x;
    scanf("%d", &x);
    printf("%.2f", serie(x));

    return 0;
}

float serie(int N){
    
    float Soma = 0.0;

    for (int i = 0; i <= N; i++){
        Soma = Soma + 1.0 /i;
    }
    
    return Soma;
}