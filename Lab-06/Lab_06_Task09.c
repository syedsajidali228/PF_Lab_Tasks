/*
    Programming Fundamental Lab
    Syed Sajid Ali
    Lab: 06
    Task: 09
*/

#include <stdio.h>


int main() {

    char entered_word[100];
    char reversed_word[100];
    int word_length=0;
    int letter_index;
    int is_palindrome= 1;
    int vowel_count = 0;
    int consonant_count =0;

    printf("Enter a word: ");
    scanf("%s", entered_word);

    printf("Original Word: %s\n", entered_word);


    while (entered_word[word_length] != '\0')
     {
        word_length++;
    }

    for (letter_index = 0; letter_index < word_length; letter_index++) 
    {
        reversed_word[letter_index] = entered_word[word_length - 1 - letter_index];
    }
    reversed_word[word_length] = '\0';

    printf("Length: %d\n", word_length);
    printf("Reversed Word: %s\n", reversed_word);

    for (letter_index = 0  ;  letter_index  <  word_length  ;  letter_index++ ) {

        if (entered_word  [letter_index]  !=  reversed_word  [letter_index]) {
            is_palindrome = 0;
            break;

        }
    }

    printf("Is Palindrome: %s\n", is_palindrome ? "Yes" : "No");

    for (letter_index = 0; letter_index < word_length; letter_index++) {
        
        char current_letter = entered_word[letter_index];

        if (current_letter >= 'A' && current_letter <= 'Z') {
            current_letter = current_letter + 32;
        }

        if (current_letter >= 'a' && current_letter <= 'z') {
            if (current_letter == 'a' || current_letter == 'e' || 
                current_letter == 'i' || current_letter == 'o' || 
                current_letter == 'u' ) 
                {
                vowel_count++;
            } 
            else {
                consonant_count++;
            }
     }
    }

    printf("Vowels: %d\n", vowel_count);
    printf("Consonants: %d\n", consonant_count);

    return 0;

}