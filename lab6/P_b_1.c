#include <stdio.h>

int main() {
    int n, i = 0;
    float num, sumPos = 0, sumNeg = 0;
    int cPos = 0, cNeg = 0;

    printf("How many numbers? ");
    scanf("%d", &n);

    while (i < n) {
        scanf("%f", &num);

        if (num > 0) {
            sumPos += num;
            cPos++;
        } else if (num < 0) {
            sumNeg += num;
            cNeg++;
        }
        i++;
    }

    printf("Average of positive = %.2f\n", sumPos/cPos );
    printf("Average of negative = %.2f\n",  sumNeg/cNeg);

    return 0;
}
