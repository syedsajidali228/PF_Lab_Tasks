/*
Programming Fundamental Lab
Programmer Name: Syed Sajid Ali
Lab: 10
Task: 04
*/

#include <stdio.h>

int main()
{
    char name[50];
    int account;
    float amount;
    FILE *fptr;

    //for taking customer details

    printf ( "Customer Name: " );
    scanf ( "%49s", name );

    printf ( "Account Number: " );
    scanf ( "%d", &account );

    printf ( "Withdrawal Amount: " );
    scanf ( "%f", &amount );

    //for saving transaction details

    fptr = fopen ( "bank_log.txt", "a" );

    if ( fptr == NULL )
    {
        printf ( "Error opening file.\n" );
    }

    else
    {
        fprintf ( fptr, "Customer Name: %s\n", name );
        fprintf ( fptr, "Account Number: %d\n", account );
        fprintf ( fptr, "Withdrawal Amount: %f\n\n", amount );
        fclose ( fptr );

        printf ( "Transaction saved successfully.\n" );
    }

    return 0;
}
