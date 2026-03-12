#include <stdio.h>
#include <string.h>

struct Item {
    int item_code;
    char item_name[50];
    int quantity;
    float price;
};

int main() {
    struct Item items[100];
    int n = 0, choice, i, code;
    float totalCost;

    while (1) {
        printf("\n1.Add Item\n2.Update Item\n3.View Items\n4.Total Cost\n5.Exit\n");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("Enter item code, name, quantity, price: ");
            scanf("%d %s %d %f", &items[n].item_code,
                  items[n].item_name,
                  &items[n].quantity,
                  &items[n].price);
            n++;
            break;

        case 2:
            printf("Enter item code to update: ");
            scanf("%d", &code);
            for (i = 0; i < n; i++) {
                if (items[i].item_code == code) {
                    printf("Enter new quantity and price: ");
                    scanf("%d %f", &items[i].quantity, &items[i].price);
                }
            }
            break;

        case 3:
            for (i = 0; i < n; i++)
                printf("%d %s %d %.2f\n",
                       items[i].item_code,
                       items[i].item_name,
                       items[i].quantity,
                       items[i].price);
            break;

        case 4:
            totalCost = 0;
            for (i = 0; i < n; i++)
                totalCost += items[i].quantity * items[i].price;

            printf("Total Cost = %.2f\n", totalCost);
            break;

        case 5:
            return 0;
        }
    }
}