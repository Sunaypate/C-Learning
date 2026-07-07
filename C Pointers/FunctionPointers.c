#include <stdio.h>

int* addNums(int* num1, int* num2, int* sum) {
    
    *sum = *num1 + *num2;
    return sum;
}
int main() {
    int number1 = 32;
    int number2 = 18;
    int sum;

    int* result = addNums(&number1, &number2, &sum);

    printf("Number: %d\nLocation: %p\nAlso at: %d %p", *result, result, sum, &sum);

    return 0;
}