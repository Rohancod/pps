#include <stdio.h>

int main() {
    FILE *in, *out;
    char ch, prev;
    int count = 1;

    in = fopen("input.txt", "r");
    out = fopen("compressed.txt", "w");

    if (in == NULL || out == NULL) {
        printf("File error!");
        return 1;
    }

    prev = fgetc(in);

    while ((ch = fgetc(in)) != EOF) {
        if (ch == prev)
            count++;
        else {
            fprintf(out, "%c%d", prev, count);
            prev = ch;
            count = 1;
        }
    }

    fprintf(out, "%c%d", prev, count);

    fclose(in);
    fclose(out);

    printf("File compressed.\n");
    return 0;
}