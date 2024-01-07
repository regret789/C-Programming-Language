#include <stdio.h>
#include <math.h>

int main() {
    double principal = 2000.0 - 100.0; // Cost of tape recorder minus down payment
    int numberOfMonths = 21;

    double monthlyInterestRate = 0.01; // Initial guess for the monthly interest rate
    double monthlyPayment;
    double epsilon = 0.0001; // A small value to determine the precision of the result

    while (1) {
        monthlyPayment = principal * monthlyInterestRate * pow(1.0 + monthlyInterestRate, numberOfMonths) /
                         (pow(1.0 + monthlyInterestRate, numberOfMonths) - 1.0);

        if (fabs(monthlyPayment - 100.0) < epsilon) {
            break; // If the monthly payment is close to Rs. 100, exit the loop
        }

        monthlyInterestRate += 0.0001; // Increment the interest rate for the next iteration
    }

    printf("Monthly interest rate: %.5lf\n", monthlyInterestRate);
    printf("Monthly interest charged: Rs. %.2lf\n", (monthlyPayment - 100.0));

    return 0;
}
