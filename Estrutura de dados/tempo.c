#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define ARRAY_SIZE 1000

int main() {

    int array[ARRAY_SIZE];

    srand(time(NULL));

    for (int i = 0; i < ARRAY_SIZE; i++)
        array[i] = rand() % 100;
    
    for (int i = 0; i < ARRAY_SIZE; i++)
        printf("%d \n", array[i]);

    
    return 0;
}