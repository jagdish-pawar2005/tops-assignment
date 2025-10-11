#include <stdio.h>

void main() {
    int num = 10;       // a normal integer variable
    int *ptr;           // pointer declaration

    ptr = &num;         // storing address of num in ptr

    printf("Original value of num: %d\n", num);
    printf("Address of num: %p\n", &num);
    printf("Value stored in ptr (address of num): %p\n", ptr);
    printf("Value pointed by ptr (value of num): %d\n", *ptr);

    // Modifying the value of num using pointer
    *ptr = 25;

    printf("\nAfter modifying through pointer:\n");
    printf("New value of num: %d\n", num);
    printf("Value pointed by ptr: %d\n", *ptr);

    
}
