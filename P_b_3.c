//Write a C program that creates a simple structure of student records (name, ID, grade) and stores them in a file (students.dat).
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[50];
    int id;
    float grade;
};

int main() {
    FILE *fp;
    struct Student s;

    fp = fopen("students.dat", "wb");

    if (fp == NULL) {
        printf("Error opening file!");
        return 1;
    }


    strcpy(s.name, "Rohan");
    s.id = 1;
    s.grade = 85.5;
    //The fwrite() standard library function used to write blocks of binary data from memory to a file stream
    fwrite(&s, sizeof(struct Student), 1, fp);

    strcpy(s.name, "Shyam");
    s.id = 2;
    s.grade = 90.0;

    fwrite(&s, sizeof(struct Student), 1, fp);

    fclose(fp);

    printf("Student records stored successfully.\n");
    return 0;
}