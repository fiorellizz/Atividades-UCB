#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "calculadora.h"

#define ERRO 1

void push(char stack[][MAX_EXPR_SIZE], int *top, const char* value) {
    if (*top < MAX_STACK_SIZE - 1) {
        strcpy(stack[++(*top)], value);
    } else {
        printf("ERRO: Limite de pilha\n");
        exit(ERRO);
    }
}

char* pop(char stack[][MAX_EXPR_SIZE], int *top) {
    if (*top >= 0) {
        return stack[(*top)--];
    } else {
        printf("ERRO: Subfluxo de pilha - Tentativa de desempilhar de uma pilha vazia\n");
        exit(ERRO);
    }
}

int is_operator(const char* token) {
    return strcmp(token, "+") == 0 || strcmp(token, "-") == 0 || strcmp(token, "*") == 0 || strcmp(token, "/") == 0 || strcmp(token, "^") == 0;
}

float apply_operator(const char* token, float a, float b) {
    if (strcmp(token, "+") == 0) return a + b;
    if (strcmp(token, "-") == 0) return a - b;
    if (strcmp(token, "*") == 0) return a * b;
    if (strcmp(token, "/") == 0) return a / b;
    if (strcmp(token, "^") == 0) return pow(a, b);
    return 0.0;
}

float getValor(char *str) {
    char stack[MAX_STACK_SIZE][MAX_EXPR_SIZE];
    int top = -1;
    char expr_copy[MAX_EXPR_SIZE];
    strcpy(expr_copy, str);
    char* token = strtok(expr_copy, " ");

    while (token != NULL) {
        if (is_operator(token)) {
            float b = atof(pop(stack, &top));
            float a = atof(pop(stack, &top));
            float result = apply_operator(token, a, b);
            char result_str[MAX_EXPR_SIZE];
            snprintf(result_str, MAX_EXPR_SIZE, "%f", result);
            push(stack, &top, result_str);
        } else {
            push(stack, &top, token);
        }
        token = strtok(NULL, " ");
    }
    return atof(pop(stack, &top));
}

char *getFormaInFixa(char *str) {
    char stack[MAX_STACK_SIZE][MAX_EXPR_SIZE];
    int top = -1;
    char expr_copy[MAX_EXPR_SIZE];
    strcpy(expr_copy, str);
    char* token = strtok(expr_copy, " ");

    while (token != NULL) {
        if (is_operator(token)) {
            char b[MAX_EXPR_SIZE];
            strcpy(b, pop(stack, &top));
            char a[MAX_EXPR_SIZE];
            strcpy(a, pop(stack, &top));
            char result[MAX_EXPR_SIZE];
            snprintf(result, MAX_EXPR_SIZE, "(%s %s %s)", a, token, b);
            push(stack, &top, result);
        } else {
            push(stack, &top, token);
        }
        token = strtok(NULL, " ");
    }
    char* result = (char*) malloc(MAX_EXPR_SIZE * sizeof(char));
    strcpy(result, pop(stack, &top));
    return result;
}

void executarTeste(char *posFixa, int numeroTeste) {
    FILE *arquivo = fopen("Resultado.txt", "a");
    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        exit(ERRO);
    }

    fprintf(arquivo, "TESTE 3.%d:\n", numeroTeste);
    fprintf(arquivo, "Forma posfixa: %s\n", posFixa);
    char *inFixa = getFormaInFixa(posFixa);
    fprintf(arquivo, "Forma infixa: %s\n", inFixa);
    float valor = getValor(posFixa);
    fprintf(arquivo, "Valor da expressão: %.2f\n\n", valor);

    fclose(arquivo);
}