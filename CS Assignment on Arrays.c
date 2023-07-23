#include <stdio.h>

#define MAX_SIZE 100

// Function prototypes
void initializeArray(int array[], int size);
void printArray(int array[], int size);
int findMax(int array[], int size);
int findMin(int array[], int size);
int calculateSum(int array[], int size);
float calculateAverage(int array[], int size);
int searchElement(int array[], int size, int element);

int main() {
    int array[MAX_SIZE];
    int size = 0;
    int choice;

    do {
        printf("\nMenu:\n");
        printf("a. Initialize an array\n");
        printf("b. Print the array\n");
        printf("c. Find the maximum element in the array\n");
        printf("d. Find the minimum element in the array\n");
        printf("e. Calculate the sum of all elements in the array\n");
        printf("f. Calculate the average of all elements in the array\n");
        printf("g. Search for a specific element in the array\n");
        printf("h. Exit the program\n");
        printf("Enter your choice: ");
        scanf(" %c", &choice);

        switch (choice) {
            case 'a':
                printf("Enter the size of the array: ");
                scanf("%d", &size);
                initializeArray(array, size);
                printf("Array initialized.\n");
                break;
            case 'b':
                printf("Array: ");
                printArray(array, size);
                break;
            case 'c':
                printf("Maximum element: %d\n", findMax(array, size));
                break;
            case 'd':
                printf("Minimum element: %d\n", findMin(array, size));
                break;
            case 'e':
                printf("Sum of all elements: %d\n", calculateSum(array, size));
                break;
            case 'f':
                printf("Average of all elements: %.2f\n", calculateAverage(array, size));
                break;
            case 'g':
                printf("Enter the element to search: ");
                int element;
                scanf("%d", &element);
                int index = searchElement(array, size, element);
                if (index != -1)
                    printf("Element %d found at index %d\n", element, index);
                else
                    printf("Element %d not found in the array\n", element);
                break;
            case 'h':
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    } while (choice != 'h');

    return 0;
}

void initializeArray(int array[], int size) {
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i);
        scanf("%d", &array[i]);
    }
}

void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int findMax(int array[], int size) {
    int max = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}

int findMin(int array[], int size) {
    int min = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    return min;
}

int calculateSum(int array[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }
    return sum;
}

float calculateAverage(int array[], int size) {
    int sum = calculateSum(array, size);
    return (float) sum / size;
}

int searchElement(int array[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (array[i] == element) {
            return i;
        }
    }
    return -1;
}
