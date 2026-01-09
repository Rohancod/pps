#include <stdio.h>

int main() {
    float n, x, root;

    printf("Enter number: ");
    scanf("%f", &n);

    x = n;
    root = 0.5 * (x + n / x);

    while (root != x) {
        x = root;
        root = 0.5 * (x + n / x);
    }

    printf("Square root = %.4f", root);
    return 0;
}
