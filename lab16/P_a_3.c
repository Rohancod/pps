//Write a C program that appends a string entered by the user to the end of an existing file (log.txt).


#include <stdio.h>
int main() {
    FILE *fp;
    char str[100];

    printf("Enter a string to append: ");
    gets(str);

    fp = fopen("test.txt", "a");

    if (fp == NULL) {
        printf("File cannot be opened");
        return 0;
    }

    fprintf(fp, "%s", str);

    fclose(fp);

    printf("String appended successfully");
    return 0;
}