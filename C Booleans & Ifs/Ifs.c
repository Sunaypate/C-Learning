#include <stdio.h>


int main() {
    int age;

    printf("Enter your Age: ");
    scanf("%d", &age);

    if (age >= 18) { //if statements are essentially the exact same thing as java.
        printf("You can vote! (good job)");
    }
    else {
        printf("Sorry, you can't vote yet.");
    }
    return 0;
}