#include <stdio.h>

int main() {
    int num = 10;
    int *ptr;

    ptr = &num;       // Pointer stores address of num
    *ptr = 20;        // Modify value of num using pointer

    printf("Modified value of num: %d\n", num); 

    return 0;
}

