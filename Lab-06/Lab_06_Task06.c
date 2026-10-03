/*
    Programming Fundamental Lab
    Syed Sajid Ali
    Lab: 06
    Task: 06
*/

#include <stdio.h>

int main() {
    int number;
    int digit;
    int even_count = 0;
    int odd_count = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    do {
        digit = number % 10;
        if (digit % 2 == 0)
            even_count++;
        else
            odd_count++;
        number = number / 10;
    } while (number > 0);

    printf("Even digits: %d\n", even_count);
    printf("Odd digits: %d\n", odd_count);

    return 0;
}