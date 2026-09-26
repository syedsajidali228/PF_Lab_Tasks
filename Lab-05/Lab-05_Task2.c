/*
    Programming Fundamental Lab Tasks
    Task: 02
    Lab: 05
    Programmer: Syed Sajid Ali
    Roll No: 26k-0013
*/

#include <stdio.h>
int main(){
    int age, income, credit_score;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your income: ");
    scanf("%d", &income);
    printf("Enter your credit score: ");
    scanf("%d", &credit_score);
    if (age >= 21 && income >= 100000 && credit_score >= 750) {
        printf("No Existing loan.\n");
    } else if (age >= 21 && income >=  75000 && credit_score < 650) {
        printf("Existing Loan Present.\n");
    } else if (age >= 21 && income >= 50000 && credit_score >= 600) {
        printf("Possible Loan.\n");
    } else {
        printf("Applicant fails to meet any of the above conditions.\n");
    }
    return 0;
}