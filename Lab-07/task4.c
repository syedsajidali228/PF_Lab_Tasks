/*
Programming Fundamental Lab
Programmer: Syed Sajid Ali
Task: 4
Lab: 07
*/

#include <stdio.h>

int main()

{
    char word_grid[3][100];

    int row_index;

    int column_index;

    int word_length;

    int longest_length;

    int longest_row_index;

    int longest_column_index;

    longest_length = 0;

    longest_row_index = 0;

    longest_column_index = 0;

    printf("Enter 3 lines of words separated by spaces\n");

    for (row_index = 0; row_index < 3; row_index++)
    {
        word_grid[row_index][0] = '\0';

        printf("Line %d: ", row_index + 1);

        scanf("%99[^\n]", word_grid[row_index]);

        scanf("%*c");
    }

    for (row_index = 0; row_index < 3; row_index++)
    {
        for (column_index = 0; word_grid[row_index][column_index] != '\0'; column_index++)
        {
            /* A word starts at a letter that is first or comes after a space */
            if (word_grid[row_index][column_index] != ' ' && (column_index == 0 || word_grid[row_index][column_index - 1] == ' '))
            {
                word_length = 0;

                while (word_grid[row_index][column_index + word_length] != ' ' && word_grid[row_index][column_index + word_length] != '\0')
                {
                    word_length = word_length + 1;
                }

                if (word_length > longest_length)
                
                {
                    longest_length = word_length;

                    longest_row_index = row_index;
                    longest_column_index = column_index;
                }
            }
        }
    }

    if (longest_length == 0)
    {
        printf("No words found.\n");
    }
    else
    {
        printf("\nLongest word: ");

        for (column_index = 0; column_index < longest_length; column_index++)
        {
            printf("%c", word_grid[longest_row_index][longest_column_index + column_index]);
        }

        printf("\n");

        printf("Length: %d\n", longest_length);

        printf("Row Index: %d\n", longest_row_index);

        printf("Column Index: %d\n", longest_column_index);
    }

    return 0;
}
