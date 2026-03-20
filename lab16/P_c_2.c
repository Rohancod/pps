#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp;
    char word[50], str[50];

    printf("Enter word to search: ");
    scanf("%s", word);

    fp = fopen("test.txt", "r");

    if (fp == NULL)
    {
        printf("File not found");
        return 0;
    }
    int line = 1;

    while (fscanf(fp, "%s", str) != EOF)
    {
            
        if (fgetc(fp) == '\n')
        {
           line++;
        }
        
        if (strcmp(word, str) == 0)
        {
            printf("Word found on line %d", line);
            fclose(fp);
            return 0;
        }
    }

    printf("Word not found");

    fclose(fp);
    return 0;
}