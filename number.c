#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int random, guess, count = 0;

    srand(time(0)); 
    random = rand() % 100;
    printf("Guess a number between 0 and 99\n");

    while (1) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        count++;

        if (guess > random) {
            printf("Too high! Try a lower number.\n");
        } else if (guess < random) {
            printf("Too low! Try a higher number.\n");
        } else {
            printf("Correct! You guessed it in %d tries.\n", count);
            break;
        }
    }

    return 0;
}
