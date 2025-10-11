#include<stdio.h>

int main() {
    int a[10], i, sum = 0;

    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    
    printf("\nEven numbers entered are:\n");
    
    for (i = 0; i < 10; i++) {
    
        if (a[i] % 2 == 0) {
            printf("%d ", a[i]);
            sum = sum + a[i]; 
        }
    }
    
    printf("\n\nSum of even numbers = %d\n", sum);
    
    return 0;
}
