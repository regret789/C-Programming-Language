#include <stdio.h>
#include <math.h>

int main() {
    double number;

    // Read the real number from the keyboard
    printf("Enter a real number: ");
    scanf("%lf", &number);

    // Calculate and print the smallest integer not less than the number (ceiling)
    double ceiling = ceil(number);
    printf("Given number: %.2lf\n", number);
    printf("Smallest Integer not less than the number: %.0lf\n", ceiling);

    // Calculate and print the largest integer not greater than the number (floor)
    double floorValue = floor(number);
    printf("Largest integer not greater than the number: %.0lf\n", floorValue);

    return 0;
}
