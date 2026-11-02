/*
Programming Fundamental Lab
Programmer Name: Syed Sajid Ali
Lab: 09
Task: 05
*/
#include <stdio.h>

void printSensorData ( void *data, char type )
{
    if ( type == 'f' )
    {
        printf ( "Temperature: %.2f Celsius\n", *(float *)data );
    }

    else if ( type == 'i' )
    {
        if ( *(int *)data == 1 )
        {
            printf ( "Motion Detected\n" );
        }

        else if ( *(int *)data == 0 )
        {
            printf ( "No Motion\n" );
        }

        else
        {
            printf ( "Unknown Motion Status\n" );
        }
    }

    else if ( type == 'c' )
    {
        if ( *(char *)data == 'O' )
        {
            printf ( "Door Open\n" );
        }

        else if ( *(char *)data == 'C' )
        {
            printf ( "Door Closed\n" );
        }

        else
        {
            printf ( "Unknown Door Status\n" );
        }
    }

    else
    {
        printf ( "Unknown sensor type\n" );
    }
}

int main ( )
{
    float temperature = 26.5 ;
    int motionStatus = 1;
    char doorStatus = 'C' ;

    //send sensor values

    printSensorData ( &temperature, 'f' );
	printSensorData ( &motionStatus, 'i' );
    printSensorData ( &doorStatus, 'c' );

    //show sensor readings

    return 0;
}
