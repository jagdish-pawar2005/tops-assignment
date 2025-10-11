#include <stdio.h>

void main() {
    int i;

    // Part 1: Using break
    printf("Using break statement:\n");
    for(i = 1; i <= 10; i++) {
        if(i == 5) {
            break;   // stop loop when i = 5
        }
        printf("%d ", i);
    }

    // Part 2: Using continue
    printf("\n\nUsing continue statement:\n");
    for(i = 1; i <= 10; i++) {
        if(i == 3) {
            continue;   // skip printing when i = 3
        }
        printf("%d ", i);
    }

}
