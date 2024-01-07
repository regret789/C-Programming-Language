#include <stdio.h>

int main() {
    int num, reversedNum = 0, originalNum, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num; // Save the original number

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    // Check if the reversed number is equal to the original number
    if (originalNum == reversedNum) {
        printf("%d is a palindrome.\n", originalNum);
    } else {
        printf("%d is not a palindrome.\n", originalNum);
    }

    return 0;
}
