#include <stdio.h>
#include <math.h>

int main() {
    double floatingNumber;
    
    // Read a floating-point number from the user
    printf("Enter a floating-point number: ");
    scanf("%lf", &floatingNumber);
    
    // Convert the floating-point number to an integer
    int integralPart = (int)floatingNumber;
    
    // Extract the rightmost digit of the integral part
    int rightMostDigit = integralPart % 10;
    
    // Display the rightmost digit
    printf("Rightmost digit of the integral part: %d\n", rightMostDigit);
    
    return 0;
}
