#include <stdio.h>

// Function to perform bubble sort in descending order
void bubbleSortDescending(int arr[], int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                // Swap arr[j] and arr[j+1] in descending order
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int rows = 1, cols = 10; // Dimensions of the matrix

    // Define the matrix
    int matrix[1][10] = {
        {1, 6, 8, 7, 3, 5, 4, 4, 3, 1}
    };

    // Rearrange elements in each row in descending order
    for (int i = 0; i < rows; i++) {
        bubbleSortDescending(matrix[i], cols);
    }

    // Print the rearranged matrix
    printf("Rearranged Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
