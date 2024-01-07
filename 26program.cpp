#include <stdio.h>

#define NUM_DIVISIONS 3
#define NUM_CATEGORIES 4

// Define the inventory table as a 3x4 array (division x category)
int inventory[NUM_DIVISIONS][NUM_CATEGORIES] = {0};

// Define the transaction structure
struct Transaction {
    int division;        // Division number (1, 2, 3)
    int productCategory; // Product category (1, 2, 3, 4)
    int quantityReceived; // Quantity received
    double costPerItem;  // Cost per item (optional)
};

// Function to update the inventory based on a transaction
void updateInventory(struct Transaction transaction) {
    if (transaction.division >= 1 && transaction.division <= NUM_DIVISIONS &&
        transaction.productCategory >= 1 && transaction.productCategory <= NUM_CATEGORIES) {
        inventory[transaction.division - 1][transaction.productCategory - 1] += transaction.quantityReceived;
    } else {
        printf("Invalid division or product category.\n");
    }
}

int main() {
    // Example transactions with cost per item
    struct Transaction transactions[] = {
        {1, 2, 100, 2.5}, // Division 1, Category 2, 100 items received at cost $2.5 each
        {2, 1, 50, 3.0},  // Division 2, Category 1, 50 items received at cost $3.0 each
        // Add more transactions as needed
    };

    // Update the inventory based on transactions
    for (int i = 0; i < sizeof(transactions) / sizeof(transactions[0]); i++) {
        updateInventory(transactions[i]);
    }

    // Calculate and print the total inventory value
    double totalInventoryValue = 0.0;
    for (int i = 0; i < NUM_DIVISIONS; i++) {
        for (int j = 0; j < NUM_CATEGORIES; j++) {
            int quantity = inventory[i][j];
            double costPerItem = transactions[i].costPerItem;
            totalInventoryValue += quantity * costPerItem;
        }
    }

    printf("Total Inventory Value: $%.2lf\n", totalInventoryValue);

    return 0;
}
