/*
Programming Fundamental Lab
Programmer: Syed Sajid Ali
Task: 2
Lab: 07
*/

#include <stdio.h>

int main()
{
    char logs[3][30];

    int entry_number;

    int row_index;

    int column_index;

    int uppercase_count;

    uppercase_count = 0;

    printf("Enter 3 CSV log entries (username,status,timestamp)\n");

    for (entry_number = 1; entry_number <= 3; entry_number++)
    {
        printf("Log entry %d: ", entry_number);
        scanf(" %29[^,],%29[^,],%29[^\n]", logs[0], logs[1], logs[2]);

        scanf("%*c");

        printf("  Username: %s  | Status: %s  | Timestamp: %s\n\n", logs[0], logs[1], logs[2]);

        for (row_index = 0; row_index < 3; row_index++)
        {
            for (column_index = 0; logs[row_index][column_index] != '\0'; column_index++)
            {
                if (logs[row_index][column_index] >= 'A' && logs[row_index][column_index] <= 'Z')
                {
                    uppercase_count = uppercase_count + 1;
                }
            }
        }
    }


    printf("Total uppercase letters: %d\n", uppercase_count);

    
    return 0;

}
