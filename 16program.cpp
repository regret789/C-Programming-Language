#include <stdio.h>

int main() {
    double a, b, c, d, x, result;

    
    printf("Enter the values of a, b, c, and d: ");
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);

    // Input the value of x
    printf("Enter the value of x: ");
    scanf("%lf", &x);

    // Evaluate the function f(x)
    if (x < d) {
        result = a * x * x + b * x + c;
    } else if (x > d) {
        result = -a * x * x + b * x - c;
    } else {
        result = 0.0;
    }

    // Print the result
    printf("f(x) = %.2lf\n", result);

    return 0;
}
