#include <stdio.h>

void main() {
    int num, N,i;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Enter the range (N): ");
    scanf("%d", &N);

    printf("\nMultiplication Table of %d (1 to %d):\n", num, N);

    for ( i = 1; i <= N; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    
}

