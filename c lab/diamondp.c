#include <stdio.h>

void main() {
    int n = 5;  
    int i, j;

    
    for (i = 1; i <= n; i++) {
        // print spaces
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // print stars
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    
    for (i = n - 1; i >= 1; i--) {
        
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    
}
