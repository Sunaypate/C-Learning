#include <stdio.h> //This is importing a file
#include <stdbool.h> //Needed to use boolean variables
#include <math.h> //Needed to perform advanced math

void function() {
    //Function syntax
}

struct Cat {
    double weight;
    double height;
    int age;
}; //Standard Struct Syntax

typedef struct Video {
    double length;
    int views;
} video; //typedef keyword is needed to add a custom struct "type name" at the end that can be used shorthanded.

enum Flavor {
    Sweet,
    Spicy,
    Sour,
    Savory,
    Bitter = 10 //Can manually assign a integral value
} foodFlavor; //Declaration of a flavor variable within the enum

int main() {
    int intValue = 0;
    float floatingPointValue = 0.0;
    double doubleSizeFloat = 0.0;
    char Letter = 'a';
    char String[] = "This is a string"; //Technically a character array
    bool boolean = true;

    struct Cat sleepy = {.weight = 5.11, .height = 5.98, .age = 3};
    video rblx;
    rblx.length = 92.4;
    rblx.views = 1000000;

    enum Flavor snack = Savory;
    foodFlavor = Spicy; 

    int* pointer = &intValue; //This is creating a pointer

    double doubleArray[5] = {9.2, 4.7, 5.3, 2.1, 6.9}; //Creating a sized array
    int Int2dArray[2][2] = {{1, 2}, 
                            {3, 4}}; //Created a 2d array [R][C]


    // This is a one-line comment
    /* This is
     a
    multiline comment */


    if (intValue == *pointer) {
        //Execute condition
    }
    intValue <= 0 ? printf("True") : printf("False"); //Ternary Operator
    switch (intValue) {
        case 1:
        //stuff for when intValue = 1
        break; //end case
        
        case 2:
        case 3:
        //Multiple cases leading to same execution
        break;

        default:
        //Executes when intValue matches none of the cases.
        //No break needed
    }


    for (int i = 0; i < 10; i++) {
        // For loop syntax
    }

    int i = 0;
    while (i < 10) {
        if (i == 5) {
            i = 7;
            continue; // Skips current cycle and moves to next loop
        }
        i++;
        // While loop syntax
    }



    printf("This is how to print to the terminal");
    scanf("%d", pointer); //Gets user input and saves it in intValue

    return 0; //Return code for C files. 0 means good
}