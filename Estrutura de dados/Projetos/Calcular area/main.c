#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void) {

    FILE *arquivo;
    int ponto;

    arquivo = fopen("trabalhoarea.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        exit(1);
    }

    fscanf(arquivo, "%d", &ponto);
    struct pontos v[ponto];
    
    for (int i = 0; i < ponto; i++) fscanf(arquivo, "%f %f", &v[i].x, &v[i].y);

    float area = areatriangulo(v, ponto);

    printf("Area do poligono: %.2f", area);
    fclose(arquivo);

    return 0;
}

float areatriangulo(struct pontos v[], int tamanho) {
    float area = 0;

    for (int i = 0; i < tamanho - 2; i++) {
        float M[3][3] = {
            {v[0].x, v[0].y, 1},
            {v[i + 1].x, v[i + 1].y, 1},
            {v[i + 2].x, v[i + 2].y, 1},
        };

        float det = 0;

        det = det + (M[0][0] * M[1][1] * M[2][2]);
        det = det + (M[0][1] * M[1][2] * M[2][0]);
        det = det + (M[0][2] * M[1][0] * M[2][1]);
        det = det - (M[2][0] * M[1][1] * M[0][2]);
        det = det - (M[2][1] * M[1][2] * M[0][0]);
        det = det - (M[2][2] * M[1][0] * M[0][1]);

        area += det / 2;
    }

    if (area < 0) {
        area = -area;
    }

    return area;
}