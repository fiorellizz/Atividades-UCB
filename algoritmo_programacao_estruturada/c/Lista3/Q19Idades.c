/*Faça um programa em C que permita entrar com a idade de várias pessoas e imprima:

• total de pessoas com menos de 21 anos
• total de pessoas com mais de 50 anos*/

#include <stdio.h>

int main(){
    
    int idade, menos21anos = 0, mais50anos = 0, count;

    printf("Quantas idades ira ler: ");
    scanf("%d", &count);

    for (int i = 0; i < count; i++)
    {
        printf("Digite uma idade: ");
        scanf("%d", &idade);

        if (idade < 21)
        {
            menos21anos++;
        } else if (idade > 50)
        {
            mais50anos++;
        }
    }

    printf("%d pessoas tem menos de 21 anos\n%d pessoas tem mais de 50 anos", menos21anos, mais50anos);
    
    return 0;
}