#ifndef FRACAO_H
#define FRACAO_H

typedef struct{
    int Num, Den;
} Fracao;

Fracao criarFracao(int N, int D);
Fracao simplificarFracao(Fracao X);
Fracao inverterFracao(Fracao X);
Fracao somarFracao(Fracao X, Fracao Y);
Fracao subtrairFracao(Fracao X, Fracao Y);
void exibirFracao(Fracao X);
int mdc(int A, int B);

#endif