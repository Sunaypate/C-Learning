#include <stdio.h>
#include <stdlib.h>

int main() {
    int lower;
    int upper;

    printf("Welcome to Number Guesser, please select a lower and upper bound for your random number:\n");
    scanf("%d%d", &lower, &upper);

    int randval = (rand() % (upper - lower + 1)) + lower;
    int counter = 1;
    int guess;

    printf("Submit a guess for the random value: ");
    while (guess != randval) {
        scanf("%d", &guess);

        if (guess == randval) {
            printf("Congrats, You Guessed The Value In %d Guesses!", counter);
        }
        else if (guess < randval) {
            printf("Your Guess Is Too Low: ");
        }
        else {
            printf("Your Guess Is Too High: ");
        }
        counter++;
    }

    return 0;
}