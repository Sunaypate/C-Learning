/*
int     (4 bytes) | %d in printf
float   (4 bytes) | %f in printf
double  (8 bytes) | %lf in printf
char    (1 byte)  | %c in printf
*/

#include <stdio.h>

int main() {
    double num = 12.723423;
    float num2 = 421872;
    printf("num = %.2lf, num2 = %f\n\n", num, num2);

    char letter = 's';
    printf("letter = %c, code = %d\n", letter, letter);

    printf("Size of float: %zu\nSize of double: %zu\nSize of char: %zu", sizeof(num2), sizeof(num), sizeof(letter));
    // %zu is the type used to determine byte total of a type. It actually represents an unsigned long long.
    return 0;
}