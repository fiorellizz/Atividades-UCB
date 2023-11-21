/*Faça um programa que leia a base e a altura de um retângulo e imprima o perímetro, a área e a diagonal. Para fazer os cálculos, implemente três funções, cada uma deve realizar um cálculo especifico conforme solicitado. Utilize as fórmulas a seguir.

perimetro = 2 * (base * altura)
area = base * altura
diagonal = raiz(base² + altura²)*/

#include <stdio.h>
#include <math.h>

float calcPerimetro(float base, float altura){
    float perimetro = 2 * (base * altura);

    return perimetro;
}

float calcArea(float base, float altura){
    float area = (base * altura);

    return area;
}

float calcDiagonal(float base, float altura){
    float diagonal = sqrt(pow(base, 2) * pow(altura, 2));

    return diagonal;
}

int main(){
    float base, altura, perimetro, area, diagonal;

    printf("Digite a base: ");
    scanf("%f", &base);

    printf("Digite a altura: ");
    scanf("%f", &altura);

    perimetro = calcPerimetro(base, altura);
    area = calcArea(base, altura);
    diagonal = calcDiagonal(base, altura);

    printf("Perimetro = %.2f\n", perimetro);
    printf("Area = %.2f\n", area);
    printf("Diagonal = %.2f\n", diagonal);

    return 0;
}