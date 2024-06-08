#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ERRO 0

struct Posicao {
    int Linha;
    int Coluna;
};

struct Posicao Maior (int M[3][3]);  // Retorna a posição do maior elemento
int BuscarElemento(struct Posicao X, int M[3][3]); // Retorna o elemento que está na posição  X

// Função principal

void main() {
    system("cls");

    int M[3][3];
    for(int L = 0; L < 3; L++) {
        for(int C = 0; C < 3; C++) {
            printf("Digite o elemento [%d][%d]: ", L, C);
            scanf("%d", &M[L][C]);
        } 
    }

    struct Posicao P = Maior(M);
    int MaiorElemento = BuscarElemento(P, M);

    printf("O maior elemento e %d.\n", MaiorElemento);

}

// Implementando funções auxiliares

struct Posicao Maior (int M[3][3]) {

    struct Posicao X;
    int MaiorValor;

    X.Linha = 0;
    X.Coluna = 0;
    MaiorValor = M[0][0];

    for(int L = 0; L < 3; L++) {
        for(int C = 0; C < 3; C++) {
            if (M[L][C] > MaiorValor) {
                X.Linha = L;
                X.Coluna = C;
                MaiorValor = M[L][C];
            }
        }
    }

    return(X);

};  


int BuscarElemento(struct Posicao X, int M[3][3])  {
    int Resposta = M[X.Linha][X.Coluna];
    return(Resposta); 
}
