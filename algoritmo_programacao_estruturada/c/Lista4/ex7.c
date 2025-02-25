/*Faça um programa que converta notas em conceitos. 
Caso o aluno tenha obtido uma nota entre 0 e 4.9, o seu conceito deverá ser D. 
Caso o aluno tenha obtido uma nota entre 5.0 e 6.9, o seu conceito deverá ser C. 
Caso o aluno tenha obtido uma nota entre 7.0 e 8.9, o seu conceito deverá ser B. 
Caso o aluno tenha obtido uma nota entre 9.0 e 10.0, o seu conceito deverá ser A.*/

#include <stdio.h>

int main(){

    int nota;

    printf("Digite sua nota: ");
    scanf("%d", &nota);

    switch (nota)
    {
    case 0 ... 4:
        printf("A nota do aluno foi D");
        break;
    
    case 5 ... 6:
        printf("A nota do aluno foi C");
        break;
    
    case 7 ... 8:
        printf("A nota do aluno foi B");
        break;
    
    case 9 ... 10:
        printf("A nota do aluno foi A");
        break;
    
    default:
        printf("Valor invalido");
        break;
    }

    return 0;
}