#include <stdio.h>

int main() {
    char name[] = "Sajid Ali";
    int age = 19;
    float height = 5.11f;
    char grade = 'A';
    float cgpa = 3.80f;

    printf("STUDENT REPORT\n");
    printf("Name:   %s\n", name);
    printf("Age:    %d\n", age);
    printf("Height: %.2f\n", height);
    printf("Grade:  %c\n", grade);
    printf("CGPA:   %.2f\n", cgpa);
    return 0;
}