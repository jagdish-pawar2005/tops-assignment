#include <stdio.h>

void main() {
    int i;

    // 1. Using while loop
    printf("Using while loop:\n");
    i = 1;
    while(i <= 10) {
        printf("\n %d ", i);
        i++;
    }

    // 2. Using for loop
    printf("\n\nUsing for loop:\n");
    for(i = 1; i <= 10; i++) {
        printf("\n %d ", i);
    }

    // 3. Using do-while loop
    printf("\n\nUsing do-while loop:\n");
    i = 1;
    do {
        printf("\n %d ", i);
        i++;
    } while(i <= 10);

    
}
