/*
    Programming Fundamental Lab Tasks
    Task: 08
    Lab: 05
    Programmer: Syed Sajid Ali
    Roll No: 26k-0013
*/
#include <stdio.h>

int main() {
    int permission;

    printf("1.View=1\n2.Train=2\n3.Test=4\n4.Deploy=8\n");
    printf("Enter your permission value (0-15): ");
    scanf("%d", &permission);

    printf("View: %s\n", (permission & 1)? "YES" : "NO");
    printf("Train: %s\n", (permission & 2) ? "YES" : "NO");
    printf("Test: %s\n",(permission & 4) ? "YES" : "NO");
    printf("Deploy: %s\n", (permission & 8) ? "YES" : "NO");

    if ((permission & 2) && (permission & 8)){
       
     printf("User has BOTH Training and Deployment permissions.\n");
    } 
    else {
        printf("User does NOT have both Training and Deployment permissions.\n");
    }

    return 0;
}