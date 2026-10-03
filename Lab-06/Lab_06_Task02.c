/*
 Programming Fundamentals Lab
 Syed Sajid Ali
 Task: 02
 Lab: 06
 */

#include <stdio.h>


int main() {

int rev_num;

    printf("Enter Number to Reverse: ");
    scanf("%d", &rev_num);

    for (int i=0 ; i < rev_num ; i++ )
     {
        printf("%d", rev_num % 10);
        rev_num = rev_num / 10;
    }
    
printf("%d", rev_num);

    return 0;

}