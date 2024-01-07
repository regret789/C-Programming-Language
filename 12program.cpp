#include <stdio.h>
#include <math.h>

int main() {
    double principal, interestRate, amount;
    int years;

    // Input the deposit amount and number of years
    printf("Enter the deposit amount (in Rs.): ");
    scanf("%lf", &principal);

    printf("Enter the number of years: ");
    scanf("%d", &years);

    // Determine the interest rate based on the given conditions
    if (principal < 1000 && years >= 2) {
        interestRate = 0.05;  
    } else if (principal >= 1000 && principal < 5000 && years >= 2) {
        interestRate = 0.07;  
    } else if (principal >= 5000 && years >= 1) {
        interestRate = 0.08;  
    } else if (years >= 5) {
        interestRate = 0.10;  
    } else {
        interestRate = 0.03;  
    }

    // Calculate the final amount including interest
    amount = principal * pow(1 + interestRate, years);

    // Calculate the interest credited
    double interest = amount - principal;

    // Print the results
    printf("Principal amount: Rs. %.2lf\n", principal);
    printf("Interest rate: %.2lf%% per year\n", interestRate * 100);
    printf("Amount after %d years: Rs. %.2lf\n", years, amount);
    printf("Interest credited: Rs. %.2lf\n", interest);

    return 0;
}
