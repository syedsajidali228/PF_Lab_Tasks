#include <stdio.h>

struct Address
{
    char city[50];
    int zipCode;
    char state[50];
};

struct Student
{
    int rollNo;
    char name[50];
    float cgpa;
    struct Address studentAddress;
};

int main()
{
    struct Student student1 = {
        26,
        "Sajid",
        3.50f,
        {"Karachi", 75000, "Sindh"}
    };

printf("Student Profile\n");
printf("Roll No: %d\n", student1.rollNo);
printf("Name: %s\n", student1.name);
printf("CGPA: %.2f\n", student1.cgpa);
printf("City: %s\n", student1.studentAddress.city);
printf("Zip Code: %d\n", student1.studentAddress.zipCode);
printf("State: %s\n", student1.studentAddress.state);

    return 0;
}
