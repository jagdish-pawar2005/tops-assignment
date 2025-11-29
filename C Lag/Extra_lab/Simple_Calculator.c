//Write a C program that acts as a simple calculator. The program should take two numbers 
//and an operator as input from the user and perform the respective operation (addition, 
//subtraction, multiplication, division, or modulus) using operators.

#include <stdio.h>

void main(void) {
    int choice;
    int num1, num2, ans;

    while (1) {
        printf("\n===== Simple Calculator =====\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Modulus\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        if (scanf("%d", &choice) != 1) return 0; 

        if (choice == 6) {
            printf("Exiting... Goodbye!\n");
            break; 
        }

        
        if (choice < 1 || choice > 6) {
            printf("Invalid choice! Please try again.\n");
            continue;
        }

        
        printf("Enter the first number : ");
        scanf("%d", &num1);
        printf("Enter the second number: ");
        scanf("%d", &num2);

        switch (choice) {
            case 1:
                ans = num1 + num2;
                printf("Addition = %d\n", ans);
                break;

            case 2:
                ans = num1 - num2;
                printf("Subtraction = %d\n", ans);
                break;

            case 3:
                ans = num1 * num2;
                printf("Multiplication = %d\n", ans);
                break;

            case 4:
                if (num2 != 0) {
                    ans = num1 / num2;
                    printf("Division = %d\n", ans);
                } else {
                    printf("Error! Division by zero is not allowed.\n");
                }
                break;

            case 5:
                if (num2 != 0) {
                    ans = num1 % num2;
                    printf("Modulus = %d\n", ans);
                } else {
                    printf("Error! Modulus by zero is not allowed.\n");
                }
                break;
        }
        
    }

    
}

