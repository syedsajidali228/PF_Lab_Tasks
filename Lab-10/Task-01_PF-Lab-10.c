/*
Programming Fundamental Lab
Programmer Name: Syed Sajid Ali
Lab: 10
Task: 01
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char feedback[200];
    char updated[220] = "";
    char after[200];
    char *bad;
    int length;

    //for taking feedback

    printf ( "Enter Feedback: " );
    fgets ( feedback, 200, stdin );

    length = strlen ( feedback );

    if ( length > 0 && feedback[length - 1] == '\n' )
    {
        feedback[length - 1] = '\0';
    }

    length = strlen ( feedback );
    printf ( "Length: %d\n", length );

    //for checking and replacing bad

    if ( strstr ( feedback, "good" ) == NULL )
    {
        printf ( "Good sentiment not found.\n" );
    }

    else
    {
        printf ( "Good sentiment found.\n" );
    }

    bad = strstr ( feedback, "bad" );

    if ( bad == NULL )
    {
        printf ( "Bad sentiment not found.\n" );
    }

    else
    {
        printf ( "Bad sentiment found.\n" );

        strcpy ( after, bad + 3 );
        strncat ( updated, feedback, bad - feedback );
        strcat ( updated, "not good" );
        strcat ( updated, after );

        printf ( "Updated Review: %s\n", updated );
    }

    return 0;
}
