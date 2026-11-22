
/*
Name: Syed Sajid Ali
Lab: 12
Lab Work: 11
Task: 01
*/


#include <stdio.h>
#include <stdlib.h>

int main() {
    int category_count;
    int *stock;
    int total_stock = 0;
    int lowest_index = 0;
    int update_index;
    int update_stock;
    float average_stock;

    printf("Enter number of book categories: ");
    scanf("%d", &category_count);

    stock = (int *)malloc(category_count * sizeof(int));

    if (stock == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Get stock for each category
    for (int index = 0; index < category_count; index++) {
        printf("Enter stock for category %d: ", index);
        scanf("%d", &stock[index]);
        total_stock += stock[index];

        if (stock[index] < stock[lowest_index]) {
            lowest_index = index;
        }
    }

    average_stock = (float)total_stock / category_count;

    printf("\nTotal stock: %d\n", total_stock);
    printf("Average stock: %.2f\n", average_stock);
    printf("Category index with lowest stock: %d\n", lowest_index);

    // Update one category
    printf("\nEnter category index to update: ");
    scanf("%d", &update_index);

    printf("Enter new stock: ");
    scanf("%d", &update_stock);

    stock[update_index] = update_stock;

    printf("Updated stock for category %d: %d\n",
           update_index, stock[update_index]);

    // Free the dynamic memory
    free(stock);

    return 0;
}
