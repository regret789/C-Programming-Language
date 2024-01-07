#include <stdio.h>

int main() {
    float num1, num2;
    int sum;

    
    printf("Enter the first floating-point number: ");
    scanf("%f", &num1);
    
    printf("Enter the second floating-point number: ");
    scanf("%f", &num2);

    // Calculate the sum of the two numbers and assign it to the integer variable
    sum = (int)(num1 + num2);

    printf("num1: %.2f\n", num1);
    printf("num2: %.2f\n", num2);
    printf("sum: %d\n", sum);

    return 0;
}
