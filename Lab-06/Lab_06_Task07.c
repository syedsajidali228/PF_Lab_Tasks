/*
    Programming Fundamental Lab
    Syed Sajid Ali
    Lab: 06
    Task: 07
*/

#include <stdio.h>

int main() {
    int n;
    int i;
    int j;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++)
            printf(" ");

        if (i == 1)
            printf("*");
        else {
            printf("*");
            for (j = 1; j <= 2 * i - 3; j++)
                printf(" ");
            printf("*");
        }
        printf("\n");
    }

    for (i = n - 1; i >= 1; i--) {
        for (j = 1; j <= n - i; j++)
            printf(" ");

        if (i == 1)
            printf("*");
        else {
            printf("*");
            for (j = 1; j <= 2 * i - 3; j++)
                printf(" ");
            printf("*");
        }
        printf("\n");
    }

    return 0;
}