/*
 Programming Fundamentals Lab
 Syed Sajid Ali
 Task: 01
 Lab: 06
 */

#include <stdio.h>


int main() {

int pin, sum = 0;

    do {
        printf("Enter 4-digit PIN: ");
        scanf("%d", &pin);

        if (pin < 1000 || pin > 9999)
            printf("Invalid! Enter exactly 4 digits.\n");

    } while (pin < 1000 || pin > 9999);

    while ( pin> 0 ) 
    { 
        sum += pin % 10; pin /= 10; 
    }

    printf(  sum > 10?   "Strong PIN\n"  :  "Weak PIN\n" );


    return 0;

}