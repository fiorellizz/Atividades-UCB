#include <stdio.h>
#include <stdlib.h>

int g (int X);

int main (){

    printf("%d", g(4));

    return 0;
}

int g (int X){

    if (X == 0) return -1;
    else return 4 * g(X - 1) + 6;
}