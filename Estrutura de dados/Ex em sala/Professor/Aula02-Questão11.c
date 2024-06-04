#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

#define ERRO 0

void ConcatenarStrings(char *Resposta, char *A, char *B);

// Função principal

void main() {
    system("cls");

    char A[1024];
    char B[1024];
    char Resposta[2048];

    gets(A);
    gets(B);
    ConcatenarStrings(&Resposta, &A, &B);
    puts(Resposta);
}

// Implementando funções auxiliares

void ConcatenarStrings(char *Resposta, char *A, char *B) {
    
    int Posicao = 0; // Controlar a posião de resposta
    for( ; A[Posicao] != '\0'; Posicao++) Resposta[Posicao] = A[Posicao];
    for(int i = 0; B[i] != '\0'; i++, Posicao++) Resposta[Posicao] = B[i];
    Resposta[Posicao] = '\0';

}

