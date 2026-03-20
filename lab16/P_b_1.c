#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    int charCount = 0, wordCount = 0, lineCount = 0;

    fp = fopen("test.txt", "r");

    if (fp == NULL) {
        printf("File not found");
        return 0;
    }

    while (ch != EOF) {
        ch = fgetc(fp);
        charCount++;

        if (ch == ' ' || ch == '\n')
            wordCount++;

        if (ch == '\n')
            lineCount++;
    }

    printf("Characters = %d\n", charCount);
    printf("Words = %d\n", wordCount + 1);
    printf("Lines = %d\n", lineCount + 1);

    fclose(fp);

    return 0;
}