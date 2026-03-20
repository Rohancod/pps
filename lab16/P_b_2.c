#include <stdio.h>

int main() {
    FILE *fp1, *fp2;
    char ch;

    fp1 = fopen("test.txt", "r");
    fp2 = fopen("copy.txt", "w");

    if (fp1 == NULL || fp2 == NULL) {
        printf("Error opening file");
        return 0;
    }

    while ((ch = fgetc(fp1)) != EOF) {
        fputc(ch, fp2);
    }

    printf("File copied successfully");

    fclose(fp1);
    fclose(fp2);

    return 0;
}