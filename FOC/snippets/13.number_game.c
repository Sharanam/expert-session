#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int randomNumber, userGuess, attempts;
    char playAgain;

    // Seed random number generator
    srand(time(0));

    // Game loop
    do {
        randomNumber = (rand() % 100) + 1;
        attempts = 10;

        printf("Guess the number (between 1 and 100):\n");

        // Guessing loop
        for (int i = 1; i <= attempts; i++) {
            printf("Attempt %d: ", i);
            scanf("%d", &userGuess);

            // decision-making: Validate user input
            if (userGuess < 1 || userGuess > 100) {
                printf("Invalid guess! Please enter a number between 1 and 100.\n");
                continue;
            }

            // Decision-making: Compare user guess with random number
            if (userGuess == randomNumber) {
                printf("Congratulations! You guessed the correct number: %d\n", randomNumber);
                break; // Exit the loop when guessed correctly
            } else if (userGuess < randomNumber) {
                printf("Too low! Try again.\n");
            } else {
                printf("Too high! Try again.\n");
            }
        }

        // Decision-making: Handle exhausted attempts
        if (userGuess != randomNumber) {
            printf("Sorry, you've used all attempts. The number was: %d\n", randomNumber);
        }

        // input/output: Play again?
        printf("Do you want to play again? (y/n): ");
        scanf(" %c", &playAgain);

        // Decision-making: Handle play again
        if (playAgain == 'n' || playAgain == 'N') {
            printf("Thanks for playing! Goodbye.\n");
            break;
        }

    } while (1); // Infinite loop

    return 0;
}