#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

int isLeap(int year) {
    if (year % 400 == 0)
        return 1;
    if (year % 100 == 0)
        return 0;
    if (year % 4 == 0)
        return 1;
    return 0;
}

int main() {
    struct Date d;
    int valid = 1;

    printf("Enter day month year: ");
    scanf("%d %d %d", &d.day, &d.month, &d.year);

    if (d.year < 0 || d.month < 1 || d.month > 12 || d.day < 1)
        valid = 0;

    else {
        int maxDays;

        if (d.month == 2) {
            if (isLeap(d.year))
                maxDays = 29;
            else
                maxDays = 28;
        }
        else if (d.month==4 || d.month==6 || d.month==9 || d.month==11)
            maxDays = 30;
        else
            maxDays = 31;

        if (d.day > maxDays)
            valid = 0;
    }

    if (valid)
        printf("Valid Date");
    else
        printf("Invalid Date");

    return 0;
}