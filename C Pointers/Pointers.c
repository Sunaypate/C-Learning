#include <stdio.h>

int main() {

    int num = 57;

    int* numPTR = &num; //Add an * before a type to indicate the variable will point to another variable of the specified type.

    printf("%p\n", &num); //Adding an & before a variable will then convert it to its location in memory.
    printf("%p\n", numPTR); //It can also be seen that pointer value is the same adress in memory.

    printf("Value: %d\n", *numPTR); //Use an * to get the value of the variable a pointer is pointing to.

    *numPTR = 69; //This changes the value of num, as we are reassigning the value that is being pointed to.
    printf("New Value: %d\n", num);
    
    return 0;
}

/*
int num;
int* ptr = &num;

num: the value of the variable
ptr: the adress of the variable
&num: the adress of the variable
*ptr: the value located in the adress (the value of the variable)
*/