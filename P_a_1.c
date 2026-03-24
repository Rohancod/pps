#include <stdio.h>

int main() {
    FILE *fp;
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    fp = fopen("output.txt", "w");

    if (fp == NULL) {
        printf("Error opening file!");
        return 1;
    }

    fputs(str, fp);
    fclose(fp);

    printf("Data written successfully.\n");
    return 0;
}