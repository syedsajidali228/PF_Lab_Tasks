/*
Programming Fundamental Lab
Programmer Name: Syed Sajid Ali
Lab: 10
Task: 06
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char username[50];
    char password[50];
    char saved_username[50];
    char saved_password[50];
    FILE *fptr;

    //for taking login details

    printf ( "Username: " );
    scanf ( "%49s", username );

    printf ( "Password: " );
    scanf ( "%49s", password );

    //for checking saved details

    fptr = fopen ( "credentials.txt", "r" );

    if ( fptr == NULL )
    {
        printf ( "Error opening credentials file.\n" );
    }

    else
    {
        fscanf ( fptr, "%49s %49s", saved_username, saved_password );

        if ( strcmp ( username, saved_username ) == 0 && strcmp ( password, saved_password ) == 0 )
        {
            printf ( "Access Granted!\n" );
        }

        else
        {
            printf ( "Access Denied!\n" );
        }

        fclose ( fptr );
    }

    return 0;
}
