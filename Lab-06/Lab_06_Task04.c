/*
    Programming Fundamental Lab
    Syed Sajid Ali
    Lab: 06
    Task: 04
*/

#include <stdio.h>

int main() {
    
    int book_code;
    int original;
    
    int reversed_num = 0;
    int digit;

    printf("Enter book code: ");
    scanf("%d", &book_code);

    original = book_code;
    
    while (book_code > 0) {
        
        digit = book_code % 10;
        
        reversed_num = reversed_num * 10 + digit;
        book_code = book_code / 10;
        
    }

    if (original == reversed_num){
        printf("Valid Book Code (Palindrome)\n");
    }
    else
        printf("Invalid Book Code (Not Palindrome)\n");

    
    return 0;
    
}
