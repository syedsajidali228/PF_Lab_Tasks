/*
Name: Syed Sajid Ali
Lab: 12
Lab Work: 11
Task: 02
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_INPUT 500


int main() {
    int feedback_count;
    char **feedback;
    char input[MAX_INPUT];
    int total_characters = 0;
    int longest_index = 0;

    feedback = NULL;

    printf("Enter number of feedback entries: ");
    scanf("%d", &feedback_count);
    getchar();

    // Grow the feedback pointer list
    for (int index = 0; index < feedback_count; index++) {
        feedback = (char **)realloc(feedback, (index + 1) * sizeof(char *));

        if (feedback == NULL) {
            printf("Memory allocation failed.\n");
            return 1;
        }

        printf("Enter feedback %d: ", index + 1);
        fgets(input, MAX_INPUT, stdin);

        input[strcspn(input, "\n")] = '\0';

        // Allocate memory for each feedback
        feedback[index] = (char *)malloc((strlen(input) + 1) * sizeof(char));

        if (feedback[index] == NULL) {
            printf("Memory allocation failed.\n");
            return 1;
        }

        strcpy(feedback[index], input);

        total_characters += strlen(feedback[index]);

        if (index == 0) {
            longest_index = 0;
        } else {
            char *current_pointer = feedback[index];
            char *longest_pointer = feedback[longest_index];
            int current_length = 0;
            int longest_length = 0;

            // Find lengths by pointer traversal
            while (*current_pointer != '\0') {
                current_length++;
                current_pointer++;
            }

            while (*longest_pointer != '\0') {
                longest_length++;
                longest_pointer++;
            }

            // Find the longest feedback
            if (current_length > longest_length) {
                longest_index = index;
            }
        }
    }

    // Show all feedback
    printf("\nAll feedback entries:\n");
    for (int index = 0; index < feedback_count; index++) {
        printf("%d. %s\n", index + 1, feedback[index]);
    }

    printf("\nTotal characters: %d\n", total_characters);
    printf("Longest feedback: %s\n", feedback[longest_index]);

    // Free every feedback string
    for (int index = 0; index < feedback_count; index++) {
        free(feedback[index]);
    }

    free(feedback);

    return 0;
}
