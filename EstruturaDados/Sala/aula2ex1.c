#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct posicao{
    int linha;
    int coluna;
};

struct posicao Maior (int M[3][3]);
int BuscarElemento (struct posicao X, int M[3][3]);

int main (){
    int M[3][3];
    int L = 3, C = 3;

    for (int i = 0; i < L; i++){
        for (int i = 0; i < C; i++){
            printf("Digite o elemento [%d][%d]: ", L, C);
            scanf("%d", &M[L][C]);
        }
    }

    struct posicao P = Maior(M);
    int maiorelemento = BuscarElemento(P, M);

    printf("O maior elemento e %d", maiorelemento);
}

struct posicao Maior (int M[3][3]){
    struct posicao X;
    int MaiorValor;

    X.linha = 0;
    X.linha = 0;
    MaiorValor = M[0][0];

    for (int L = 0; L < 3; L++){
        for (int C = 0; C < 3; C++){
            if (M[L][C] > MaiorValor){
                X.linha = L;
                X.coluna = C;
                MaiorValor = M[L][C];
            }
        }
    }
    return X;
}

int BuscarElemento(struct posicao X, int M[3][3]){
    int Resposta = M[X.linha][X.coluna];
    return Resposta;
}