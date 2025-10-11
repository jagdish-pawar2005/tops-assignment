#include <stdio.h>

void add2x2();
void add3x3();
void multiply3x3();

void main() {
    int choice;

    printf("Matrix Operations Menu:\n");
    printf("1. 2x2 Matrix Addition\n");
    printf("2. 3x3 Matrix Addition\n");
    printf("3. 3x3 Matrix Multiplication\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            add2x2();
            break;
        case 2:
            add3x3();
            break;
        case 3:
            multiply3x3();
            break;
        default:
            printf("\nInvalid Choice!\n");
    }

    
}

// Function to add 2x2 matrices
void add2x2() {
    int a[2][2], b[2][2], sum[2][2];
    int i, j;

    printf("\nEnter elements of first 2x2 matrix:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter elements of second 2x2 matrix:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("b[%d][%d] = ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    // Addition
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("\nResultant Matrix (Addition):\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
}

// Function to add 3x3 matrices
void add3x3() {
    int a[3][3], b[3][3], sum[3][3];
    int i, j;

    printf("\nEnter elements of first 3x3 matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter elements of second 3x3 matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("b[%d][%d] = ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    // Addition
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("\nResultant Matrix (Addition):\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
}

// Function to multiply 3x3 matrices
void multiply3x3() {
    int a[3][3], b[3][3], Multiplication[3][3];
    int i, j, k;

    printf("\nEnter elements of first 3x3 matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter elements of second 3x3 matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("b[%d][%d] = ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    // Multiplication
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            Multiplication[i][j] = 0;
            for(k = 0; k < 3; k++) {
                Multiplication[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("\nResultant Matrix (Multiplication):\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t", Multiplication[i][j]);
        }
        printf("\n");
    }
}

