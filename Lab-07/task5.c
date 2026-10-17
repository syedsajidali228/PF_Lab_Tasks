/*
Programming Fundamental Lab
Programmer: Syed Sajid Ali
Task: 5
Lab: 07
*/

#include <stdio.h>

int main()
{
    char sentences[3][100];

    int sentence_index;

    int character_index;

    int vowel_count;

    int letter_count;

    char current_character;

    float vowel_density;

    printf("Enter 3 sentences separated by semicolons (;)\n");

    for (sentence_index = 0; sentence_index < 3; sentence_index++)
    {
        sentences[sentence_index][0] = '\0';

        scanf(" %99[^;]", sentences[sentence_index]);
        scanf("%*c");
    }

    printf("\nVowel Density\n");

    for (sentence_index = 0; sentence_index < 3; sentence_index++)
    {
        vowel_count = 0;

        letter_count = 0;

        for (character_index = 0; sentences[sentence_index][character_index] != '\0'; character_index++)
        {
            current_character = sentences[sentence_index][character_index];

            if ((current_character >= 'a' && current_character <= 'z') || (current_character >= 'A' && current_character <= 'Z'))
            {
                letter_count = letter_count + 1;
            }

            if (current_character == 'a' || current_character == 'e' || current_character == 'i' || current_character == 'o' || current_character == 'u' ||
                current_character == 'A' || current_character == 'E' || current_character == 'I' || current_character == 'O' || current_character == 'U')
            {
                vowel_count = vowel_count + 1;
            }
        }

        if (letter_count > 0)
        {
            vowel_density = (vowel_count * 100.0) / letter_count;
        }
        else
        {
            vowel_density = 0;
        }

        printf("Sentence %d: %s\n", sentence_index + 1, sentences[sentence_index]);

        printf("Vowels: %d, Letters: %d, Density: %.2f%%\n\n", vowel_count, letter_count, vowel_density);
    }

    return 0;
}
