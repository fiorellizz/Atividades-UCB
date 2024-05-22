Fracao criarFracao(int N, int D){
    Fracao X;
    X.Num = N;
    X.Den = D;
    return X;
}

void exibirFracao(Fracao X){
    printf("%d/%d\n", X.Num, X.Den);
}

int mdc(int A, int B){
    while (B != 0){
        int temp = B;
        B = A % B;
        A = temp;
    }
    return A;
}

Fracao simplificarFracao(Fracao X){
    int fatorComum = mdc(X.Num, X.Den);
    X.Num = X.Num / fatorComum;
    X.Den = X.Den / fatorComum;
    return X;
}

Fracao inverterFracao(Fracao X){
    X.Num += X.Den;
    X.Den = X.Num - X.Den;
    X.Num -= X.Den;
    return X;
}

Fracao somarFracao(Fracao X, Fracao Y){
    Fracao Res;
    Res.Num = X.Num * Y.Den + X.Den * Y.Num;
    Res.Den = X.Den * Y.Den;
    Res = simplificarFracao(Res);

    return Res;
}

Fracao subtrairFracao(Fracao X, Fracao Y){
    Y.Num = -Y.Num;
    return somarFracao(X, Y);
}