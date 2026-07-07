#include <stdio.h>
#include <limits.h>

int main() {
    int numbers[5] = {24, 71, 18, -4, 43};
    int largestValue = INT_MIN;
    int* largestLocation;
    size_t numbersLength = sizeof(numbers) / sizeof(numbers[0]);

    for (int i = 0; i < numbersLength; i++) {
        int currNumber = *(numbers + i);
        if (currNumber > largestValue) {
            largestValue = currNumber;
            largestLocation = (numbers + i);
        }
        else {
            continue;
        }
    }
    printf("Largest Value: %d\nLocated at: %p", largestValue, largestLocation);
    
    return 0;
}