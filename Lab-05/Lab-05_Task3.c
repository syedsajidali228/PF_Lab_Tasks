/*
    Programming Fundamental Lab Tasks
    Task: 03
    Lab: 05
    Programmer: Syed Sajid Ali
    Roll No: 26k-0013
*/


#include <stdio.h>

int main() {
    int category, sub_category;
    printf("Categories:\n1.Animal\n2.Vehicle\n3.Food\n4.Human\nEnter category: ");
    scanf("  %d", &category);

    switch (category) {
        case 1:
            printf("Subcategories:\n1.Cat\n2.Dog\n3.Bird\nEnter subcategory: ");
            scanf(" %d", &sub_category);
            switch (sub_category) {

                case 1: 
                printf("Cat\n"); 
                break;
                case 2:
                 printf("Dog\n");
                  break;
                case 3:
                 printf("Bird\n"); 
                 break;

                default: printf("Invalid subcategory\n");

            }
            break;
        case 2:
        
            printf("Subcategories:\n1.Car\n2.Bus\n3.Bike\nEnter subcategory: ");
            scanf(" %d", &sub_category);

            switch (sub_category) {

                case 1: printf("Car\n"); 
                break;

                case 2: printf("Bus\n"); 

                break;
                case 3: printf("Bike\n");
                 break;

                default: printf("Invalid subcategory\n");
            }
            break;
        case 3:
            printf("Subcategories:\n1.Pizza\n2.Burger\n3.Biryani\nEnter subcategory: ");
            scanf(" %d", &sub_category);
            switch (sub_category) {
                case 1: printf("Pizza\n");
                 break;
                case 2: printf("Burger\n");
                 break;

            case 3: printf("Biryani\n"); break;

                default: printf("Invalid subcategory\n");
            }
            break;
        case 4:
            printf("Subcategories:\n1.Male\n2.Female\n3.Child\nEnter subcategory: ");
            scanf(" %d", &sub_category);
            switch (sub_category) {
                case 1: 
                printf("Male\n"); 
                break;

             case 2: 
             printf("Female\n"); 
                break;

                case 3: 
                printf("Child\n"); 
            break;
                default: printf("Invalid subcategory\n");
            }
            break;
        default: printf("Invalid category\n");

    }

    return 0;

}