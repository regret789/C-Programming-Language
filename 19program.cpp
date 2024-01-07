#include <stdio.h>
#include <math.h>

double factorial(int n) {
    if (n == 0 || n == 1) {
        return 1.0;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    double x;
    double result;

    printf("x\t\tF(x)\n");
    printf("------------------------\n");

    for (x = 0.5; x <= 3.0; x += 0.5) {
        result = 1 + pow(x, 2) / (2 * factorial(2)) + pow(x, 4) / (4 * factorial(4)) - 0.5 * pow(sin(x), 2) + sqrt(4 - pow(x, 2));

        printf("%.2lf\t\t%.6lf\n", x, result);
    }

    return 0;
}
