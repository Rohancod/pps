#include <stdio.h>

int main()
{
    int choice, n;

    while (1)
    {
        printf("\n1.Factorial\n2.Prime\n3.Odd/Even\n4.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter number: ");
            scanf("%d", &n);
            int f = 1, i = n;
            while (i > 0)
            {
                f *= i;
                i--;
            }
            printf("Factorial = %d\n", f);
            break;

        case 2:
            printf("Enter number: ");
            scanf("%d", &n);
            int j = 2, flag = 1;
            while (j <= n / 2)
            {
                if (n % j == 0){
                    flag = 0;
                    break;
                }
                j++;
            }
            printf(flag ? "Prime\n" : "Not prime\n");
            break;

        case 3:
            printf("Enter number: ");
            scanf("%d", &n);
            printf(n % 2 == 0 ? "Even\n" : "Odd\n");
            break;

        case 4:
            return 0;

        default:
            printf("Invalid choice\n");
        }
    }
}
