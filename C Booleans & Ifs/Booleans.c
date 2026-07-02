#include <stdio.h>
#include <stdbool.h> // This is required in order to perform boolean logic.

int main() {

    bool value1 = true;
    bool value2 = false;

    bool compare;

    // printf("%d\n", value1);
    // printf("%d", value2);

    // compare = 3 > 5;
    // printf("%d", compare);

    bool result = ((value1 && value2) || !(value1) || (value1));
    printf("%d", result);
}