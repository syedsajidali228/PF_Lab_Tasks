/*
    Programming Fundamental Lab Tasks
    Task: 01
    Lab: 05
    Programmer: Syed Sajid Ali
    Roll No: 26k-0013
*/

#include <stdio.h>

int main(){
    int programming_marks, mathematics_marks, AI_marks, attendance_percentage;
    printf("Enter Programming Marks: ");
    scanf("%d", &programming_marks);
    printf("Enter Mathematics Marks: ");
    scanf("%d", &mathematics_marks);
    printf("Enter AI Marks: ");
    scanf("%d", &AI_marks);
    printf("Enter Attendance Percentage: ");
    scanf("%d", &attendance_percentage);
    if (programming_marks >= 50 && mathematics_marks >= 50 && AI_marks >= 50 && attendance_percentage >= 75) {
        printf("You are eligible for the course.\n");
        int average_marks = (programming_marks + mathematics_marks + AI_marks) / 3;
        if (average_marks >= 80){
            printf("Excellent");

        } else if (average_marks >= 70){
            printf("Very Good");
        } else if (average_marks >= 60){
            printf("Good");
        } else if (average_marks >= 50){
            printf("Satisfactory");
        } else{
            printf("Poor");
        }
    } else {
        printf("You are not eligible for the course.\n");
    }
    return 0;
}
