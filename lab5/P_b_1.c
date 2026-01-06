#include <stdio.h>

int main()
{
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    switch (n > 0)
    {
    case 1:
        printf("Positive");
        break;
    case 0:
        switch (n < 0)
        {
        case 1:
            printf("Negative");
            break;
        case 0:
            printf("Zero");
            break;
        }
    }

    return 0;
}
