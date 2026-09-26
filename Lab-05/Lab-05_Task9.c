/*
    Programming Fundamental Lab Tasks
    Task: 06
    Lab: 05
    Programmer: Syed Sajid Ali
    Roll No: 26k-0013
*/
#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    double num, base, exponent;

    printf ("1.Square Root\n");
    printf("2.Power\n");
    printf("3.Absolute Value \n");
    printf("4.Floor\n");
    printf("5.Ceiling\n");

    printf("6. Exit\n\n");

    printf("Enter your choice (1-6): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: 
            printf("Enter a number: ");
            scanf("%d", &num);
            if (num < 0) {
                printf("Cannot calculate square root of a negative number, retry\n");
            } 
            else {
                printf("Square root of %d = %f\n", num, sqrt(num));
            }
         break;


        case 2: 

            printf("Enter base: ");
            scanf("%d", &base);
             printf("Enter exponent: ");
            scanf("%d", &exponent);

            printf("%d ^ %d = %f\n", base, exponent, pow(base, exponent));
        break;

        case 3:

            printf("Enter a number: ");
            scanf("%d", &num);

            printf("Absolute value of %d = %f\n", num, fabs(num));
        break;

        case 4: 

            printf("Enter a number: ");
            scanf("%d", &num);
            printf("Floor of %d = %f\n", num, floor(num));
        break;

        case 5:
            printf("Enter a number: ");
            scanf("%d", &num);
            printf("Ceiling of %d = %f\n", num, ceil(num));
         break;

        case 6:

            printf("Exiting calculator. Goodbye!\n");
        break;

        default:
            printf("Invalid choice,Please enter 1-6.\n");
        break;
    }
  return 0;
}