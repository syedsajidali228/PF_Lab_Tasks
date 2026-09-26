/*
    Programming Fundamental Lab Tasks
    Task: 05
    Lab: 05
    Programmer: Syed Sajid Ali
    Roll No: 26k-0013
*/


#include <stdio.h>

int main() {
    int confidence;
    char userType;
    printf("Enter your confidence level (1-100):\n ");
    scanf("%d", &confidence);
    printf("Enter your user type (A = Authorized, U = Unauthorized):\n ");
    scanf(" %c", &userType);
    if (confidence < 0 || confidence > 100) {
        printf("Invalid confidence level. Please enter a value between 1 and 100.\n");
    }
    else if (confidence>=80 && (userType == 'A' || userType == 'a')) {
        printf("Access Granted.\n");
    }
    else if ((confidence >= 50 && confidence < 80) && (userType == 'U' || userType == 'u')) {
        printf("Access Denied.\n");
    }
    else {
        printf("Sorry, access denied.\n");

    }
        return 0; 
    }


