#include <stdio.h>
int i;

int calculateSum(int arr[], int n) {
    int sum = 0;
    for( i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}


float calculateAverage(int arr[], int n) {
    int sum = calculateSum(arr, n);  // reuse sum function
    return (float)sum / n;
}

void main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d numbers:\n", n);
    for( i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    int sum = calculateSum(arr, n);
    float avg = calculateAverage(arr, n);

    printf("\nSum of array elements = %d\n", sum);
    printf("Average of array elements = %.2f\n", avg);

    
}

