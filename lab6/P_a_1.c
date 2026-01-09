#include <stdio.h>

int main()
{
    int n = 10, i = 1;
    while (i <= n)
    {
        if (i % 2 != 0)
            printf("%d ", i);
        i++;
    }

    printf(" \nEnter n ");
    scanf("%d", &n);
    i = 1;

    while (i <= n)
    {
        if (i % 2 != 0)
            printf("%d ", i);
        i++;
    }

    return 0;
}
