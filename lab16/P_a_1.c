#include <stdio.h>

int main() {
    FILE *fp;

    fp = fopen("test.txt", "w");

    if (fp == NULL) {
        printf("File cannot be created");
        return 0;
    }

    fprintf(fp, "this is file handling in C.");

    fclose(fp);

    printf("Data written successfully");
    return 0;
}