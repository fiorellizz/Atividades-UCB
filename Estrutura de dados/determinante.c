#include <stdio.h>
#include <stdlib.h>

int main (){
    int M[3][3] = {
        {1, 2, 0},
        {-1, 3, 6},
        {7, 1, 4},
    };

    int det = 0;
    det = det + M[0][0] * M[1][1] * M[2][2];
    det = det + M[0][1] * M[1][2] * M[2][0];
    det = det + M[0][2] * M[1][0] * M[2][1];

    det = det - M[2][0] * M[1][1] * M[0][2];
    det = det - M[2][1] * M[1][2] * M[0][0];
    det = det - M[2][2] * M[1][0] * M[0][1];

    printf("%d", det);

    return 0;
}