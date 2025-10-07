#include <stdio.h>
#include <math.h>

// Function Prototypes
float simpleInterest(float, float, float);
float areaOfCircle(float);
float areaOfRectangle(float, float);
int isPrime(int);
int isArmstrong(int);
void fibonacci(int);

int main() {
    int choice, num, terms;
    float p, r, t, radius, length, width;

    do {
        // Menu Display
        printf("\n========== MENU ==========\n");
        printf("1. Simple Interest\n");
        printf("2. Area of Circle\n");
        printf("3. Area of Rectangle\n");
        printf("4. Check Prime Number\n");
        printf("5. Check Armstrong Number\n");
        printf("6. Fibonacci Series\n");
        printf("7. Exit\n");
        printf("===========================\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter Principal, Rate, and Time: ");
                scanf("%f %f %f", &p, &r, &t);
                printf("Simple Interest = %.2f\n", simpleInterest(p, r, t));
                break;

            case 2:
                printf("Enter Radius of the Circle: ");
                scanf("%f", &radius);
                printf("Area of Circle = %.2f\n", areaOfCircle(radius));
                break;

            case 3:
                printf("Enter Length and width of Rectangle: ");
                scanf("%f %f", &length, &width);
                printf("Area of Rectangle = %.2f\n", areaOfRectangle(length, width));
                break;

            case 4:
                printf("Enter a number to check Prime or not: ");
                scanf("%d", &num);
                if (isPrime(num))
                    printf("%d is a Prime Number.\n", num);
                else
                    printf("%d is a Odd Number.\n", num);
                break;

            case 5:
                printf("Enter a number to check Armstrong: ");
                scanf("%d", &num);
                if (isArmstrong(num))
                    printf("%d is an Armstrong Number.\n", num);
                else
                    printf("%d is NOT an Armstrong Number.\n", num);
                break;

            case 6:
                printf("Enter number of terms for Fibonacci series: ");
                scanf("%d", &terms);
                fibonacci(terms);
                break;

            case 7:
                printf("Exiting program. Thank you!\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }

    } while (choice != 7);  // Loop continues until user selects Exit

    return 0;
}

// Function Definitions

float simpleInterest(float p, float r, float t) {
    return (p * r * t) / 100;
}

float areaOfCircle(float r) {
    return 3.14159 * r * r;
}

float areaOfRectangle(float l, float b) {
    return l * b;
}

int isPrime(int n) {
    if (n <= 1) return 0;

    int i;
    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0)
            return 0;
    }

    return 1;
}

int isArmstrong(int n) {
    int original = n, sum = 0, digits = 0, temp = n;

    // Count digits
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = n;
    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    return (sum == original);
}

void fibonacci(int n) {
    int a = 0, b = 1, c, i;

    printf("Fibonacci Series: ");
    for (i = 1; i <= n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");
}

