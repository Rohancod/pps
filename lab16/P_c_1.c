#include <stdio.h>

int main() {
    FILE *fp;

    fp = fopen("test.txt", "a");

    if (fp == NULL) {
        printf("Error opening file");
        return 0;
    }

    fprintf(fp, "\nThis is appended data.");

    fclose(fp);

    printf("Data appended successfully");

    return 0;
}