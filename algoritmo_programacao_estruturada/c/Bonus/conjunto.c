#include <stdio.h>
// Função recursiva para construir o conjunto das partes
void construirConjuntoPartes(int conjunto[], int tamanho, int indice, int subconjunto[])
{
    if (indice == tamanho)
    {
        printf("{ ");
        for (int i = 0; i < tamanho; i++)
        {
            if (subconjunto[i] == 1)
                printf("%d ", conjunto[i]);
        }
        printf("}\n");
        return;
    }
    // Incluir o elemento atual no subconjunto e chamar a função recursivamente
    subconjunto[indice] = 1;
    construirConjuntoPartes(conjunto, tamanho, indice + 1, subconjunto);
    // Não incluir o elemento atual no subconjunto e chamar a função recursivamente
    subconjunto[indice] = 0;
    construirConjuntoPartes(conjunto, tamanho, indice + 1, subconjunto);
}
// Função para imprimir o conjunto das partes de um conjunto
void imprimirConjuntoPartes(int conjunto[], int tamanho)
{
    int subconjunto[tamanho];
    construirConjuntoPartes(conjunto, tamanho, 0, subconjunto);
}
int main()
{
    int conjunto[] = {1, 2, 3};
    int tamanho = sizeof(conjunto) / sizeof(conjunto[0]);
    printf("Conjunto das partes:\n");
    imprimirConjuntoPartes(conjunto, tamanho);
    return 0;
}