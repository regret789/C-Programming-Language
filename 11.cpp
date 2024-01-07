#include <stdio.h>
#include <math.h>

int main() {
    double number;
    
    // Read a positive number with four significant digits
    printf("Enter a positive number (1.000 to 1.999): ");
    scanf("%lf", &number);

    if (number >= 1.0 && number < 2.0) {
        // Round the number to three significant digits
        double roundedNumber = floor(number * 100 + 0.5) / 100.0;

        printf("Rounded number with three significant digits: %.2lf\n", roundedNumber);
    } else {
        printf("Please enter a positive number between 1.000 and 1.999.\n");
    }

    return 0;
}
