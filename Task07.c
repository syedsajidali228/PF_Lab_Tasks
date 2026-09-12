#include <stdio.h>

int main() {
    double data_used, price_per_gb;

    printf("=== Task 7: Workstation Data Usage & Cost Calculator ===\n");
    printf("Enter Data Used (GB): ");
    scanf("%lf", &data_used);
    printf("Enter Price per GB: ");
    scanf("%lf", &price_per_gb);

    if (data_used < 0 || price_per_gb < 0) {
        printf("Invalid input values! Data usage and price must be non-negative.\n");
        return 1;
    }

    double basic_cost = data_used * price_per_gb;
    double discount_rate = 0.0;

    if (data_used < 50) {
        discount_rate = 0.0;
    } else if (data_used >= 50 && data_used <= 99) {
        discount_rate = 0.05;
    } else if (data_used >= 100 && data_used <= 199) {
        discount_rate = 0.10;
    } else { // 200 GB or more
        discount_rate = 0.15;
    }

    double discount_amount = basic_cost * discount_rate;
    double final_cost = basic_cost - discount_amount;

    printf("\n--- Invoice Summary ---\n");
    printf("Basic Cost:      $%.2f\n", basic_cost);
    printf("Discount Amount: $%.2f (%.0f%%)\n", discount_amount, discount_rate * 100);
    printf("Final Cost:      $%.2f\n", final_cost);

    return 0;
}
