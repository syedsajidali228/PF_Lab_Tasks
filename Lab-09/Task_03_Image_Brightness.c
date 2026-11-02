/*
Programming Fundamental Lab
Programmer Name: Syed Sajid Ali
Lab: 09
Task: 03
*/
#include <stdio.h>

int main ( )
{
    int image[3][3];
	int (*ptr)[3] = image;
    int i, j;

    printf ( "Enter 9 pixel values:\n" );

    for ( i = 0 ; i < 3 ; i++ )
    {
        for ( j = 0 ; j < 3 ; j++ )
        {
            scanf ( "%d", (*(ptr + i) + j) );
        }
    }

    //double pixel values

    for ( i = 0 ; i < 3 ; i++ )
    {
        for ( j = 0 ; j < 3 ; j++ )
        {
            *(*(ptr + i) + j) = *(*(ptr + i) + j) * 2;
        }
    }

    //print the new image

    printf ( "Updated Image:\n" );

    for ( i = 0 ; i < 3 ; i++ )
    {
        for ( j = 0 ; j < 3 ; j++ )
        {
            printf ( "%d ", *(*(ptr + i) + j) );
        }

        printf ( "\n" );
    }

    return 0;
}
