#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int n;
    int matrix[MAX_SIZE][MAX_SIZE];

    // Input the size of the square matrix
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    // Input the elements of the square matrix
    printf("Enter the elements of the square matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check if the matrix is symmetric
    int symmetric = 1; // Assume the matrix is symmetric initially

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                symmetric = 0; // Set symmetric to false if any element doesn't match its transpose
                break;
            }
        }
        if (!symmetric) {
            break;
        }
    }

    if (symmetric) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is not symmetric.\n");
    }

    return 0;
}
