/*
    Programming Fundamental Lab
    Syed Sajid Ali
    Lab: 06
    Task: 08
*/

#include <stdio.h>


int main() {

    int array[9];
    int total_elements= 8;
    int counter;
    int largest_element;
    int smallest_element;
    int search_number;
    int search_index =-1;
    int insert_number;
    int insert_index;
    int delete_index;

    printf("Enter 8 elements:\n");

    for (counter= 0; counter <  total_elements; counter++)
     {
        scanf("%d", &array[counter]);
    }

    printf("Complete Array: ");

    for (counter = 0; counter < total_elements; counter++)
     {
        printf("%d ", array[counter]);
    }
    printf("\n");

    largest_element = array[0];
    smallest_element = array[0];

    for (counter = 1; counter < total_elements; counter++) 
    {
        if (array[counter] > largest_element) {
            largest_element = array[counter];
        }
        if (array[counter] < smallest_element) {
            smallest_element = array[counter];
        }
    }
    printf("Largest = %d\n", largest_element);
    printf("Smallest =\n", smallest_element);

    printf("Enter number to search: ");
    scanf("%d", &search_number);
    for (counter = 0; counter < total_elements; counter++) {
        if (array[counter] == search_number) {
            search_index = counter;
            break;
        }
    }
    if (search_index != -1) {
        printf("Found at index %d\n", search_index);
    } else {
        printf("Not found\n");
    }

    printf("Enter number to insert and its index: ");
    scanf("%d %d", &insert_number, &insert_index);
    for (counter = total_elements; counter > insert_index; counter--) {
        array[counter] = array[counter - 1];
    }
    array[insert_index] = insert_number;
    total_elements++;

    printf("Enter index to delete: ");
    scanf("%d", &delete_index);
    for (counter = delete_index; counter < total_elements - 1; counter++) {
        array[counter] = array[counter + 1];
    }
    total_elements--;

    printf("Final Array: ");
    for (counter = 0; counter < total_elements; counter++) {
        printf("%d ", array[counter]);
    }
    printf("\n");

    return 0;
}