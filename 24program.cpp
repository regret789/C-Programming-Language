#include <stdio.h>

int main() {
    int n;

    // Input the size of the square matrix
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];
    
    // Input the elements of the square matrix
    printf("Enter the elements of the square matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int sumOfSquares = 0;

    // Calculate the sum of squares of diagonal elements
    for (int i = 0; i < n; i++) {
        sumOfSquares += matrix[i][i] * matrix[i][i];
    }

    // Print the result
    printf("Sum of squares of diagonal elements: %d\n", sumOfSquares);

    return 0;
}
