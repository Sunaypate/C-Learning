#include <stdio.h>

enum Size {
    Small = 27,
    Medium = 31,
    Large = 35,
    ExtraLarge = 40
} shoeSize;

int main() {
    enum Size shoeSize1 = Small;
    enum Size shoeSize2 = Medium;
    enum Size shoeSize3 = Large;
    enum Size shoeSize4 = ExtraLarge;

    shoeSize = Medium;

    printf("Shoe Size: %d\n", shoeSize1);
    printf("Shoe Size: %d\n", shoeSize2);
    printf("Shoe Size: %d\n", shoeSize3);
    printf("Shoe Size: %d\n", shoeSize4);
    printf("Shoe Size: %d\n", shoeSize);
    return 0;
}