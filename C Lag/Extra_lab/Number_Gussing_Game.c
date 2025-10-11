#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts = 0;
    srand(time(0));              // Seed random number generator
    number = rand() % 100 + 1;   // Random number between 1 and 100

    printf("Guess the number (1-100):\n");

    while (1) {
        scanf("%d", &guess);
        attempts++;

        if (guess == number) {
            printf("Correct! You guessed it in %d attempts.\n", attempts);
            break;
        } else if (guess < number)
            printf("Too low! Try again:\n");
        else
            printf("Too high! Try again:\n");
    }

    return 0;
}

