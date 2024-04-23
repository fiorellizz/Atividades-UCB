#include <stdio.h>

typedef struct Pessoa {
    char nome [1024];
    int idade;
    float altura = 1.75;
    float peso = 70;
};

//IMC = peso/(altura x altura)
float calcularIMC (struct Pessoa *X) {
    float IMC = X->peso/(X->altura * X->altura);
    return(IMC);
}

int main(){
    struct Pessoa X[1];
    
    float imc = calcularIMC(X);
    printf("%f", imc);

    return 0;
}