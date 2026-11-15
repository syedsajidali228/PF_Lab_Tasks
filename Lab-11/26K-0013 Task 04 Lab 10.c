#include <stdio.h>

struct Product
{
    int id;
    char name[50];
    char category[50];
    float price;
    int stockQuantity;
};

void displayProductDetails(struct Product product)
{
    float finalPrice = product.price * 0.95f;

    printf("\nProduct Details\n");
    printf("ID: %d\n", product.id);
    printf("Name: %s\n", product.name);
    printf("Category: %s\n", product.category);
    printf("Price: %.2f PKR\n", product.price);
    printf("Stock: %d\n", product.stockQuantity);
    printf("Final Price after 5%% discount: %.2f PKR\n", finalPrice);
}

int main()
{
    struct Product product1 = {101, "Laptop", "Electronics", 100000.0f, 10};
    struct Product product2 = {102, "Headphones", "Accessories", 5000.0f, 25};

    displayProductDetails(product1);
    displayProductDetails(product2);

    return 0;
}
