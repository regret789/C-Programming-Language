#include <stdio.h>

int main() {
    int rowsA = 2, colsA = 4; // Dimensions of matrix A
    int rowsB = 4, colsB = 3; // Dimensions of matrix B

    // Define matrices A and B
    int A[2][4] = {
        {5, 9, -2, 8},
        {4, 5, 0, 4}
    };

    int B[4][3] = {
        {8, 4, 0},
        {5, 5, 2},
        {1, 2, 3},
        {6, 7, 8}
    };

    // Initialize the result matrix C with zeros
    int C[rowsA][colsB];
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            C[i][j] = 0;
        }
    }

    // Calculate the product of matrices A and B
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            for (int k = 0; k < colsA; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Print the resulting matrix C
    printf("Resulting Matrix C:\n");
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
