struct pontos{
    float x;
    float y;
};

#define ERRO 1

void lerPontos(FILE *arquivo, int ponto, struct pontos *vertices);
float areaTriangulo(struct pontos vertices[], int tamanho);