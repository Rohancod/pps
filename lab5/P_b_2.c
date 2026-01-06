#include<stdio.h>
#include<math.h>

int main() {
    float a, b, c, d, r1, r2, real, imag;

    printf("Enter coefficient a: ");
    scanf("%f", &a);

    printf("Enter coefficient b: ");
    scanf("%f", &b);

    printf("Enter constant c: ");
    scanf("%f", &c);

    d = b*b - 4*a*c;   


    switch (d > 0) {

        case 1:     
            r1 = (-b + sqrt(d)) / (2*a);
            r2 = (-b - sqrt(d)) / (2*a);
            printf("Real and distinct roots:\n");
            printf("r1 = %.2f  r2 = %.2f", r1, r2);
            break;

        case 0:     
            switch (d == 0) {
                case 1:     
                    r1 = r2 = -b / (2*a);
                    printf("Real and equal roots:\n");
                    printf("r1 = r2 = %.2f", r1);
                    break;

                case 0:     
                    real = -b / (2*a);
                    imag = sqrt(-d) / (2*a);
                    printf("Imaginary roots:\n");
                    printf("%.2f + %.2fi\n", real, imag);
                    printf("%.2f - %.2fi", real, imag);
            }
    }

    return 0;
}




