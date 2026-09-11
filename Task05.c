#include <stdio.h>

int main() {
    int role, status, security_level;

    printf("=== Task 5: Access-Control System for AI Platform ===\n");
    printf("Select User Role (1 = Admin, 2 = Researcher, 3 = Student): ");
    scanf("%d", &role);
    printf("Select Account Status (1 = Active, 0 = Inactive): ");
    scanf("%d", &status);
    printf("Enter Security Level: ");
    scanf("%d", &security_level);

    if (status == 0) {
        printf("Access Denied (Account is Inactive)\n");
        return 0;
    }

    switch (role) {
        case 1: // Admin
            if (security_level >= 3) {
                printf("Access Granted: Admin Level Access\n");
            } else {
                printf("Access Denied\n");
            }
            break;
        case 2: // Researcher
            if (security_level >= 2) {
                printf("Access Granted: Researcher Level Access\n");
            } else {
                printf("Access Denied\n");
            }
            break;
        case 3: // Student
            if (security_level >= 1) {
                printf("Access Granted: Student Level Access\n");
            } else {
                printf("Access Denied\n");
            }
            break;
        default:
            printf("Access Denied (Invalid Role)\n");
            break;
    }

    return 0;
}
