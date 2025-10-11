#include <stdio.h>

// This program demonstrates variables, constants, and comments in C

void main() {
    // Constant declaration
    const float PI = 3.14159;

    // Variable declarations
    int age = 20;             // integer variable
    char grade = 'A';         // character variable
    float percentage = 89.5;  // float variable

    // Output the values
    printf("Demonstration of Variables, Constants, and Comments in C\n");
    printf("--------------------------------------------------------\n");
    printf("Age (int)        : %d\n", age);
    printf("Grade (char)     : %c\n", grade);
    printf("Percentage (float): %.2f\n", percentage);
    printf("Value of PI (const float): %.5f\n", PI);

}
