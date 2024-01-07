#include <stdio.h>

int main() {
    int decimalNum, octalNum = 0, position = 1;

    printf("Enter a decimal number: ");
    scanf("%d", &decimalNum);

    while (decimalNum > 0) {
        int remainder = decimalNum % 8;
        octalNum += remainder * position;
        decimalNum /= 8;
        position *= 10;
    }

    printf("Octal equivalent: %d\n", octalNum);

    return 0;
}
