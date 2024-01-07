#include <stdio.h>

int main() {
    int rows = 1, cols = 6; // Rows and columns of the original matrix
    int matrix[1][6] = {
        {-9874132, -943, 160, -15, 1, -8}
    };
    
    printf("Original Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    // Transpose the matrix
    int transposed[6][1]; // Transposed matrix will have 6 rows and 1 column

    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            transposed[i][j] = matrix[j][i];
        }
    }

    printf("\nTransposed Matrix:\n");
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d\n", transposed[i][j]);
        }
    }

    return 0;
}
