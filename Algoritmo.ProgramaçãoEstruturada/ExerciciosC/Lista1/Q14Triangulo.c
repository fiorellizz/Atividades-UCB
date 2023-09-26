//Faça um programa em C que leia a base e a altura de um retângulo e imprima o perímetro (base + altura) e a área (base * altura).

#include <stdio.h>

int main()
{
        float base, altura, perimetro, area;

        printf("Digite a base do retângulo : ");
        scanf("%f", &base);
        printf("Digite a altura do retângulo : ");
        scanf("%f", &altura);
        perimetro = altura + base;
        area = altura * base;
        printf("A área do retângulo é de %.2f e o perimetro %.2f",area, perimetro);

        return 0;
}