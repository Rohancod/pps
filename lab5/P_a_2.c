#include <stdio.h>

int main()
{
    int a[5], i, choice;
    int smallest, largest, sum = 0;

    printf("Enter 5 numbers: ");
    for (i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    printf("1.Smallest  2.Largest  3.Sum  4.Average\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    smallest = a[0];
    largest = a[0];

    for (i = 0; i < 5; i++)
    {
        if (a[i] < smallest)
            smallest = a[i];
        if (a[i] > largest)
            largest = a[i];
        sum += a[i];
    }

    switch (choice)
    {
    case 1:
        printf("Smallest = %d", smallest);
        break;
    case 2:
        printf("Largest = %d", largest);
        break;
    case 3:
        printf("Sum = %d", sum);
        break;
    case 4:
        printf("Average = %.2f", sum / 5.0);
        break;
    default:
        printf("Invalid choice");
    }

    return 0;
}
