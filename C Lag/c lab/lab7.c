#include <stdio.h>

int main() {
    int i;
    for(i = 1; i <= 10; i++) {
        if(i == 3) // Skip printing 3
            continue;

        if(i == 5) // Stop loop at 5
            break;

        printf("\n %d", i);
    }

    
}

