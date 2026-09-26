/*
    Programming Fundamental Lab Tasks
    Task: 04
    Lab: 05
    Programmer: Syed Sajid Ali
    Roll No: 26k-0013
*/
#include <stdio.h>

int main() {
    char mode, question_mark;
    char reply[12];
    printf("Enter a character based on category (G-Greeting,S-Study,W-Weather,  H-Help): \n");
    scanf(" %c", &mode);
    if (mode == 'G' || mode == 'g') {
        printf("Hello! How are you?\n");
        scanf("%s", reply);

        printf("Sorry, i cant understand that\n");
    } 
    else if (mode == 'S' || mode == 's') {
        printf("So, currently studying or just got a time to chat?\n");
        scanf(" %s", reply);
        printf("Just go study!\n");
    } 
    else if (mode == 'W' || mode == 'w') {
        printf("What do you want to ask about weather?\n");
        scanf(" %s", reply);

        printf("It's a beautiful day outside!\n");
    } 
    else if (mode == 'H' || mode == 'h') {
        printf("How can I assist you today?, or only type '?' for help\n");
        scanf(" %c", &question_mark);

        if (question_mark == '?') {
            printf("Sure! What do you need help with?\n");
        } 
        else {
            printf("Invalid input. Please enter a valid character.\n");
        }
    } else {
        printf("Invalid input. Please enter a valid character.\n");
    }
    return 0;

}