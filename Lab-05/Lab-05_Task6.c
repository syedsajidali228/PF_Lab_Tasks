/*
    Programming Fundamental Lab Tasks
    Task: 06
    Lab: 05
    Programmer: Syed Sajid Ali
    Roll No: 26k-0013
*/


#include <stdio.h>

int main() {
    int ml_tech;
    int ml_alg;
    printf ("Select An Appropiate Machine-Learning Technique (1-4):\n1.Classification\n2.Regression\n3.Clustering\n4.Computer Vision\n");
    scanf ("%d", &ml_tech);
    switch (ml_tech) {
        case 1:
            printf("Select An Appropriate Algorithm For Classification:\n1.Logistic Regression\n2.Decision Tree\n3.KNN\n");
            scanf ("%d\n", &ml_alg);
            switch(ml_alg){
                case 1:
                    printf("You Selected Logistic Regression\nLoading Your Algorithm...");
                    break;
                case 2:
                    printf("You Selected Decision Tree\nLoading Your Algorithm...");
                    break;
                case 3:
                    printf("You Selected KNN\nLoading Your Algorithm...");
                    break;
                default
                    printf
            }
    }
    




        return 0; 
    }


