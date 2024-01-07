#include <stdio.h>
#include <math.h>

int main() {
    long long octalNum;
    int decimalNum = 0, digit, position = 0;

    
    printf("Enter an octal number: ");
    scanf("%lld", &octalNum);

    // Convert octal to decimal
    while (octalNum != 0) {
        digit = octalNum % 10;
        decimalNum += digit * pow(8, position);
        position++;
        octalNum /= 10;
    }

    
    printf("Decimal equivalent: %d\n", decimalNum);

    return 0;
}
