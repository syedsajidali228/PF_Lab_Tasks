/*
Programming Fundamental Lab
Programmer Name: Syed Sajid Ali
Lab: 09
Task: 04
*/
#include <stdio.h>

int add ( int a, int b )
{
    return a + b;
}

int multiply ( int a, int b )
{
    return a * b ;
}

int findMax ( int a, int b )
{
    if ( a > b )
    {
        return a;
    }

    else
    {
        return b;
    }
}

int compute ( int a, int b, int ( *operation ) ( int, int ) )
{
    return operation ( a, b );
}

int main ( )
{
    int a, b, sum, product, maximum;

    printf ( "Enter two integers: " );
    scanf ( "%d %d", &a, &b );

    //call the three functions

    sum = compute ( a, b, add ) ;
	product = compute ( a, b, multiply );
    maximum = compute ( a, b, findMax ) ;

    //show the answers

    printf ( "Sum: %d\n", sum );
    printf ( "Product: %d\n", product );
    printf ( "Maximum: %d\n", maximum );

    return 0;
}
