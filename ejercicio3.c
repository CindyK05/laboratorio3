#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 3

void randomatrix(int matrix[][SIZE]) {
    int i, j;
    srand(time(0));
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            matrix[i][j] = rand() % 2;
        }
    }
}

void imprimirmatrix(int matrix[][SIZE]) {
    int i, j;
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}


int findLargestLine(int matrix[][SIZE]) {

    int i, j, d, maximocon = 0;

    for (d = 0; d < 2 * SIZE - 1; d++) {
        int inicio;
        if (d < SIZE) {
                inicio = 0;
        } else {
                inicio = d - SIZE + 1;
        }
        int contador = 0;
        for (i = inicio; i < SIZE && (d - i) >= 0; i++) {
            j = d - i;
            if (matrix[i][j] == 1) {
                contador++;
                if (contador > maximocon) {
                    maximocon = contador;
                }
            } else {
                contador = 0;
            }
        }
    }

    for (d = 0; d < 2 * SIZE - 1; d++) {
        int inicio;
        if (d < SIZE) {
                inicio = 0;
        } else {
                inicio = d - SIZE + 1;
        }
        int contador = 0;
        for (i = inicio; i < SIZE && (SIZE - 1 - (d - i)) >= 0; i++) {
            j = SIZE - 1 - (d - i);
            if (matrix[i][j] == 1) {
                contador++;
                if (contador > maximocon) {
                    maximocon = contador;
                }
            } else {
                contador = 0;
            }
        }
    }

    return maximocon;
}


int main() {

    int matrix[SIZE][SIZE];
    randomatrix(matrix);
    printf("La matriz que se genera es:\n");
    imprimirmatrix(matrix);
    int largestLine = findLargestLine(matrix);
    printf("El tamano de la secuencia de 1s mas grande es: %d\n", largestLine);
    return 0;

}
