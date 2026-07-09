#include <stdio.h>
#include <stdlib.h>


int main() {
    int n = 4;

    int* ptr;

    ptr = (int*)malloc(n*sizeof(int));
    
    if (ptr == NULL) {
        printf("Memory Cannot Be Allocated");
        return 0;
    }

    printf("Allocated Memory\n");
    for (int i = 0; i < n; i++) {
        printf("%p\n", ptr + i);
    }

    n = 6;

    ptr = realloc(ptr, n*sizeof(int));

    printf("Newly Allocated Memory\n");
    for (int i = 0; i < n; i++) {
        printf("%p\n", ptr + i);
    }

    // printf("Enter Input Values:\n");
    // for (int i = 0; i < n; i++) {
    //     scanf("%d", ptr + i);
    // }

    // printf("Input Values:\n");
    // for (int i = 0; i < n; i++) {
    //     printf("%d\n", *(ptr + i));
    // }

    free(ptr);

    return 0;
}