#include <stdio.h>

int main()
{
    int type, spec;
    float bill = 0;

    printf("1.General Checkup\n2.Specialist\n3.Surgery\n4.Emergency\n");
    printf("Enter treatment type: ");
    scanf("%d", &type);

    switch (type)
    {

    case 1:
        bill = 300;
        break;

    case 2:
        printf("1.Cardiology  2.Dermatology  3.Orthopedic\n");
        printf("Enter specialty: ");
        scanf("%d", &spec);

        switch (spec)
        {
        case 1:
            bill = 1000;
            break;
        case 2:
            bill = 800;
            break;
        case 3:
            bill = 900;
            break;
        default:
            printf("Invalid specialty");
            return 0;
        }
        break;

    case 3:
        printf("1.Minor  2.Major\n");
        scanf("%d", &spec);

        switch (spec)
        {
        case 1:
            bill = 5000;
            break;
        case 2:
            bill = 15000;
            break;
        default:
            printf("Invalid surgery type");
            return 0;
        }
        break;

    case 4:
        bill = 2000;
        break;

    default:
        printf("Invalid category");
        return 0;
    }

    printf("Total Bill = %.2f", bill);
    return 0;
}
