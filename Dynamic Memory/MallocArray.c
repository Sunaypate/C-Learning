#include <stdio.h>
#include <stdlib.h>

enum ExitCodes {
    Passed,
    MemoryFail
};

int main() {
    int* values;

    values = (int*)malloc(4 * sizeof(int));
    if (values == NULL) {
        printf("Memory Failed to Allocate");
        return MemoryFail;
    }

    printf("Please Enter Four Integer Values:\n");
    for (int i = 0; i < 4; i++) {
        scanf("%d", (values + i));
    }
    printf("Values Entered:\n");
    for (int i = 0; i < 4; i++) {
        printf("%d @ %p\n", *(values+i), (values+i));
    }

    printf("\nResizing array to 6...\n");
    values = realloc(values, 6*sizeof(int));
    *(values + 4) = 32;
    *(values + 5) = 59;
    if (values == NULL) {
        printf("Memory Failed to Allocate");
        return MemoryFail;
    }
   
    printf("\nFinal Array\n");
    for (int i = 0; i < 6; i++) {
        printf("%d @ %p\n", *(values+i), (values+i));
    }

    free(values);
    return Passed;
}