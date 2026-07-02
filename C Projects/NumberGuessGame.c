#include <stdio.h>
#include <stdlib.h>

int main() {
    int lower;
    int upper;

    printf("Welcome to Number Guesser, please select a lower and upper bound for your random number:\n");
    scanf("%d%d", &lower, &upper);

    int randval = (rand() % (upper - lower + 1)) + lower;
    int guess;
    
    return 0;
}