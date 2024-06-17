#ifndef EXPRESSAO_H
#define EXPRESSAO_H

typedef struct {
    char posFixa[512];     // Expressão na forma pos fixa, como 3 12 4 + *
    char inFixa[512];      // Expressão na forma pos fixa, como 3 * (12 + 4)
    float Valor;           // Valor numérico da expressão  
} Expressao;

int is_operator(const char* token);
char *getFormaInFixa(char *Str);    // Retorna a forma inFixa de Str (posFixa)
char *pop(char stack[][MAX_EXPR_SIZE], int *top);
float getValor(char *Str);          // Calcula o valor de Str (na forma posFixa)
float apply_operator(const char* token, float a, float b);
void push(char stack[][MAX_EXPR_SIZE], int *top, const char* value);
void executarTeste(char *posFixa, int numeroTeste);

#endif