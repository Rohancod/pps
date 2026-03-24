//Write a C program that merges two text files (file1.txt and file2.txt) into a third file (merged.txt).

#include <stdio.h>

int main() {
    FILE *fp1, *fp2, *fp3;
    char ch;

    fp1 = fopen("file1.txt", "r");
    fp2 = fopen("file2.txt", "r");
    fp3 = fopen("merged.txt", "w");

    if (fp1 == NULL || fp2 == NULL || fp3 == NULL) {
        printf("Error opening files!");
        return 1;
    }

    // Copy contents of file1.txt to merged.txt
    while ((ch = fgetc(fp1)) != EOF) {
        fputc(ch, fp3);
    }

    // Copy contents of file2.txt to merged.txt
    while ((ch = fgetc(fp2)) != EOF) {
        fputc(ch, fp3);
    }

    fclose(fp1);
    fclose(fp2);
    fclose(fp3);

    printf("Files merged successfully.\n");
    return 0;
}