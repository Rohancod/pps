//Write a C program that counts the number of words in a file (file.txt). A word is defined as a sequence of characters separated by spaces or newlines.

#include <stdio.h>
int main() {
    FILE *fp;
    char ch;
    int wordCount = 0;

    fp = fopen("file.txt", "r");

    if (fp == NULL) {
        printf("File not found!");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        if (ch == ' ' || ch == '\n') {
            wordCount++;
        }
    }

    // If the file is not empty, add one to count the last word
    if (wordCount > 0) {
        wordCount++;
    }

    fclose(fp);

    printf("Number of words in the file: %d\n", wordCount);
    return 0;
}