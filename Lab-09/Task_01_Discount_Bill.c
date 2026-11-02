/*
Programming Fundamental Lab
Programmer Name: Syed Sajid Ali
Lab: 09
Task: 01
*/
#include <stdio.h>

float calculateDiscount ( char membership, float amount )
{
    float rate = 0 ;

    if ( membership == 'P' || membership == 'p' )
    {
        rate = 20 ;
    }

    else if ( membership == 'G' || membership == 'g' )
    {
        rate = 10;
    }

    else if ( membership == 'S' || membership == 's' )
    {
        rate = 5 ;
    }

    if ( amount > 10000 )
    {
        rate = rate + 2;
    }

    return amount * rate / 100;
}

float calculateFinalBill ( float discountedAmount )
{
    float tax = discountedAmount * 0.15 ;
    float shipping = 0;

    if ( discountedAmount <= 5000 )
    {
        shipping = 300 ;
    }

    return discountedAmount + tax + shipping;
}

int main ( )
{
    char membership;
    float amount, discount, discountedAmount, finalBill;

    printf ( "Enter membership type (P/G/S): " );
	scanf ( " %c", &membership );
    printf ( "Enter shopping amount: " );
    scanf ( "%f", &amount );

    //membership discount

    discount = calculateDiscount ( membership, amount ) ;
    discountedAmount = amount - discount;

    //final bill

    finalBill = calculateFinalBill ( discountedAmount ) ;

    printf ( "Discount: PKR %.2f\n", discount );
    printf ( "Discounted Amount: PKR %.2f\n", discountedAmount );
    printf ( "Final Payable Bill: PKR %.2f\n", finalBill );

    return 0;
}
