#include <stdio.h>

int main() {
    float accuracy, latency;
    int approval_status;

    printf("=== Task 4: AI Model Deployment Decision System ===\n");
    printf("Enter Model Accuracy (%%): ");
    scanf("%f", &accuracy);
    printf("Enter Prediction Latency (ms): ");
    scanf("%f", &latency);
    printf("Enter Model Approval Status (1 = Approved, 0 = Not Approved): ");
    scanf("%d", &approval_status);

    int eligible = 1;

    if (accuracy < 90.0) {
        printf("Reason: Accuracy too low\n");
        eligible = 0;
    }
    if (latency > 100.0) {
        printf("Reason: Latency too high\n");
        eligible = 0;
    }
    if (approval_status != 1) {
        printf("Reason: Model not approved\n");
        eligible = 0;
    }

    if (eligible) {
        printf("Model Approved and Ready for Deployment!\n");
    } else {
        printf("Model cannot be deployed.\n");
    }

    return 0;
}
