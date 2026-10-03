/*
    Programming Fundamental Lab
    Syed Sajid Ali
    Lab: 06
    Task: 03
*/

#include <stdio.h>

int main() {
int bin_num;
int prsnt_std = 0, abs_std = 0;

    for (int i = 0; i < 15; i++) {
        
        printf("\n1. Present (1)\n2. Absent (0)\nEnter 1 or 0: ");
        scanf("%d", &bin_num);

        if (bin_num == 1) {
            
            printf("Student is Present\n");
            prsnt_std++;
        }
        else if (bin_num == 0) {
            
            printf("Student is Absent\n");
            abs_std++;
        }
        else {
            
            printf("Wrong Input, Please Try Again\n");
            i--;  
        }
    }

    printf("\nStudents Attendance Record\n");
    printf("Presents = %d\n", prsnt_std);
    printf("Absents  = %d\n", abs_std);

    return 0;
}