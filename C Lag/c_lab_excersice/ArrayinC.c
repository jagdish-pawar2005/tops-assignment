#include <stdio.h>

int i, j;

// Function to input and print a 1D array
void handle1DArray() {
    int arr[5];

    printf("Enter 5 integers for the 1D array:\n");
    for (i = 0; i < 5; i++) {
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("\n1D Array Elements:\n");
    for (i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
}

// Function to input a 3x3 matrix
void getMatrix(int a[3][3]) {
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}

// Function to print a 3x3 matrix
void printMatrix(int a[3][3]) {
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }
}

// Function to add two 3x3 matrices
void addMatrix(int a[3][3], int b[3][3], int c[3][3]) {
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
}

// Function to calculate sum of all elements in a 3x3 matrix
int sumMatrix(int a[3][3]) {
    int sum = 0;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            sum += a[i][j];
        }
    }
    return sum;
}

int main() {
    int a[3][3], b[3][3], c[3][3];

    // Handle 1D array
    handle1DArray();

    // Input and print two 3x3 matrices
    printf("\nEnter elements for Matrix A:\n");
    getMatrix(a);

    printf("\nMatrix A:\n");
    printMatrix(a);

    printf("\nEnter elements for Matrix B:\n");
    getMatrix(b);

    printf("\nMatrix B:\n");
    printMatrix(b);

    // Add matrices
    addMatrix(a, b, c);

    printf("\nResultant Matrix (A + B):\n");
    printMatrix(c);

    // Sum of all elements in resultant matrix
    printf("\nSum of all elements in Resultant Matrix = %d\n", sumMatrix(c));

    return 0;
}
