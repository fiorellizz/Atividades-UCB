#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b);
void quicksort(int Vetor[], int inf, int sup);
int pivo(int Vetor[], int inf, int sup);
void mostrarVetor(int Vetor[], int N);

int main() {

    int v[] = {3, 6, 4, 5, 1, 7, 2};
    quicksort(v, 0, 6);
    mostrarVetor(v, 7);

    return 0;
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void quicksort(int Vetor[], int inf, int sup){
    if (inf < sup) {
        int p = pivo(Vetor, inf, sup);
        quicksort(Vetor, inf, p - 1);
        quicksort(Vetor, p + 1, sup);
    }
}

int pivo(int Vetor[], int inf, int sup){
    int pivot = Vetor[sup];
    int i = inf;

    for (int j = inf; j < sup; j++){
        if (Vetor[j] < pivot){
            swap(&Vetor[i], &Vetor[j]);
            i++;
        }        
    }
    swap(&Vetor[i], &Vetor[sup]);

    return i;
}

void mostrarVetor(int Vetor[], int N){
    for (int i = 0; i < N; i++){
        printf("%d ", Vetor[i]);
    }
    printf("\n");
}