struct Aluno{
    char nome[100];
    char telefone[100];
    char curso[20];
    float nota1;
    float nota2;
};

#define ERRO 1

void lerArquivo(FILE *arquivo, struct Aluno *X, int *i);
void escreveArquivo(FILE *arquivo, struct Aluno *X, int *i);