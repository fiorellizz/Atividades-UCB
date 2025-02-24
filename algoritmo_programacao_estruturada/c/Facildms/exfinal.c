#include <stdio.h>

char situacao(float p1, float p2, float p3, int faltas, int aulas, float *media) {

    *media = (p1 + p2 + p3) / 3;

    if (faltas > aulas * 0.25) {
        return 'F';
    } else if (*media >= 7.0) {
        return 'A';
    } else {
        return 'R';
    }
}

int main() {
    
    float p1, p2, p3;
    int faltas, aulas;
    float media;

    printf("Digite a primeira nota: ");
    scanf("%f", &p1);    
    printf("Digite a segunda nota: ");
    scanf("%f", &p2);    
    printf("Digite a terceira nota: ");
    scanf("%f", &p3);

    printf("Digite a quantidade de aulas da materia: ");
    scanf("%d", &aulas);
    printf("Digite a quantidade de faltas do aluno: ");
    scanf("%d", &faltas);
    
    char resultado = situacao(p1, p2, p3, faltas, aulas, &media);

    switch (resultado) {
        case 'A':
            printf("Média: %.2f\n", media);
            printf("Situação: 'A' = Aprovado!");
            break;
        case 'R':
            printf("Média: %.2f\n", media);
            printf("Situação: 'R' = Reprovado!");
            break;
        case 'F':
            printf("Situação: 'F' Reprovado por faltas!");
            break;
        default:
            printf("Erro!");
            break;
    }

    return 0;
}

//eu espera mais