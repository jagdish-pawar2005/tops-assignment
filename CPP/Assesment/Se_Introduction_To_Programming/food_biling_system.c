#include <stdio.h>

int main() {
    int choice, qty;
    char more;
    float price = 0, amount = 0, total = 0;

    do {
        // Display Menu
        printf("\n------ MENU ------\n");
        printf("1. Pizza  - 180 rs/pcs\n");
        printf("2. Burger - 100 rs/pcs\n");
        printf("3. Dosa   - 120 rs/pcs\n");
        printf("4. Idli   - 50 rs/pcs\n");

        // Take user choice
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Set price based on choice
        switch(choice) {
            case 1:
                price = 180;
                printf("You selected Pizza\n");
                break;
            case 2:
                price = 100;
                printf("You selected Burger\n");
                break;
            case 3:
                price = 120;
                printf("You selected Dosa\n");
                break;
            case 4:
                price = 50;
                printf("You selected Idli\n");
                break;
            default:
                printf("Invalid choice!\n");
                continue;
        }

        // Quantity input
        printf("Enter quantity: ");
        scanf("%d", &qty);

        // Calculate amount
        amount = price * qty;
        total += amount;

        printf("Amount: %.2f\n", amount);
        printf("Total Amount: %.2f\n", total);

        // Ask for more orders
        printf("Do you want to order more? (y/n): ");
        scanf(" %c", &more);

    } while(more == 'y' || more == 'Y');

    // Final bill
    printf("\n===== FINAL BILL =====\n");
    printf("Total Payable Amount: %.2f\n", total);
    printf("Thank you! Visit again.\n");

    return 0;
}
