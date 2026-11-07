/*
Programming Fundamental Lab
Programmer Name: Syed Sajid Ali
Lab: 10
Task: 05
*/

#include <stdio.h>

int main()
{
    FILE *fptr;
    int roll;
    char name[50];
    int marks;

    //for opening marks file

    fptr = fopen ( "marks.txt", "r" );

    if ( fptr == NULL )
    {
        printf ( "Error: File Not Found!\n" );
    }

    else
    {
        //for reading and printing records

        printf ( "Roll No\tName\tMarks\n" );
        printf ( "------------------------\n" );

        while ( fscanf ( fptr, "%d %49s %d", &roll, name, &marks ) == 3 )
        {
            printf ( "%d\t%s\t%d\n", roll, name, marks );
        }

        fclose ( fptr );
    }

    return 0;
}
