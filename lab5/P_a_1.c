#include <stdio.h>

int main() {
    int num;

    printf("Enter num1: ");
    scanf("%d", &num);

    switch (num) {
        case 10:
            printf("Square = %d", num * num);
            break;

        case 9:
            printf("Enter new value: ");
            scanf("%d", &num);
            printf("New value = %d", num);
            break;

        case 2:
        case 3:
            printf("Result = %d", num * 99);
            break;

        default:
            printf("No operation");
    }

    return 0;
}
