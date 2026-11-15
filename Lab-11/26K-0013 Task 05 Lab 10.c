#include <stdio.h>

struct Item
{
    int id;
    char name[50];
    int quantity;
    float unitPrice;
};

int main()
{
    struct Item items[5];
    int searchID;
    int found = 0;
    float totalInventoryValue = 0.0f;

    printf("Enter details for 5 items:\n");

    for (int index = 0; index < 5; index++)
    {
        printf("\nItem %d\n", index + 1);

        printf("ID: ");
        scanf("%d", &items[index].id);

        printf("Name: ");
        scanf("%49s", items[index].name);

        printf("Quantity: ");
        scanf("%d", &items[index].quantity);

        printf("Unit Price: ");
        scanf("%f", &items[index].unitPrice);

        totalInventoryValue += items[index].quantity * items[index].unitPrice;
    }

    printf("\nTotal Inventory Value = %.2f PKR\n", totalInventoryValue);

    printf("\nEnter Item ID to search: ");
    scanf("%d", &searchID);

    for (int index = 0; index < 5; index++)
    {
        if (items[index].id == searchID)
        {
            printf("\nItem Found\n");
            printf("ID: %d\n", items[index].id);
            printf("Name: %s\n", items[index].name);
            printf("Quantity: %d\n", items[index].quantity);
            printf("Unit Price: %.2f PKR\n", items[index].unitPrice);
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("Item not found.\n");
    }

    return 0;
}
