#include <stdio.h>
#include <stdlib.h>

int f (int X) {
    if (X == 0) return (3);
    else return(2 * f(X-1) + 5);
}

int main () {
    int N = 3;
    printf("f(%d) = %d", N, f(N));
}