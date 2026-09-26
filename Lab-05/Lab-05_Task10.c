/*
    Programming Fundamental Lab Tasks
    Task: 10
    Lab: 05
    Programmer: Syed Sajid Ali
    Roll No: 26k-0013
*/

#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    double accuracy, confidence;
    int dataset_Size, user_role, model_status, permission;
    double model_score;
    int deploy_ready;
    char roleStr[20], statusStr[20];
    int has_view, has_train, has_test, has_deploy;


    printf("Enter Accuracy (0-100): ");
    scanf("%lf", &accuracy);
    printf("Enter Confidence Score (0-100): ");
    scanf("%lf", &confidence);
    printf("Enter Dataset Size: ");
    scanf("%d", &dataset_Size);
    printf("1.Admin\n2.Developer\n3.Researcher\n");
    printf("Enter your role (1-3): ");
    scanf("%d", &user_role);
    printf("Model Status\n");
    printf("1. Ready\n2. Testing\n3. Training\n");
    printf("Enter model status (1-3): ");
    scanf("%d", &model_status);
    printf("View=1, Train=2, Test=4, Deploy=8\n");
    printf("Enter your permission value (0-15): ");
    scanf("%d", &permission);

    has_view   = permission & 1;
    has_train  = permission & 2;
    has_test   = permission & 4;
    has_deploy = permission & 8;

    model_score = (accuracy + confidence) / 2.0;
    double adjusted_score = sqrt(pow(model_score, 2));

    printf("Accuracy:        %.2f%%\n", accuracy);
    printf("Confidence:      %.2f%%\n", confidence);
    printf("Dataset Size:    %d\n", dataset_Size);
    printf("Model Score:     %.2f\n", model_score);
    printf("Adjusted Score:  %.2f\n", adjusted_score);
    printf("sizeof(accuracy): %lu bytes\n", (unsigned long)sizeof(accuracy));
    printf("sizeof(dataset_Size): %lu bytes\n", (unsigned long)sizeof(dataset_Size));

    printf("User Role\n");
    switch (user_role) {
        case 1:

            strcpy(roleStr, "Admin");
            printf("Role: Admin(Full Access)\n");
        break;
        case 2:

            strcpy(roleStr, "Developer");
            printf("Role: Developer(Build & Test Access)\n");
        break;
        case 3:

            strcpy(roleStr, "Researcher");
            printf("Role: Researcher(View & Test Access)\n");
        break;
        default:

            strcpy(roleStr, "Unknown");
            printf("Role: Unknown(Invalid Role)\n");
        break;
    }

    printf("Model Status\n");
    switch (model_status) {

        case 1:

            strcpy(statusStr, "Ready");
        break;
        case 2:
            strcpy(statusStr, "Testing");
        break;

        case 3:

            strcpy(statusStr, "Training");
        break;

        default:
            strcpy(statusStr, "Unknown");
            break;
    }

    printf("Model Status: %s\n", (model_status >= 1 && model_status <= 3) ? statusStr : "Invalid Status");

    printf("View:   %s\n", has_view   ? "YES" : "NO");
    printf("Train:  %s\n", has_train  ? "YES" : "NO");
    printf("Test:   %s\n", has_test   ? "YES" : "NO");
    printf("Deploy: %s\n", has_deploy ? "YES" : "NO");

    if (accuracy >= 80) {

        if (confidence >= 75) {

            if (dataset_Size >= 1000) {

                if (model_status == 1) {
                
                    if (has_deploy) {
                        deploy_ready = 1;
                    }
                    else {
                        deploy_ready = 0;
                        printf("BLOCKED: User lacks deployment permission.\n");
                    }
                }
                else {
                    deploy_ready = 0;
                    printf("BLOCKED: Model status is '%s' (must be Ready).\n", statusStr);
                }
            }
            else {
                deploy_ready = 0;
                printf("BLOCKED: Dataset size %d is less than 1000.\n", dataset_Size);
            }
        }
        else {
            deploy_ready = 0;
            printf("BLOCKED: Confidence %.2f%% is less than 75%%.\n", confidence);
        }
    } 
    else {
        deploy_ready = 0;
        printf("BLOCKED: Accuracy %.2f%% is less than 80%%.\n", accuracy);
    }

    printf("\n>>> ");

    if (deploy_ready) {
        printf("MODEL IS READY FOR DEPLOYMENT\n");
    }
    else {
        printf("MODEL IS NOT READY FOR DEPLOYMENT.\n");
    }

    printf("Operator Precedence\n");
    int a = 5, b = 3, c = 2;
    int result1 = a + b * c;
    int result2 = (a + b) * c;

    printf("a + b * c     = %d  (multiplication first)\n", result1);
    printf("(a + b) * c   = %d  (parentheses first)\n", result2);

    int bitwiseResult = a | b & c;
    printf("a | b & c     = %d  (& has higher precedence than |)\n", bitwiseResult);

    return 0;
}