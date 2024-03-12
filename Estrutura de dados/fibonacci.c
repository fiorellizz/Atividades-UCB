#include <stdio.h>
#include <stdlib.h>

#define ERRO 0

int fibonacci (int X);

int main (){
    int y;
    scanf("%d", &y);
    y = fibonacci(y);
    if(y != ERRO) printf("%d", y);

    return 0;
}

int fibonacci (int X){
    if (X == 1) return 1;
    if (X == 2) return 1;
    if (X > 2) return fibonacci(X - 1) + fibonacci(X - 2);
    else return ERRO;
}