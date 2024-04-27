#include <stdio.h>
#include <stdlib.h>

#define ERRO 0

int f (int N);

int main(){

    int y;
    scanf("%d", &y);
    y = f(y);
    if(y != ERRO) printf("%d", y);

    return 0;
}

int f (int N){
   if(N == 0) return 1;
   if(N == 1) return 1;
   if(N >= 2) return N * f(N-1);
   else return ERRO;
}