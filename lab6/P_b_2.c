#include <stdio.h>

int main() {
    float r, volume;

    printf("Enter radius (0 or -ve to stop): ");
    scanf("%f", &r);

    while (r > 0) {
        volume = (4.0/3.0) * 3.1416 * r*r*r;
        printf("Volume = %.2f\n", volume);

        printf("Enter radius: ");
        scanf("%f", &r);
    }

    return 0;
}
