#include <stdio.h>

int main() {
    /*
    int age;

    printf("Enter Input (Integer Number)");
    scanf("%d", &age); //& before a variable allows you to get its adress in memory.

    printf("\nAge = %d\n", age);
    */

    double num;
    char letter;

    printf("Enter a double and character");
    scanf("%lf %c", &num, &letter);

    printf("\nNum: %lf\nLetter: %c", num, letter);
    return 0;
}