#include <stdio.h>

int main() {
    int obstacle, person;
    float battery;

    printf("=== Task 6: Autonomous Robot Navigation Decision ===\n");
    printf("Obstacle detected? (1 = Yes, 0 = No): ");
    scanf("%d", &obstacle);
    printf("Person detected? (1 = Yes, 0 = No): ");
    scanf("%d", &person);
    printf("Enter Battery percentage: ");
    scanf("%f", &battery);

    if (obstacle == 1) {
        if (person == 1) {
            printf("Emergency Stop\n");
        } else {
            printf("Change Direction\n");
        }
    } else {
        if (battery < 20.0) {
            printf("Return to Charging Station\n");
        } else {
            printf("Continue Moving\n");
        }
    }

    return 0;
}
