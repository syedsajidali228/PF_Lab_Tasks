/*
Name: Syed Sajid Ali
Lab: 12
Lab Work: 11
Task: 05
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_INPUT 500



int getCategory(char character) {
    // Return character category using ASCII ranges
    if (character >= 'A' && character <= 'Z') {
        return 1;
    } else if (character >= 'a' && character <= 'z') {
        return 2;
    } else if (character >= '0' && character <= '9') {
        return 3;
    } else {
        return 4;
    }
}

int main() {
    int participant_count;
    char *pattern;
    char **passwords;
    char input[MAX_INPUT];
    int pattern_length;
    float highest_similarity = -1.0f;
    int highest_index = 0;

    printf("Enter number of participants: ");
    scanf("%d", &participant_count);
    getchar();

    // Allocate memory for the password pattern
    pattern = NULL;

    printf("Enter password pattern: ");
    fgets(input, MAX_INPUT, stdin);
    input[strcspn(input, "\n")] = '\0';

    pattern = (char *)malloc((strlen(input) + 1) * sizeof(char));

    if (pattern == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    strcpy(pattern, input);
    pattern_length = strlen(pattern);

    // Allocate array for password pointers
    passwords = (char **)malloc(participant_count * sizeof(char *));

    if (passwords == NULL) {
        printf("Memory allocation failed.\n");
        free(pattern);
        return 1;
    }

    // Read every password attempt
    for (int index = 0; index < participant_count; index++) {
        printf("Enter password for participant %d: ", index + 1);
        fgets(input, MAX_INPUT, stdin);

        input[strcspn(input, "\n")] = '\0';

        // Allocate memory for each password
        passwords[index] = (char *)malloc((strlen(input) + 1) * sizeof(char));

        if (passwords[index] == NULL) {
            printf("Memory allocation failed.\n");
            return 1;
        }

        strcpy(passwords[index], input);
    }

    printf("\nPassword similarity results:\n");

    for (int index = 0; index < participant_count; index++) {
        int matching_categories = 0;

        // Compare category at each pattern position
        for (int position = 0; position < pattern_length; position++) {
            if (passwords[index][position] != '\0') {
                if (getCategory(pattern[position]) == getCategory(passwords[index][position])) {
                    matching_categories++;
                }
            }
        }

        float similarity = (float)matching_categories / pattern_length * 100.0f;

        printf("%d. %s -> %.2f%%\n",
               index + 1, passwords[index], similarity);

        if (similarity > highest_similarity) {
            highest_similarity = similarity;
            highest_index = index;
        }
    }

    printf("\nHighest similarity password: %s\n", passwords[highest_index]);
    printf("Highest similarity: %.2f%%\n", highest_similarity);

    // Free all password strings
    for (int index = 0; index < participant_count; index++) {
        free(passwords[index]);
    }

    free(passwords);
    free(pattern);

    return 0;
}
