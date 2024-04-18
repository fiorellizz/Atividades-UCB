#include <stdio.h>
#include <stdlib.h>

int g(int X);

int main() {
    system("cls");
    int N = g(3);
    printf("Resposta: %d\n", N);
}

int g (int X) {
    if (X == 0) return -1;
    else if (X > 0) return (4 * g(X - 1) + 6);
}