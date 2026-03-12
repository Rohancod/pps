#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks[5];
};

int main() {
    struct Student s[3];
    int i, j;
    float total, average;

    for (i = 0; i < 3; i++) {
        printf("\nEnter details of Student %d\n", i+1);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Roll No: ");
        scanf("%d", &s[i].roll_no);

        total = 0;
        printf("Enter 5 marks:\n");
        for (j = 0; j < 5; j++) {
            scanf("%f", &s[i].marks[j]);
            total += s[i].marks[j];
        }

        average = total / 5;

        printf("Total = %.2f\n", total);
        printf("Average = %.2f\n", average);
    }

    return 0;
}