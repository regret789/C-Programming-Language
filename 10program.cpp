#include <stdio.h>

int main() {
    int num, positiveCount = 0, negativeCount = 0;

    printf("Enter a set of numbers (terminate with 0):\n");

    while (1) {
        scanf("%d", &num);

        if (num == 0) {
            break; // Terminate the input loop when 0 is encountered
        } else if (num > 0) {
            positiveCount++; // Increment positive count 
        } else {
            negativeCount++; // Increment negative count 
        }
    }

    printf("Number of positive numbers: %d\n", positiveCount);
    printf("Number of negative numbers: %d\n", negativeCount);

    return 0;
}
