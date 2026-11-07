/*
Programming Fundamental Lab
Programmer Name: Syed Sajid Ali
Lab: 10
Task: 03
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char email[100];
    char domain[100];

    //for taking email

    printf ( "Enter Email Address: " );
    scanf ( "%99s", email );

    //for getting the domain

    if ( strchr ( email, '@' ) == NULL )
    {
        printf ( "Invalid Email Format\n" );
    }

    else
    {
        strcpy ( domain, strchr ( email, '@' ) + 1 );
        printf ( "Domain: %s\n", domain );
    }

    return 0;
}
