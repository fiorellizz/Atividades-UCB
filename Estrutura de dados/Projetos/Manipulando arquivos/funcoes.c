void lerArquivo(FILE *arquivo, struct Aluno *X, int *i) {
    for ((*i) = 0; fscanf(arquivo, "%[^,],%[^,],%[^,],%f,%f", X[*i].nome, X[*i].telefone, X[*i].curso, &X[*i].nota1, &X[*i].nota2) != EOF; (*i)++);
}

void escreveArquivo(FILE *arquivo, struct Aluno *X, int *i) {
    for (int j = 0; j < (*i); j++) {
        fprintf(arquivo, "%s, %.2f, ", X[j].nome, ((X[j].nota1 + X[j].nota2) / 2));
        if ((X[j].nota1 + X[j].nota2) / 2 >= 7.0){
            fprintf(arquivo, "APROVADO");
        } else {
            fprintf(arquivo, "REPROVADO");
        }
    }
}