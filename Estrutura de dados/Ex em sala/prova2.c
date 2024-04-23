#include <stdio.h>

int fazAlgo(int a, int b){
    int r;
    do
    {
        r = a % b;
        a = b;
        b = r;
    } while (b != 0);
    
    printf("%d", a);
    return a;
}

int main() {
    
    fazAlgo(0, 5);

    return 0;
}