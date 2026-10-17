/*
Programming Fundamental Lab
Programmer: Syed Sajid Ali
Task: 3
Lab: 07
*/

#include <stdio.h>



int main()

{
    char secret_messages[3][100];

    int space_count;

    int word_count;

    int message_index;

    int character_index;

    printf("Enter 3 messages (only capital letters and spaces allowed)\n");

    for (message_index = 0; message_index < 3; message_index++)
    {
        secret_messages[message_index][0] = '\0';

        printf("Message %d: ", message_index + 1);

        scanf(" %99[A-Z ]", secret_messages[message_index]);

        scanf("%*[^\n]");

        scanf("%*c");
    }

    printf("Filtered Messages\n");

    for (message_index = 0; message_index < 3; message_index++)
    {
        space_count = 0;

        word_count = 0;

        for (character_index = 0; secret_messages[message_index][character_index] != '\0'; character_index++)
        {
            if (secret_messages[message_index][character_index] == ' ')
            {
                space_count = space_count + 1;
            }
            else
            {
                if (character_index == 0 || secret_messages[message_index][character_index - 1] == ' ')
                {
                    word_count = word_count + 1;
                }
            }
        }

        printf("Message %d: %s\n", message_index + 1, secret_messages[message_index]);

        printf("Spaces: %d, Words: %d\n\n", space_count, word_count);
    }

    return 0;
}
