// (26K-3076) Task-7
#include <stdio.h>
int main() {
    char item[50];
    float price;
    float totalBill = 0;
    int items = 0;
    int choice;
do {
        printf("Enter food item name");
        scanf(" %[^\n]", item);   
        printf("Enter price of %s ", item);
        scanf("%f", &price);
totalBill += price;
        items++;
printf("Order another item? (1 = Yes, 0 = No): ");
        scanf("%d", &choice);
    } while (choice == 1);
printf("\nTotal bill: %.2f\n", totalBill);
    printf("Number of items ordered: %d\n", items);

    return 0;
}
