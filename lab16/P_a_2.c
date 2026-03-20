#include <stdio.h>

int main() {
    FILE *fp;
    char ch;

    fp = fopen("test.txt", "r");

    if (fp == NULL) {
        printf("File not found");
        return 0;
    }

        // ch = fgetc(fp);
        // printf("First character in the file: %c\n", ch);
        // // ch = fgetc(fp);
        // // printf("Second character in the file: %c\n", ch);




    while (ch != EOF) {
        ch = fgetc(fp);
        printf("%c", ch);
    }

    fclose(fp);

    return 0;
}