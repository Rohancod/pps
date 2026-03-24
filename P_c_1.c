#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    int key = 5;

    fp = fopen("text.txt", "r+");

    if (fp == NULL) {
        printf("File not found!");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        fseek(fp, -1, SEEK_CUR);
        fputc(ch ^ key, fp);
    }

    fclose(fp);

    printf("File encrypted/decrypted.\n");
    return 0;
}