/*
    Programming Fundamental Lab Tasks
    Task: 07
    Lab: 05
    Programmer: Syed Sajid Ali
    Roll No: 26k-0013
*/
#include <stdio.h>

int main() {
    int confidence, req_conf_thre;

    printf("Enter AI Model's Confidence (1-100): ");
    scanf("%d", &confidence);

    printf("Enter Required Confidence Threshold: ");
    scanf("%d", &req_conf_thre);

    if (confidence < 1 || confidence > 100) {
        printf("Invalid Confidence Score\n");
    }
    else {
       
        if (confidence >= 90)
            printf("Very High\n");

        else if (confidence >= 75)

            printf("High\n");

        else if (confidence >= 50)
            printf("Moderate\n");

        else
            printf("Low\n");

       
        if (confidence >= req_conf_thre && confidence >= 50)
            printf("Prediction Accepted\n");
            
        else
            printf("Prediction Not Accepted\n");
    }

    return 0;
}
