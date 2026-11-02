/*
Programming Fundamental Lab
Programmer Name: Syed Sajid Ali
Lab: 09
Task: 02
*/
#include <stdio.h>

void withdraw ( float *balance, float amount )
{
    if ( amount > 0 && amount <= *balance )
    {
        *balance = *balance - amount ;
        printf ( "Withdrawal successful.\n" );
    }

    else if ( amount > *balance )
    {
        printf ( "Transaction Declined: Insufficient Balance\n" );
    }

    else
    {
        printf ( "Invalid amount.\n" );
    }
}

void deposit ( float *balance, float amount )
{
    if ( amount > 0 )
    {
        *balance = *balance + amount;
        printf ( "Deposit successful.\n" );
        printf ( "Updated Balance: PKR %.2f\n", *balance );
    }

    else
    {
        printf ( "Invalid amount.\n" );
    }
}

int main ( )
{
    float balance = 25000 ;
    float amount = 0;
    int choice = 0 ;

    printf ( "1. Debit (Withdraw)\n2. Credit (Deposit)\n" );
	printf ( "Select transaction: " );
    scanf ( "%d", &choice );
    printf ( "Enter amount: " );
    scanf ( "%f", &amount );

    //atm transaction

    if ( choice == 1 )
    {
        withdraw ( &balance, amount );
    }

    else if ( choice == 2 )
    {
        deposit ( &balance, amount );
    }

    else
    {
        printf ( "Invalid transaction.\n" );
    }

    //updated account balance

    printf ( "Final Account Balance: PKR %.2f\n", balance );

    return 0;
}
