/*
Name: Syed Sajid Ali
Lab: 12
Lab Work: 11
Task: 04
*/
#include <stdio.h>
#include <stdlib.h>



int main() {
    int category_count;
    int *ratings;
    int total_ratings = 0;
    int highest_index = 0;
    int update_index;
    int update_rating;
    float average_ratings;

    printf("Enter number of movie categories: ");
    scanf("%d", &category_count);

    ratings = (int *)malloc(category_count * sizeof(int));

    if (ratings == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Get rating count for each category
    for (int index = 0; index < category_count; index++) {
        printf("Enter ratings for category %d: ", index);
        scanf("%d", &ratings[index]);
        total_ratings += ratings[index];

        if (ratings[index] > ratings[highest_index]) {
            highest_index = index;
        }
    }

    average_ratings = (float)total_ratings / category_count;

    printf("\nTotal ratings: %d\n", total_ratings);
    printf("Average ratings: %.2f\n", average_ratings);
    printf("Category index with highest ratings: %d\n", highest_index);

    // Update one category
    printf("\nEnter category index to update: ");
    scanf("%d", &update_index);

    printf("Enter new rating count: ");
    scanf("%d", &update_rating);

    ratings[update_index] = update_rating;

    total_ratings = 0;

    for (int index = 0; index < category_count; index++) {
        total_ratings += ratings[index];
    }

    average_ratings = (float)total_ratings / category_count;

    printf("\nUpdated ratings:\n");
    for (int index = 0; index < category_count; index++) {
        printf("Category %d: %d\n", index, ratings[index]);
    }

    printf("Updated total ratings: %d\n", total_ratings);
    printf("Updated average ratings: %.2f\n", average_ratings);

    // Find highest category again
    highest_index = 0;

    for (int index = 1; index < category_count; index++) {
        if (ratings[index] > ratings[highest_index]) {
            highest_index = index;
        }
    }

    printf("Updated highest category index: %d\n", highest_index);

    // Free the dynamic memory
    free(ratings);

    return 0;
}
