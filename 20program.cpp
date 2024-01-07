#include <stdio.h>
#include <math.h>

int main() {
    double x;
    double sum = 0.0;

    printf("Enter the value of x: ");
    scanf("%lf", &x);

    for (int n = 1; n <= 10; n++) {
        double term = pow(-1, n) * pow(x, n / 2) / (n * (n + 1));
        sum += term;
    }

    printf("Sum S = %.6lf\n", sum);

    return 0;
}
