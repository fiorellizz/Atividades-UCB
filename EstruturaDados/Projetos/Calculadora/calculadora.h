#ifndef EXPRESSAO_H
#define EXPRESSAO_H

#define MAX_EXPR_SIZE 512
#define MAX_STACK_SIZE 100

typedef struct {
    char posFixa[MAX_EXPR_SIZE];     // Expressão na forma pós-fixada, como 3 12 4 + *
    char inFixa[MAX_EXPR_SIZE];      // Expressão na forma infixada, como 3 * (12 + 4)
    float Valor;                     // Valor numérico da expressão  
} Expressao;

int is_operator(const char* token);
char *getFormaInFixa(char *Str);    // Retorna a forma infixa de Str (pós-fixada)
char *pop(char stack[][MAX_EXPR_SIZE], int *top);
float getValor(char *Str);          // Calcula o valor de Str (na forma pós-fixada)
float apply_operator(const char* token, float a, float b);
void push(char stack[][MAX_EXPR_SIZE], int *top, const char* value);
void executarTeste(char *expr, int numeroTeste);

#endif