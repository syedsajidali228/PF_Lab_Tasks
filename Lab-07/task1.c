/*
Programming Fundamental Lab
Programmer: Syed Sajid Ali
Task: 1
Lab: 07
BAI-1a
*/

#include <stdio.h>

int main()
{
    char student_names[3][50];

    int marks[3][3];

    int student_index;

    int subject_index;

    int total_marks;

    float average_marks;
    for (student_index = 0; student_index < 3; student_index++)
    {

        printf("Enter full name of student %d: ", student_index + 1);

        scanf("%49[^\n]", student_names[student_index]);

        scanf("%*c");

        for (subject_index = 0; subject_index < 3; subject_index++)

        {
            printf("Enter marks of subject %d: ", subject_index + 1);

            scanf("%d", &marks[student_index][subject_index]);
        }

        scanf("%*c");

        printf("\n");
    }

    printf(" Student Report\n");

    for (student_index = 0; student_index < 3; student_index++)
    {
        total_marks = 0;

        for (subject_index = 0; subject_index < 3; subject_index++)
        {
            total_marks = total_marks + marks[student_index][subject_index];
        }

        average_marks = total_marks / 3.0;

        printf("Name: %-25s Average: %.2f\n", student_names[student_index], average_marks);
    }


    return 0;
    
}
