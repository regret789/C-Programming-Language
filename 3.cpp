#include <stdio.h>

int main() {
    int number;
    printf("Enter a six-digit integer: ");
    scanf("%d", &number);

    if (number >= 100000 && number <= 999999) {
        int sum = 0;
        int temp = number;

        for (int i = 0; i < 6; i++) {
            sum += temp % 10;
            temp /= 10;
        }

        printf("Sum of the digits: %d\n", sum);
    } else {
        printf("Please enter a valid six-digit integer.\n");
    }

    return 0;
}
