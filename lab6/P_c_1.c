
#include <stdio.h>
void main()
{
    int n, rem = 0, i = 1, rev = 0;
    printf("enter a number");
    scanf("%d", &n);
    while (n > 0)
    {
        rem = n % 2;
        rev = rev + rem * i;
        printf("%d", rev);
        n = n / 2;
        i = i * 10;
    }
}


/* 
10
rem = 2%2 = 0  
rev = 10 + 0*20 = 10
output = 01010
0
i = 20


*/

