#include<stdio.h>

int isArmstrong(int n) {
    int r, c, arm = 0;
    c = n;
    while(c > 0) {
        r = c % 10;
        arm = arm + (r * r * r);
        c = c / 10;
    }
    if(arm == n)
        return 1;   
    else
        return 0;
}


void printArmstrongSeries() {
    int i;
    printf("Armstrong numbers between 1 and 1000 are:\n");
    for(i = 1; i <= 1000; i++) {
        if(isArmstrong(i))
            printf("%d ", i);
    }
}

void main() {
    int num;

    
    printf("Enter a number: ");
    scanf("%d", &num);

    if(isArmstrong(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    
    printf("\n\n");
    printArmstrongSeries();
}

