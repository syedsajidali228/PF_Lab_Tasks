#include <stdio.h>

int main() {
    float num1, num2, num3;
    printf("Enter three numbers: ");
    if (scanf("%f %f %f", &num1, &num2, &num3) != 3) {
        printf("Invalid input! Please enter numerical values.\n");
        return 1;
    }

    if (num1 >= num2 && num1 >= num3) {
        if ((num1 == num2 && num1 > num3) || (num1 == num3 && num1 > num2)) {
            printf("Two numbers are equal and are the greatest: %.2f\n", num1);
        } else if (num1 == num2 && num1 == num3) {
            printf("All three numbers are equal: %.2f\n", num1);
        } else {
            printf("The greatest number is: %.2f\n", num1);
        }
    } else if (num2 >= num1 && num2 >= num3) {
        if (num2 == num3 && num2 > num1) {
            printf("Two numbers are equal and are the greatest: %.2f\n", num2);
        } else {
            printf("The greatest number is: %.2f\n", num2);
        }
    } else {
        printf("The greatest number is: %.2f\n", num3);
    }

    return 0;
}
