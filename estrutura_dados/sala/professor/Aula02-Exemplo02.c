
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ERRO 0

int main() {

    system("cls");

    int M[3][3] = {
        {1, 2, 0},
        {-1, 3, 6},
        {7, 1, 4}
    };

    int Det = 0;
    Det = Det + M[0][0] * M[1][1] * M[2][2];
    Det = Det + M[0][1] * M[1][2] * M[2][0];
    Det = Det + M[0][2] * M[1][0] * M[2][1];
    Det = Det - M[2][0] * M[1][1] * M[0][2];
    Det = Det - M[2][1] * M[1][2] * M[0][0];
    Det = Det - M[2][2] * M[1][0] * M[0][1];

    printf("Det: %d.\n\n", Det);

}





