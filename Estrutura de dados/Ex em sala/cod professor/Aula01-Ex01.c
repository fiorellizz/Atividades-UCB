#include <stdio.h>
#include <stdlib.h>

char f(int N) {
    if (N == 1) return('C');
    else if (N == 2) return('D');
    else if (N == 3) return('E');
    else if (N == 4) return('B');
    else if (N == 5) return('E');
    else return('\0');
}

int main() {
    char t = f(6);
    printf("Resposta: %c", t);
}