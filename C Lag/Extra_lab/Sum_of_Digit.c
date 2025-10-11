#include <stdio.h>

void main() {
    int num, sum = 0, rev = 0, digit;

    printf("Enter an integer: ");
    scanf("%d", &num);

    int temp = num; // store original number

    while (temp > 0) {
        digit = temp % 10;       // extract last digit
        sum += digit;            // add digit to sum
        rev = rev * 10 + digit;  // build reverse number
        temp /= 10;              // remove last digit
    }

    printf("Sum of digits of %d = %d\n", num, sum);
    printf("Reverse of %d = %d\n", num, rev);

    
}

