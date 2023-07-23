#include <stdio.h>

#define maximum_size 100

int main() {
    int array[maximum_size];
    int size = 0;
    int choice;

    printf("Enter the size of the array (maximum %d): ", maximum_size);
    scanf("%d", &size);

    if (size <= 0 || size > maximum_size) {
        printf("Array size is invalid.\n");
        return 0;
    }

    int x, max, min, sum, search;
    float avg;

    do {
    printf("\nArray Operations Menu:\n");
    printf("1. Initialize the array\n");
    printf("2. Print the array\n");
    printf("3. Find the maximum element\n");
    printf("4. Find the minimum element\n");
    printf("5. Calculate the sum of all elements\n");
    printf("6. Calculate the average of all elements\n");
    printf("7. Search for an element\n");
    printf("8. Exit the program\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
    case 1:
         printf("Enter %d elements:\n", size);
        for (x = 0; x < size; x++) {
            scanf("%d", &array[x]);
                }
        printf("Array initialized.\n");
            break;
    case 2:
        printf("Array elements:\n");
            for (x = 0; x < size; x++) {
             printf("%d |\t", array[x]);
            if ((x + 1) % 5 == 0) {
            printf("\n");
                    }
             }
        printf("\n");
                break;
    case 3:
        max = array[0];
            for (x = 1; x < size; x++) {
                if (array[x] > max) {
                        max = array[x];
                    }
                }
         printf("Maximum element: %d\n", max);
                break;
     case 4:
        min = array[0];
            for (x = 1; x < size; x++) {
                 if (array[x] < min) {
                     min = array[x];
                    }
                }
            printf("Minimum element: %d\n", min);
                break;
     case 5:
        sum = 0;
        for (x = 0; x < size; x++) {
             sum += array[x];
                }
        printf("Sum of all elements: %d\n", sum);
                break;
    case 6:
        sum = 0;
        for (x = 0; x < size; x++) {
                sum += array[x];
                }
         avg = (float) sum / size;
         printf("Average of all elements: %.2f\n", avg);
                break;
    case 7:
        printf("Enter the element to search for: ");
            scanf("%d", &search);
             for (x = 0; x < size; x++) {
                if (array[x] == search) {
                printf("Element %d is found at index %d.\n", search, x);
                        break;
                    }
                }
                if (x == size) {
                    printf("Element %d is not found in the array.\n", search);
                }
                break;
    case 8:
         printf("Exiting the program.\n");
             break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 8);

    return 0;
}
