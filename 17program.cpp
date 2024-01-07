#include <stdio.h>
#include <math.h>

int main() {
    double earnings = 1000.0;    // Annual earnings from the machine
    double initialCost = 6000.0; // Initial cost of the machine
    double salvageValue = 2000.0; // Salvage value of the machine
    double discountRate = 0.12;  // Annual discount rate

    double minLife = 1.0; // Initialize minimum life to 1 year

    while (1) {
        // Calculate annual depreciation
        double depreciation = (initialCost - salvageValue) / minLife;

        // Calculate Net Present Value (NPV) of the machine
        double machineNPV = (earnings - depreciation) / pow(1.0 + discountRate, minLife);

        // Calculate NPV of an alternative investment
        double alternativeInvestmentNPV = earnings / pow(1.0 + discountRate, minLife);

        // If the machine's NPV is greater than the alternative investment's NPV, break the loop
        if (machineNPV > alternativeInvestmentNPV) {
            break;
        }

        minLife++; // Increment the minimum life
    }

    printf("The minimum life of the machine to make it a more attractive investment: %.lf years\n", minLife);

    return 0;
}
