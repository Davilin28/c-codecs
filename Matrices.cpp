#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

#define N 3

int main(int argc, char *argv[]){

    int A[N][N] = { {1, 2, 3}, {2, -3, 1}, { -4, 3, 2 } },
        B[N][N] = { {7, 2, 5}, {1,  2, 4}, { -3, 2, 1 } },
        C[N][N];

    bzero(C, sizeof(C));            /* Limpiar toda la matriz C */
    for (int f=0; f<N; f++)         /* Recorrer todas las filas */
        for (int c=0; c<N; c++)     /* Recorrer cada columna */
            for (int k=0; k<N; k++) /* Para cada valor de k */
                C[f][c] += A[f][k] * B[k][c];

    for (int f=0; f<N; f++){
        for (int c=0; c<N; c++)
            printf("%7i", C[f][c]);
        printf("\n");
    }

    return EXIT_SUCCESS;
