#include <stdio.h>

int main() {
    FILE *fp;
    char str[100];

    printf("Enter text to append: ");
    fgets(str, sizeof(str), stdin);

    fp = fopen("log.txt", "a");

    if (fp == NULL) {
        printf("Error opening file!");
        return 1;
    }

    fputs(str, fp);
    fclose(fp);

    printf("Data appended successfully.\n");
    return 0;
}