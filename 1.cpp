#include <stdio.h>

int main() {
    double num1, num2, num3;
    
    // Read three values from the user
    printf("Enter three values: ");
    scanf("%lf %lf %lf", &num1, &num2, &num3);
    
    // Calculate the sum
    double sum = num1 + num2 + num3;
    
    // Calculate the average
    double average = sum / 3.0;
    
    // Find the largest value
    double largest = num1;
    if (num2 > largest) {
        largest = num2;
    }
    if (num3 > largest) {
        largest = num3;
    }
    
    // Find the smallest value
    double smallest = num1;
    if (num2 < smallest) {
        smallest = num2;
    }
    if (num3 < smallest) {
        smallest = num3;
    }
    
    // Print the results
    printf("Sum: %.2lf\n", sum);
    printf("Average: %.2lf\n", average);
    printf("Largest: %.2lf\n", largest);
    printf("Smallest: %.2lf\n", smallest);
    
    return 0;
}