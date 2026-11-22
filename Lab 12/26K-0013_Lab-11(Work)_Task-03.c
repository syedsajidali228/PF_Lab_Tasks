/*
Name: Syed Sajid Ali
Lab: 12
Lab Work: 11
Task: 03
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>



int containsDigit(char *str) {
    int index = 0;

    while (str[index] != '\0') {
        // Check if current character is a digit
        if (str[index] >= '0' && str[index] <= '9') {
            return 1;
        }

        index++;
    }

    return 0;
}

int main() {
    int username_count;
    char **usernames;
    char input[200];
    int current_count = 0;

    printf("Enter number of usernames: ");
    scanf("%d", &username_count);
    getchar();

    usernames = (char **)malloc(username_count * sizeof(char *));

    if (usernames == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Read each username
    for (int index = 0; index < username_count; index++) {
        printf("Enter username %d: ", index + 1);
        fgets(input, sizeof(input), stdin);

        input[strcspn(input, "\n")] = '\0';

        usernames[index] = (char *)malloc((strlen(input) + 1) * sizeof(char));

        if (usernames[index] == NULL) {
            printf("Memory allocation failed.\n");
            return 1;
        }

        strcpy(usernames[index], input);
        current_count++;
    }

    // Remove usernames that contain digits
    for (int index = 0; index < current_count;) {
        if (containsDigit(usernames[index]) == 1) {
            free(usernames[index]);

            for (int next_index = index; next_index < current_count - 1; next_index++) {
                usernames[next_index] = usernames[next_index + 1];
            }

            current_count--;
        } else {
            index++;
        }
    }

    // Show only alphabetic usernames
    printf("\nUsernames with no digits:\n");

    for (int index = 0; index < current_count; index++) {
        int alphabetic_only = 1;

        for (int character_index = 0; usernames[index][character_index] != '\0'; character_index++) {
            if (!isalpha((unsigned char)usernames[index][character_index])) {
                alphabetic_only = 0;
                break;
            }
        }

        if (alphabetic_only == 1) {
            printf("%s\n", usernames[index]);
        }
    }

    // Free remaining usernames
    for (int index = 0; index < current_count; index++) {
        free(usernames[index]);
    }

    free(usernames);

    return 0;
}
