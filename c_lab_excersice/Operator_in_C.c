#include <stdio.h>

int main() {
    int a, b;

    // Input two integers from the user
    printf("Enter first integer: ");
    scanf("%d", &a);

    printf("Enter second integer: ");
    scanf("%d", &b);

    // Arithmetic Operations
    printf("Arithmetic Operations:\n");
    printf("Sum: %d + %d = %d\n", a, b, a + b);
    printf("Difference: %d - %d = %d\n", a, b, a - b);
    printf("Product: %d * %d = %d\n", a, b, a * b);
    if (b != 0)
        printf("Quotient: %d / %d = %d\n", a, b, a / b);
    else
        printf("Quotient: Division by zero error\n");
    if (b != 0)
        printf("Modulus: %d %% %d = %d\n", a, b, a % b);
    else
        printf("Modulus: Division by zero error\n");

    // Relational Operations
    printf("\nRelational Operations:\n");
    printf("%d == %d : %s\n", a, b, (a == b) ? "True" : "False");
    printf("%d != %d : %s\n", a, b, (a != b) ? "True" : "False");
    printf("%d > %d : %s\n", a, b, (a > b) ? "True" : "False");
    printf("%d < %d : %s\n", a, b, (a < b) ? "True" : "False");
    printf("%d >= %d : %s\n", a, b, (a >= b) ? "True" : "False");
    printf("%d <= %d : %s\n", a, b, (a <= b) ? "True" : "False");

    // Logical Operations
    // Example logical operations combining conditions
    printf("\nLogical Operations:\n");
    printf("(%d > 0) && (%d > 0) : %s\n", a, b, (a > 0 && b > 0) ? "True" : "False");
    printf("(%d > 0) || (%d > 0) : %s\n", a, b, (a > 0 || b > 0) ? "True" : "False");
    printf("! (%d > 0) : %s\n", a, (!(a > 0)) ? "True" : "False");

    return 0;
}
