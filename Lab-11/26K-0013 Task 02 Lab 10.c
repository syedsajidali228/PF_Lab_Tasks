#include <stdio.h>
#include <string.h>

void reverseString(char string[], int index)
{
    if (string[index] == '\0')
    {
        return 0;
    }

    reverseString(string, index + 1);
    printf("%c", string[index]);

}

int main()
{
    char string[100];

    printf("Enter a string: ");
     fgets(string, sizeof(string), stdin);
     string[strcspn(string, "\n")] = '\0';

    printf("Reversed string = ");
    reverseString(string, 0);
    printf("\n");


    return 0;

}
