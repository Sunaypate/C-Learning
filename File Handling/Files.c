#include <stdio.h>

int main() {
    // FILE* fptr;

    // fptr = fopen("test.txt", "r");
    // if (fptr != NULL) {
    //     printf("Fille Accessed Sucessfully\n");
    //     char content[1000];

    //     while (fgets(content, 1000, fptr)) {
    //         printf("%s", content);
    //     }
    // }
    // else {
    //     printf("File Could No Be Accessed");
    // }
    // fclose(fptr);

    FILE* newfile = fopen("newFile.txt", "w");
    printf("Created File\n");

    fputs("Writing to file...\n", newfile);
    fputs("Done in C btw ;)", newfile);

    fclose(newfile);
    printf("Closed File");

    return 0;
}